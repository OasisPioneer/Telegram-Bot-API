from __future__ import annotations

from CppContext import CppContext
from Model import (
    TelegramModel,
    TelegramType,
    TypeKind,
    TypeRef,
    UnionDefinition,
)


class TypeGenerator:

    def __init__(
        self,
        model: TelegramModel,
        context: CppContext,
    ) -> None:
        self.model = model
        self.context = context

    def generate(
        self,
        item: TelegramType | UnionDefinition,
    ) -> str:

        if isinstance(item, UnionDefinition):
            return self.generate_union(item)

        if item.kind == TypeKind.OBJECT:
            return self.generate_object(item)

        if item.kind == TypeKind.ENUM:
            return self.generate_enum(item)

        if item.kind == TypeKind.UNION:
            return self.generate_union(item)

        raise ValueError(
            f"Unsupported type kind: {item.kind}"
        )

    def generate_object(
        self,
        item: TelegramType,
    ) -> str:

        includes: set[str] = set()
        forward_declarations: set[str] = set()
        field_lines: list[str] = []

        for field in item.fields:

            cpp_type = self.context.field_type_to_cpp(
                field.type,
                field.required,
                owner=item.name,
            )

            includes.update(
                cpp_type.includes
            )

            self._collect_forward_declarations(
                field.type,
                item.name,
                forward_declarations,
            )

            field_lines.append(
                self._render_field(
                    name=field.cpp_name,
                    cpp_type=cpp_type.type,
                    required=field.required,
                )
            )

        for name in forward_declarations:
            includes.discard(
                f'"{name}.HPP"'
            )

        includes.discard(
            f'"{item.name}.HPP"'
        )

        return self._render_header(
            name=item.name,
            includes=includes,
            forward_declarations=forward_declarations,
            body=self._render_struct(
                item.name,
                field_lines,
            ),
        )

    def generate_enum(
        self,
        item: TelegramType,
    ) -> str:
        raise NotImplementedError(
            "Enum generation is not implemented yet"
        )

    def generate_union(
        self,
        item: UnionDefinition,
    ) -> str:

        cpp_type = self.context.named_union_to_cpp(
            item.name
        )

        includes: set[str] = set(
            cpp_type.includes
        )

        forward_declarations: set[str] = set()

        recursive_alternatives = (
            self.context.graph.recursive_union_alternatives_global(
                item.name
            )
        )

        for name in recursive_alternatives:
            includes.discard(
                f'"{name}.HPP"'
            )

            forward_declarations.add(
                name
            )

        body = (
            f"using {item.name} = "
            f"{cpp_type.type};"
        )

        return self._render_header(
            name=item.name,
            includes=includes,
            forward_declarations=forward_declarations,
            body=body,
        )

    def _collect_forward_declarations(
        self,
        type_ref: TypeRef,
        owner: str,
        output: set[str],
    ) -> None:

        if type_ref.is_object():

            name = type_ref.name

            if (
                name
                and name != owner
                and self.context.graph.is_recursive_edge(
                    owner,
                    name,
                )
            ):
                output.add(name)

            return

        if type_ref.is_array():

            if type_ref.element is not None:
                self._collect_forward_declarations(
                    type_ref.element,
                    owner,
                    output,
                )

            return

        if type_ref.is_union():

            union_name = None

            if type_ref.union_info is not None:
                union_name = (
                    type_ref.union_info.name
                )

            if union_name:

                recursive = (
                    self.context.graph.recursive_union_alternatives(
                        owner,
                        union_name,
                    )
                )

                for name in recursive:
                    if name != owner:
                        output.add(name)

                return

            for alternative in type_ref.alternatives:
                self._collect_forward_declarations(
                    alternative,
                    owner,
                    output,
                )

    def _render_header(
        self,
        name,
        includes,
        forward_declarations,
        body,
    ) -> str:

        guard = (
            "TELEGRAMBOTAPI_"
            f"{name.upper()}"
            "_HPP"
        )

        lines = [
            f"#ifndef {guard}",
            f"#define {guard}",
            "",
        ]

        for include in sorted(includes):
            lines.append(
                f"#include {include}"
            )

        if includes:
            lines.append("")

        if forward_declarations:

            lines += [
                "namespace TelegramBotAPI::Type {",
                "",
            ]

            for declaration in sorted(
                forward_declarations
            ):
                lines.append(
                    f"struct {declaration};"
                )

            lines += [
                "",
                "}",
                "",
            ]

        lines += [
            "namespace TelegramBotAPI::Type {",
            "",
            body,
            "",
            "}",
            "",
            f"#endif // {guard}",
            "",
        ]

        return "\n".join(lines)

    def _render_struct(
        self,
        name,
        fields,
    ) -> str:

        lines = [
            f"struct {name} {{"
        ]

        if fields:
            lines.extend(
                f"    {field}"
                for field in fields
            )

        lines.append("};")

        return "\n".join(lines)

    @staticmethod
    def _render_field(
        name: str,
        cpp_type: str,
        required: bool,
    ) -> str:

        if required:
            return f"{cpp_type} {name};"

        return f"{cpp_type} {name}{{}};"
