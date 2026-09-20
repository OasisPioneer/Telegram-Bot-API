from __future__ import annotations

from dataclasses import dataclass

from Model import (
    TelegramModel,
    TelegramType,
    TypeRef,
    UnionDefinition,
    ValueKind,
)

from TypeGraph import TypeGraph


PRIMITIVE_CPP: dict[ValueKind, str] = {
    ValueKind.INTEGER: "long long",
    ValueKind.STRING: "std::string",
    ValueKind.BOOLEAN: "bool",
    ValueKind.FLOAT: "double",
    ValueKind.UNKNOWN: "boost::json::value",
}


SPECIAL_TYPES = {
    "InputFile",
}


TYPE_NAMESPACE = "::TelegramBotAPI::Type"

INPUT_FILE_INCLUDE = "<TelegramBotAPI/Types/InputFile.HPP>"


@dataclass(frozen=True)
class CppType:
    type: str
    includes: frozenset[str] = frozenset()

    def merge(
        self,
        other: "CppType",
    ) -> "CppType":
        return CppType(
            type=self.type,
            includes=self.includes | other.includes,
        )


class CppContext:

    def __init__(
        self,
        model: TelegramModel,
        graph: TypeGraph | None = None,
    ) -> None:

        self.model = model

        self.types: list[TelegramType] = (
            model.types
        )

        self.unions: list[UnionDefinition] = (
            model.unions
        )

        self.type_registry = {
            item.name: item
            for item in self.types
        }

        self.union_registry = {
            item.name: item
            for item in self.unions
        }

        self.graph = (
            TypeGraph(
                self.types,
                self.unions,
            )
            if graph is None
            else graph
        )

    def find_type(
        self,
        name: str,
    ) -> TelegramType | None:
        return self.type_registry.get(name)

    def find_union(
        self,
        name: str,
    ) -> UnionDefinition | None:
        return self.union_registry.get(name)

    def has_type(
        self,
        name: str,
    ) -> bool:
        return name in self.type_registry

    def has_union(
        self,
        name: str,
    ) -> bool:
        return name in self.union_registry

    def type_to_cpp(
        self,
        type_ref: TypeRef,
        owner: str | None = None,
    ) -> CppType:

        if type_ref.kind in PRIMITIVE_CPP:
            return CppType(
                type=PRIMITIVE_CPP[type_ref.kind],
                includes=frozenset(
                    self._primitive_includes(
                        type_ref.kind
                    )
                ),
            )

        if type_ref.is_input_file_union():
            return CppType(
                type=f"{TYPE_NAMESPACE}::InputFile",
                includes=frozenset(
                    {INPUT_FILE_INCLUDE}
                ),
            )

        if type_ref.is_object():
            return self._object_to_cpp(
                type_ref,
                owner,
            )

        if type_ref.is_array():
            if type_ref.element is None:
                return CppType(
                    type="std::vector<boost::json::value>",
                    includes=frozenset(
                        {
                            "<vector>",
                            "<boost/json/value.hpp>",
                        }
                    ),
                )

            element = self.type_to_cpp(
                type_ref.element,
                owner,
            )

            return CppType(
                type=f"std::vector<{element.type}>",
                includes=(
                    element.includes
                    | frozenset({"<vector>"})
                ),
            )

        if type_ref.is_union():
            if type_ref.is_input_file_union():
                return CppType(
                    type=f"{TYPE_NAMESPACE}::InputFile",
                    includes=frozenset(
                        {INPUT_FILE_INCLUDE}
                    ),
                )

            if (
                type_ref.union_info is not None
                and type_ref.union_info.name
            ):
                return self.named_union_to_cpp(
                    type_ref.union_info.name,
                    owner=owner,
                )

            return self._union_to_cpp(
                type_ref,
                owner,
            )

        return CppType(
            type="boost::json::value",
            includes=frozenset(
                {"<boost/json/value.hpp>"}
            ),
        )

    def field_type_to_cpp(
        self,
        type_ref: TypeRef,
        required: bool,
        owner: str | None = None,
    ) -> CppType:

        base = self.type_to_cpp(
            type_ref,
            owner,
        )

        if required:
            return base

        if (
            type_ref.is_object()
            and owner is not None
            and self._requires_shared_ptr(
                owner,
                type_ref.name,
            )
        ):
            name = type_ref.name

            if not name:
                return CppType(
                    type=f"std::optional<{base.type}>",
                    includes=(
                        base.includes
                        | frozenset({"<optional>"})
                    ),
                )

            qualified_name = self._qualified_type_name(
                name
            )

            return CppType(
                type=f"std::shared_ptr<{qualified_name}>",
                includes=(
                    base.includes
                    | frozenset(
                        {
                            f'"TelegramBotAPI/Types/{name}.HPP"',
                            "<memory>",
                        }
                    )
                ),
            )

        return CppType(
            type=f"std::optional<{base.type}>",
            includes=(
                base.includes
                | frozenset({"<optional>"})
            ),
        )

    def _object_to_cpp(
        self,
        type_ref: TypeRef,
        owner: str | None,
    ) -> CppType:

        name = type_ref.name

        if not name:
            return CppType(
                type="boost::json::value",
                includes=frozenset(
                    {"<boost/json/value.hpp>"}
                ),
            )

        if name in SPECIAL_TYPES:
            return CppType(
                type=f"{TYPE_NAMESPACE}::{name}",
                includes=frozenset(
                    {INPUT_FILE_INCLUDE}
                ),
            )

        if not self.has_type(name):
            return CppType(
                type="boost::json::value",
                includes=frozenset(
                    {"<boost/json/value.hpp>"}
                ),
            )

        qualified_name = self._qualified_type_name(
            name
        )

        if (
            owner is not None
            and self._requires_shared_ptr(
                owner,
                name,
            )
        ):
            return CppType(
                type=f"std::shared_ptr<{qualified_name}>",
                includes=frozenset(
                    {
                        f'"TelegramBotAPI/Types/{name}.HPP"',
                        "<memory>",
                    }
                ),
            )

        return CppType(
            type=qualified_name,
            includes=frozenset(
                {f'"TelegramBotAPI/Types/{name}.HPP"'}
            ),
        )

    def _union_to_cpp(
        self,
        type_ref: TypeRef,
        owner: str | None,
    ) -> CppType:

        if not type_ref.alternatives:
            return CppType(
                type="boost::json::value",
                includes=frozenset(
                    {"<boost/json/value.hpp>"}
                ),
            )

        alternatives = [
            self.type_to_cpp(
                alternative,
                owner,
            )
            for alternative in type_ref.alternatives
        ]

        return self._make_variant(
            alternatives
        )

    def named_union_to_cpp(
        self,
        name: str,
        owner: str | None = None,
    ) -> CppType:

        if name == "InputFile":
            return CppType(
                type=f"{TYPE_NAMESPACE}::InputFile",
                includes=frozenset(
                    {INPUT_FILE_INCLUDE}
                ),
            )

        union = self.find_union(name)

        if union is None:
            return CppType(
                type="boost::json::value",
                includes=frozenset(
                    {"<boost/json/value.hpp>"}
                ),
            )

        # Named unions have one public C++ alias.  Its recursive alternatives
        # therefore must be stable regardless of the owner field.  Owner-
        # specific recursion is appropriate only for anonymous inline unions.
        recursive_alternatives = (
            self.graph.recursive_union_alternatives_global(name)
        )

        alternatives: list[CppType] = []

        for alternative in union.alternatives:
            if (
                alternative.is_object()
                and alternative.name in recursive_alternatives
            ):
                alternatives.append(
                    self._recursive_object_cpp(
                        alternative.name
                    )
                )
            else:
                alternatives.append(
                    self.type_to_cpp(
                        alternative,
                        owner,
                    )
                )

        return self._make_variant(
            alternatives
        )

    def _make_variant(
        self,
        alternatives: list[CppType],
    ) -> CppType:

        if not alternatives:
            return CppType(
                type="boost::json::value",
                includes=frozenset(
                    {"<boost/json/value.hpp>"}
                ),
            )

        unique: list[CppType] = []
        seen: set[str] = set()

        for item in alternatives:
            if item.type in seen:
                continue

            seen.add(item.type)
            unique.append(item)

        if len(unique) == 1:
            return unique[0]

        includes: set[str] = {"<variant>"}

        for item in unique:
            includes.update(item.includes)

        return CppType(
            type=(
                "std::variant<"
                + ", ".join(
                    item.type
                    for item in unique
                )
                + ">"
            ),
            includes=frozenset(includes),
        )

    def _recursive_object_cpp(
        self,
        name: str,
    ) -> CppType:

        qualified_name = self._qualified_type_name(
            name
        )

        return CppType(
            type=f"std::shared_ptr<{qualified_name}>",
            includes=frozenset(
                {
                    f'"TelegramBotAPI/Types/{name}.HPP"',
                    "<memory>",
                }
            ),
        )

    @staticmethod
    def _qualified_type_name(
        name: str,
    ) -> str:
        return f"{TYPE_NAMESPACE}::{name}"

    def _requires_shared_ptr(
        self,
        owner: str,
        target: str | None,
    ) -> bool:
        return bool(target) and self.graph.requires_shared_ptr(
            owner,
            target,
        )

    @staticmethod
    def _primitive_includes(
        kind: ValueKind,
    ) -> set[str]:
        if kind == ValueKind.STRING:
            return {"<string>"}

        if kind == ValueKind.UNKNOWN:
            return {"<boost/json/value.hpp>"}

        return set()
