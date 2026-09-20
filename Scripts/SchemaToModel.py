from __future__ import annotations

from Model import (
    Field,
    Parameter,
    TelegramMethod,
    TelegramModel,
    TelegramType,
    TypeKind,
    TypeRef,
    UnionDefinition,
    UnionInfo,
    UnionKind,
    ValueKind,
)

from Schema import (
    Schema,
    SchemaField,
    SchemaMethod,
    SchemaParameter,
    SchemaType,
    SchemaUnion,
)

from CppNaming import (
    method_name_to_cpp,
    snake_to_cpp_name,
    type_name_to_cpp,
)


class SchemaToModel:
    PRIMITIVE_TYPES = {
        "integer": ValueKind.INTEGER,
        "string": ValueKind.STRING,
        "boolean": ValueKind.BOOLEAN,
        "number": ValueKind.FLOAT,
    }

    def __init__(self, schema: Schema):
        self.schema = schema

        self.type_names = {
            item.name
            for item in schema.types
        }

        self.union_names = {
            item.name
            for item in schema.unions
        }

        self.named_unions = {
            item.name: item
            for item in schema.unions
        }

    def convert(self) -> TelegramModel:
        model = TelegramModel(
            version=self.schema.version
        )

        model.unions = [
            self.convert_union(item)
            for item in self.schema.unions
        ]

        model.types = [
            self.convert_type(item)
            for item in self.schema.types
        ]

        model.methods = [
            self.convert_method(item)
            for item in self.schema.methods
        ]

        self.validate(model)

        return model

    # ------------------------------------------------------------------
    # Types
    # ------------------------------------------------------------------

    def convert_type(
        self,
        item: SchemaType,
    ) -> TelegramType:
        return TelegramType(
            name=type_name_to_cpp(item.name),
            description=item.description,
            fields=[
                self.convert_field(field)
                for field in item.fields
            ],
            kind=self.convert_type_kind(item),
        )

    def convert_type_kind(
        self,
        item: SchemaType,
    ) -> TypeKind:
        if item.kind == "object":
            return TypeKind.OBJECT

        if item.kind == "enum":
            return TypeKind.ENUM

        if item.kind == "union":
            return TypeKind.UNION

        raise ValueError(
            f"Unsupported schema type kind: "
            f"{item.name!r}: {item.kind!r}"
        )

    def convert_field(
        self,
        item: SchemaField,
    ) -> Field:
        return Field(
            # Original Telegram / JSON field name.
            #
            # Example:
            #     message_id
            #
            name=item.name,

            # C++ member name.
            #
            # Example:
            #     MessageID
            #
            cpp_name=snake_to_cpp_name(item.name),

            type=self.convert_type_ref(item.type),

            required=item.required,

            description=item.description,
        )

    # ------------------------------------------------------------------
    # Unions
    # ------------------------------------------------------------------

    def convert_union(
        self,
        item: SchemaUnion,
    ) -> UnionDefinition:
        return UnionDefinition(
            name=type_name_to_cpp(item.name),

            kind=self.convert_union_kind(item),

            alternatives=[
                self.convert_type_ref(alternative)
                for alternative in item.alternatives
            ],

            discriminator=item.discriminator,

            description=item.description,
        )

    def convert_union_kind(
        self,
        item: SchemaUnion,
    ) -> UnionKind:
        if item.kind == "input_file":
            return UnionKind.INPUT_FILE

        if item.kind == "polymorphic":
            return UnionKind.POLYMORPHIC

        if item.kind == "value":
            return UnionKind.VALUE

        # Current tgbotspec schema may omit the explicit kind
        # for named polymorphic unions such as RichBlock.
        if item.kind is None:
            return UnionKind.POLYMORPHIC

        raise ValueError(
            f"Unsupported union kind: "
            f"{item.name!r}: {item.kind!r}"
        )

    # ------------------------------------------------------------------
    # Methods
    # ------------------------------------------------------------------

    def convert_method(
        self,
        item: SchemaMethod,
    ) -> TelegramMethod:
        return TelegramMethod(
            # Telegram method names such as:
            #
            # sendMessage
            # sendPhoto
            # getMe
            #
            # are already valid C++ identifiers and intentionally
            # preserve Telegram's casing.
            name=method_name_to_cpp(item.name),

            description=item.description,

            parameters=[
                self.convert_parameter(parameter)
                for parameter in item.parameters
            ],

            return_type=self.convert_type_ref(item.returns),
        )

    def convert_parameter(
        self,
        item: SchemaParameter,
    ) -> Parameter:
        return Parameter(
            # Original Telegram parameter name.
            #
            # Example:
            #     chat_id
            #
            name=item.name,

            # C++ parameter name.
            #
            # Example:
            #     ChatID
            #
            cpp_name=snake_to_cpp_name(item.name),

            type=self.convert_type_ref(item.type),

            required=item.required,

            description=item.description,
        )

    # ------------------------------------------------------------------
    # Type references
    # ------------------------------------------------------------------

    def convert_type_ref(
        self,
        value: str,
    ) -> TypeRef:
        expression = value.strip()

        if not expression:
            return TypeRef(
                kind=ValueKind.UNKNOWN,
                source=value,
            )

        # --------------------------------------------------------------
        # Array<T>
        # --------------------------------------------------------------

        if self._is_array_expression(expression):
            return TypeRef(
                kind=ValueKind.ARRAY,

                element=self.convert_type_ref(
                    self._array_element(expression)
                ),

                source=value,
            )

        # --------------------------------------------------------------
        # Anonymous value union
        # --------------------------------------------------------------

        alternatives = self._split_union(expression)

        if len(alternatives) > 1:
            refs = [
                self.convert_type_ref(item)
                for item in alternatives
            ]

            info = UnionInfo(
                kind=UnionKind.VALUE,
                alternatives=refs,
                name=None,
                description="",
            )

            return TypeRef(
                kind=ValueKind.UNION,
                alternatives=refs,
                source=value,
                union_info=info,
            )

        # --------------------------------------------------------------
        # Primitive
        # --------------------------------------------------------------

        primitive = self._primitive_kind(expression)

        if primitive is not None:
            return TypeRef(
                kind=primitive,
                source=value,
            )

        # --------------------------------------------------------------
        # InputFile
        #
        # InputFile is not part of the Telegram OpenAPI schema as a
        # normal generated object. It is a transport-layer special type
        # implemented manually in the C++ library.
        # --------------------------------------------------------------

        if expression == "InputFile":
            ref = TypeRef(
                kind=ValueKind.OBJECT,
                name="InputFile",
                source=value,
            )

            info = UnionInfo(
                kind=UnionKind.INPUT_FILE,
                alternatives=[ref],
                name="InputFile",
                description=(
                    "TelegramBotAPI transport-layer InputFile."
                ),
            )

            return TypeRef(
                kind=ValueKind.UNION,
                name="InputFile",
                alternatives=[ref],
                source=value,
                union_info=info,
            )

        # --------------------------------------------------------------
        # Named union
        # --------------------------------------------------------------

        if expression in self.union_names:
            definition = self.named_unions[expression]

            alternatives = [
                self.convert_type_ref(item)
                for item in definition.alternatives
            ]

            info = UnionInfo(
                kind=self.convert_union_kind(definition),
                alternatives=alternatives,
                discriminator=definition.discriminator,
                name=type_name_to_cpp(definition.name),
                description=definition.description,
            )

            return TypeRef(
                kind=ValueKind.UNION,
                name=type_name_to_cpp(expression),
                alternatives=alternatives,
                source=value,
                union_info=info,
            )

        # --------------------------------------------------------------
        # Named object type
        # --------------------------------------------------------------

        if expression in self.type_names:
            return TypeRef(
                kind=ValueKind.OBJECT,
                name=type_name_to_cpp(expression),
                source=value,
            )

        # --------------------------------------------------------------
        # Unknown
        # --------------------------------------------------------------

        return TypeRef(
            kind=ValueKind.UNKNOWN,
            name=expression,
            source=value,
        )

    # ------------------------------------------------------------------
    # Primitive helpers
    # ------------------------------------------------------------------

    @staticmethod
    def _primitive_kind(
        expression: str,
    ) -> ValueKind | None:
        normalized = expression.lower()

        if normalized in {
            "integer",
            "int",
            "int32",
            "int64",
            "long",
            "long long",
        }:
            return ValueKind.INTEGER

        if normalized in {
            "string",
            "str",
        }:
            return ValueKind.STRING

        if normalized in {
            "boolean",
            "bool",
        }:
            return ValueKind.BOOLEAN

        if normalized in {
            "float",
            "double",
            "number",
        }:
            return ValueKind.FLOAT

        if normalized in {
            "unknown",
            "any",
            "object",
        }:
            return ValueKind.UNKNOWN

        return None

    # ------------------------------------------------------------------
    # Array helpers
    # ------------------------------------------------------------------

    @staticmethod
    def _is_array_expression(
        expression: str,
    ) -> bool:
        return (
            expression.startswith("Array<")
            and expression.endswith(">")
        )

    @staticmethod
    def _array_element(
        expression: str,
    ) -> str:
        return expression[
            len("Array<"):-1
        ].strip()

    # ------------------------------------------------------------------
    # Union parser
    # ------------------------------------------------------------------

    @staticmethod
    def _split_union(
        expression: str,
    ) -> list[str]:
        depth = 0
        result: list[str] = []
        current: list[str] = []

        tokens = expression.split()

        for token in tokens:
            if token.startswith("Array<"):
                depth += token.count("<")
                depth -= token.count(">")

            if token == "or" and depth == 0:
                part = "".join(current).strip()

                if part:
                    result.append(part)

                current = []
                continue

            if current:
                current.append(" ")

            current.append(token)

        part = "".join(current).strip()

        if part:
            result.append(part)

        return result

    # ------------------------------------------------------------------
    # Validation
    # ------------------------------------------------------------------

    def validate(
        self,
        model: TelegramModel,
    ) -> None:
        self._validate_unique_type_names(model)
        self._validate_unique_union_names(model)
        self._validate_type_references(model)
        self._validate_field_names(model)
        self._validate_parameter_names(model)

    @staticmethod
    def _validate_unique_type_names(
        model: TelegramModel,
    ) -> None:
        names = [
            item.name
            for item in model.types
        ]

        duplicates = {
            name
            for name in names
            if names.count(name) > 1
        }

        if duplicates:
            raise ValueError(
                "Duplicate Telegram type names: "
                + ", ".join(sorted(duplicates))
            )

    @staticmethod
    def _validate_unique_union_names(
        model: TelegramModel,
    ) -> None:
        names = [
            item.name
            for item in model.unions
        ]

        duplicates = {
            name
            for name in names
            if names.count(name) > 1
        }

        if duplicates:
            raise ValueError(
                "Duplicate Telegram union names: "
                + ", ".join(sorted(duplicates))
            )

    def _validate_type_references(
        self,
        model: TelegramModel,
    ) -> None:
        known_types = {
            item.name
            for item in model.types
        }

        known_unions = {
            item.name
            for item in model.unions
        }

        def validate_ref(
            ref: TypeRef,
            owner: str,
        ) -> None:
            # ----------------------------------------------------------
            # Object
            # ----------------------------------------------------------

            if ref.kind == ValueKind.OBJECT:
                if ref.name == "InputFile":
                    return

                if ref.name not in known_types:
                    raise ValueError(
                        f"Unknown object type "
                        f"{ref.name!r} referenced by "
                        f"{owner!r}"
                    )

                return

            # ----------------------------------------------------------
            # Array
            # ----------------------------------------------------------

            if ref.kind == ValueKind.ARRAY:
                if ref.element is None:
                    raise ValueError(
                        f"Array type without element "
                        f"in {owner!r}"
                    )

                validate_ref(
                    ref.element,
                    owner,
                )

                return

            # ----------------------------------------------------------
            # Union
            # ----------------------------------------------------------

            if ref.kind == ValueKind.UNION:
                if ref.union_info is None:
                    raise ValueError(
                        f"Union without UnionInfo "
                        f"in {owner!r}"
                    )

                if (
                    ref.union_info.name is not None
                    and ref.union_info.name not in known_unions
                    and ref.union_info.name != "InputFile"
                ):
                    raise ValueError(
                        f"Unknown union "
                        f"{ref.union_info.name!r} "
                        f"referenced by {owner!r}"
                    )

                for alternative in ref.alternatives:
                    validate_ref(
                        alternative,
                        owner,
                    )

        # --------------------------------------------------------------
        # Types
        # --------------------------------------------------------------

        for telegram_type in model.types:
            for field in telegram_type.fields:
                validate_ref(
                    field.type,
                    telegram_type.name,
                )

        # --------------------------------------------------------------
        # Methods
        # --------------------------------------------------------------

        for method in model.methods:
            for parameter in method.parameters:
                validate_ref(
                    parameter.type,
                    method.name,
                )

            validate_ref(
                method.return_type,
                method.name,
            )

        # --------------------------------------------------------------
        # Unions
        # --------------------------------------------------------------

        for union in model.unions:
            for alternative in union.alternatives:
                validate_ref(
                    alternative,
                    union.name,
                )

    @staticmethod
    def _validate_field_names(
        model: TelegramModel,
    ) -> None:
        for telegram_type in model.types:
            cpp_names: set[str] = set()

            for field in telegram_type.fields:
                if field.cpp_name in cpp_names:
                    raise ValueError(
                        f"Duplicate C++ field name "
                        f"{field.cpp_name!r} "
                        f"in {telegram_type.name!r}"
                    )

                cpp_names.add(field.cpp_name)

    @staticmethod
    def _validate_parameter_names(
        model: TelegramModel,
    ) -> None:
        for method in model.methods:
            cpp_names: set[str] = set()

            for parameter in method.parameters:
                if parameter.cpp_name in cpp_names:
                    raise ValueError(
                        f"Duplicate C++ parameter name "
                        f"{parameter.cpp_name!r} "
                        f"in {method.name!r}"
                    )

                cpp_names.add(parameter.cpp_name)


# ==========================================================================
# Public compatibility entry point
# ==========================================================================

def convert_schema(
    schema: Schema,
) -> TelegramModel:
    """
    Convert the parsed Schema into the intermediate TelegramModel.

    This function is intentionally kept as the public module-level entry
    point because GenerateTypes.py imports it directly:

        from SchemaToModel import convert_schema

    The actual conversion logic remains inside SchemaToModel so that the
    converter is still easy to instantiate and test independently.
    """
    return SchemaToModel(schema).convert()


if __name__ == "__main__":
    print(
        "SchemaToModel module loaded successfully."
    )
