from __future__ import annotations

from dataclasses import dataclass, field


@dataclass
class SchemaField:
    """
    Schema 层字段定义。
    """

    name: str
    type: str
    required: bool = False
    description: str = ""


@dataclass
class SchemaType:
    """
    Schema 层 Object / Enum / Union 类型。

    当前阶段主要使用：

        kind = "object"

    Enum / Union 后续继续扩展。
    """

    name: str
    description: str = ""
    fields: list[SchemaField] = field(
        default_factory=list
    )
    kind: str = "object"


@dataclass
class SchemaUnion:
    """
    Schema 层面的具名 Union。

    例如：

        RichBlock =
            RichBlockParagraph
            or RichBlockSectionHeading
            or RichBlockPreformatted

    discriminator:
        JSON 中用于判断具体类型的字段。

    例如：

        {
            "type": "paragraph",
            ...
        }

    kind:
        可选的显式 Union 分类。

        value
        input_file
        polymorphic
        unknown

    如果 kind 没有指定，则 Parser 会根据 alternatives
    和 discriminator 进一步推导。
    """

    name: str

    alternatives: list[str] = field(
        default_factory=list
    )

    discriminator: str | None = None

    kind: str | None = None

    description: str = ""


@dataclass
class SchemaParameter:
    """
    Schema 层 Method 参数。
    """

    name: str
    type: str
    required: bool = False
    description: str = ""


@dataclass
class SchemaMethod:
    """
    Schema 层 Method。
    """

    name: str

    description: str = ""

    parameters: list[SchemaParameter] = field(
        default_factory=list
    )

    returns: str = "Unknown"


@dataclass
class Schema:
    """
    Telegram API Schema 根对象。
    """

    version: str = ""

    types: list[SchemaType] = field(
        default_factory=list
    )

    unions: list[SchemaUnion] = field(
        default_factory=list
    )

    methods: list[SchemaMethod] = field(
        default_factory=list
    )
