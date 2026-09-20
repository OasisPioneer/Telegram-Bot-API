from __future__ import annotations

from dataclasses import dataclass, field

from Model import (
    TelegramType,
    TypeRef,
    UnionDefinition,
)


# ============================================================
# Special Runtime Types
# ============================================================

SPECIAL_TYPES = {
    "InputFile",
}


# ============================================================
# Graph Dependency
# ============================================================

@dataclass(frozen=True)
class TypeDependency:
    owner: str
    target: str
    recursive: bool = False


# ============================================================
# Graph Node
# ============================================================

@dataclass
class TypeNode:
    name: str

    dependencies: set[str] = field(
        default_factory=set
    )

    recursive_dependencies: set[str] = field(
        default_factory=set
    )


# ============================================================
# Type Graph
# ============================================================

class TypeGraph:

    def __init__(
        self,
        types: list[TelegramType],
        unions: list[UnionDefinition] | None = None,
    ) -> None:

        self.types = types

        self.unions = (
            unions
            if unions is not None
            else []
        )

        self.type_registry: dict[
            str,
            TelegramType,
        ] = {
            item.name: item
            for item in types
        }

        self.union_registry: dict[
            str,
            UnionDefinition,
        ] = {
            item.name: item
            for item in self.unions
        }

        self.nodes: dict[
            str,
            TypeNode,
        ] = {}

        self.dependencies: list[
            TypeDependency
        ] = []

        self.reverse_dependencies: dict[
            str,
            set[str],
        ] = {}

        self._recursive_edges: set[
            tuple[str, str]
        ] = set()

        self._recursive_unions: set[
            str
        ] = set()

        self._build()

    # ========================================================
    # Build
    # ========================================================

    def _build(self) -> None:

        self._register_nodes()

        self._collect_dependencies()

        self._detect_recursive_components()

        self._detect_recursive_unions()

    # ========================================================
    # Register Nodes
    # ========================================================

    def _register_nodes(self) -> None:

        for telegram_type in self.types:

            self.nodes[
                telegram_type.name
            ] = TypeNode(
                name=telegram_type.name
            )

    # ========================================================
    # Collect Dependencies
    # ========================================================

    def _collect_dependencies(self) -> None:

        for telegram_type in self.types:

            owner = telegram_type.name

            node = self.nodes[
                owner
            ]

            for field in telegram_type.fields:

                targets = (
                    self._extract_object_dependencies(
                        field.type
                    )
                )

                for target in targets:

                    if target in SPECIAL_TYPES:

                        continue

                    if target not in self.type_registry:

                        continue

                    node.dependencies.add(
                        target
                    )

                    self.dependencies.append(
                        TypeDependency(
                            owner=owner,
                            target=target,
                        )
                    )

                    self.reverse_dependencies.setdefault(
                        target,
                        set(),
                    ).add(
                        owner
                    )

    # ========================================================
    # Extract Object Dependencies
    # ========================================================

    def _extract_object_dependencies(
        self,
        type_ref: TypeRef,
    ) -> set[str]:

        result: set[str] = set()

        # ----------------------------------------------------
        # Object
        # ----------------------------------------------------

        if type_ref.is_object():

            if (
                type_ref.name
                and type_ref.name
                not in SPECIAL_TYPES
            ):

                result.add(
                    type_ref.name
                )

            return result

        # ----------------------------------------------------
        # Array
        # ----------------------------------------------------

        if type_ref.is_array():

            if type_ref.element is not None:

                result.update(
                    self._extract_object_dependencies(
                        type_ref.element
                    )
                )

            return result

        # ----------------------------------------------------
        # Union
        # ----------------------------------------------------

        if type_ref.is_union():

            for alternative in (
                type_ref.alternatives
            ):

                result.update(
                    self._extract_object_dependencies(
                        alternative
                    )
                )

            return result

        return result

    # ========================================================
    # Recursive Component Detection
    # ========================================================

    def _detect_recursive_components(
        self,
    ) -> None:

        components = self._tarjan_scc()

        for component in components:

            if len(component) == 1:

                name = next(
                    iter(component)
                )

                node = self.nodes[
                    name
                ]

                if name not in node.dependencies:

                    continue

            for owner in component:

                node = self.nodes[
                    owner
                ]

                for target in node.dependencies:

                    if target in component:

                        node.recursive_dependencies.add(
                            target
                        )

                        self._recursive_edges.add(
                            (
                                owner,
                                target,
                            )
                        )

        self.dependencies = [
            TypeDependency(
                owner=item.owner,
                target=item.target,
                recursive=(
                    item.owner,
                    item.target,
                ) in self._recursive_edges,
            )
            for item in self.dependencies
        ]

    # ========================================================
    # Recursive Named Union Detection
    # ========================================================

    def _detect_recursive_unions(
        self,
    ) -> None:

        self._recursive_unions.clear()

        for union in self.unions:

            alternatives = {
                alternative.name
                for alternative
                in union.alternatives
                if (
                    alternative.is_object()
                    and alternative.name
                )
            }

            if not alternatives:

                continue

            for owner in self.nodes:

                if self.is_recursive_union_edge(
                    owner,
                    union.name,
                ):

                    self._recursive_unions.add(
                        union.name
                    )

                    break

    # ========================================================
    # Tarjan SCC
    # ========================================================

    def _tarjan_scc(
        self,
    ) -> list[set[str]]:

        index = 0

        indices: dict[
            str,
            int,
        ] = {}

        lowlinks: dict[
            str,
            int,
        ] = {}

        stack: list[str] = []

        on_stack: set[str] = set()

        components: list[
            set[str]
        ] = []

        def strong_connect(
            name: str,
        ) -> None:

            nonlocal index

            indices[name] = index

            lowlinks[name] = index

            index += 1

            stack.append(
                name
            )

            on_stack.add(
                name
            )

            for target in self.nodes[
                name
            ].dependencies:

                if target not in indices:

                    strong_connect(
                        target
                    )

                    lowlinks[name] = min(
                        lowlinks[name],
                        lowlinks[target],
                    )

                elif target in on_stack:

                    lowlinks[name] = min(
                        lowlinks[name],
                        indices[target],
                    )

            if (
                lowlinks[name]
                == indices[name]
            ):

                component: set[str] = set()

                while True:

                    target = stack.pop()

                    on_stack.remove(
                        target
                    )

                    component.add(
                        target
                    )

                    if target == name:

                        break

                components.append(
                    component
                )

        for name in self.nodes:

            if name not in indices:

                strong_connect(
                    name
                )

        return components

    # ========================================================
    # Queries
    # ========================================================

    def is_recursive(
        self,
        name: str,
    ) -> bool:

        node = self.nodes.get(
            name
        )

        if node is None:

            return False

        return bool(
            node.recursive_dependencies
        )

    def recursive_types(
        self,
    ) -> list[str]:

        return sorted(
            name
            for name, node
            in self.nodes.items()
            if node.recursive_dependencies
        )

    def is_recursive_edge(
        self,
        owner: str,
        target: str,
    ) -> bool:

        return (
            owner,
            target,
        ) in self._recursive_edges

    def requires_shared_ptr(
        self,
        owner: str,
        target: str,
    ) -> bool:

        return self.is_recursive_edge(
            owner,
            target,
        )

    # ========================================================
    # Named Union Queries
    # ========================================================

    def is_recursive_union(
        self,
        union_name: str,
    ) -> bool:

        return union_name in self._recursive_unions

    def recursive_unions(
        self,
    ) -> list[str]:

        return sorted(
            self._recursive_unions
        )

    def is_recursive_union_edge(
        self,
        owner: str,
        union_name: str,
    ) -> bool:

        union = self.union_registry.get(
            union_name
        )

        if union is None:

            return False

        alternatives = {
            alternative.name
            for alternative
            in union.alternatives
            if (
                alternative.is_object()
                and alternative.name
            )
        }

        if not alternatives:

            return False

        for alternative in alternatives:

            if self.is_recursive_edge(
                owner,
                alternative,
            ):

                return True

            if (
                owner == alternative
                and self.is_recursive(
                    owner
                )
            ):

                return True

        return False

    def recursive_union_alternatives(
        self,
        owner: str,
        union_name: str,
    ) -> set[str]:

        union = self.union_registry.get(
            union_name
        )

        if union is None:

            return set()

        result: set[str] = set()

        for alternative in (
            union.alternatives
        ):

            if not alternative.is_object():

                continue

            target = alternative.name

            if not target:

                continue

            if self.is_recursive_edge(
                owner,
                target,
            ):

                result.add(
                    target
                )

            elif (
                owner == target
                and self.is_recursive(
                    owner
                )
            ):

                result.add(
                    target
                )

        return result

    def recursive_union_alternatives_global(
        self,
        union_name: str,
    ) -> set[str]:

        """
        Return every concrete object alternative of a named
        union that participates in a recursive dependency
        somewhere in the complete type graph.

        This is required when generating the named union itself.

        Example:

            using RichBlock = std::variant<
                RichBlockParagraph,
                ...
                std::shared_ptr<RichBlockList>,
                ...
            >;
        """

        result: set[str] = set()

        if not self.is_recursive_union(
            union_name
        ):

            return result

        for owner in self.nodes:

            result.update(
                self.recursive_union_alternatives(
                    owner,
                    union_name,
                )
            )

        return result

    # ========================================================
    # Validation
    # ========================================================

    def validate(
        self,
    ) -> list[str]:

        errors: list[str] = []

        for telegram_type in self.types:

            for field in telegram_type.fields:

                errors.extend(
                    self._validate_type_ref(
                        field.type,
                        (
                            f"{telegram_type.name}"
                            f".{field.name}"
                        ),
                    )
                )

        for union in self.unions:

            for index, alternative in enumerate(
                union.alternatives
            ):

                errors.extend(
                    self._validate_type_ref(
                        alternative,
                        (
                            f"union "
                            f"{union.name}"
                            f"[{index}]"
                        ),
                    )
                )

        return errors

    def _validate_type_ref(
        self,
        type_ref: TypeRef,
        location: str,
    ) -> list[str]:

        errors: list[str] = []

        if type_ref.is_object():

            if (
                type_ref.name
                not in SPECIAL_TYPES
                and type_ref.name
                not in self.type_registry
            ):

                errors.append(
                    f"{location}: "
                    f"unknown object type "
                    f"{type_ref.name}"
                )

            return errors

        if type_ref.is_array():

            if type_ref.element is None:

                errors.append(
                    f"{location}: "
                    f"array has no element type"
                )

                return errors

            return self._validate_type_ref(
                type_ref.element,
                location + "[]",
            )

        if type_ref.is_union():

            if not type_ref.alternatives:

                errors.append(
                    f"{location}: "
                    f"union has no alternatives"
                )

                return errors

            for index, alternative in enumerate(
                type_ref.alternatives
            ):

                errors.extend(
                    self._validate_type_ref(
                        alternative,
                        (
                            f"{location}"
                            f"[{index}]"
                        ),
                    )
                )

            return errors

        return errors

    def validate_or_raise(
        self,
    ) -> None:

        errors = self.validate()

        if errors:

            raise ValueError(
                "TypeGraph validation failed:\n"
                + "\n".join(errors)
            )

    # ========================================================
    # Debug
    # ========================================================

    def dump(
        self,
    ) -> None:

        for name in sorted(
            self.nodes
        ):

            node = self.nodes[
                name
            ]

            print(
                f"{name}:"
            )

            print(
                "  dependencies: "
                + str(
                    sorted(
                        node.dependencies
                    )
                )
            )

            print(
                "  recursive: "
                + str(
                    sorted(
                        node.recursive_dependencies
                    )
                )
            )

        print(
            "Recursive types: "
            + str(
                self.recursive_types()
            )
        )

        print(
            "Recursive unions: "
            + str(
                self.recursive_unions()
            )
        )
