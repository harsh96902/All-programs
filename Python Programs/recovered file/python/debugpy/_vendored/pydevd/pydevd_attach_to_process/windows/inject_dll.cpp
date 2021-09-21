ncludeView" type ="ViewIncludeType" use="optional" />
    <xs:attribute name="ExcludeView" type ="ViewExcludeType" use="optional" />
  </xs:attributeGroup>

  <xs:attributeGroup name="CommonAttributes_NoCondition_NoView">
    <xs:attribute name="ModuleName" type="ModuleNameStringType" use="optional" />
    <xs:attribute name="ModuleVersionMin" type="VersionStringType" use="optional" />
    <xs:attribute name="ModuleVersionMax" type="VersionStringType" use="optional" />
    <xs:attribute name="Optional" type="OptionalType" use="optional" />
  </xs:attributeGroup>

  <xs:attributeGroup name="CommonAttributes_NoCondition">
    <xs:attributeGroup ref="CommonAttributes_NoCondition_NoView" />
    <xs:attributeGroup ref="ViewConstraints" />
  </xs:attributeGroup>

  <!-- These attributes are shared by all top-level natvis elements (DisplayString/StringView/top-level children of Expand)-->
  <xs:attributeGroup name="CommonAttributes">
    <xs:attributeGroup ref="CommonAttributes_NoCondition" />
    <xs:attribute name="Condition" type="ConditionType" use="optional" />
  </xs:attributeGroup>

  <xs:complexType name="DisplayStringType">
    <xs:annotation>
      <xs:documentation>Specifies the string to be shown as the value of objects of the visualized type. It accepts arbitrary strings mixed with expressions. Everything inside curly braces (i.e. { and }) is interpreted as an expression and gets evaluated. To escape a curly brace, you can type two curly braces (i.e. {{ or }}).</xs:documentation>
    </xs:annotation>
    <xs:simpleContent>
      <xs:extension base="xs:string">
        <xs:attributeGroup ref="CommonAttributes" />
        <xs:attribute name="LegacyAddin" type="StringType" use="optional">
          <xs:annotation>
            <xs:documentation>If a legacy add-in exists, specifies the dll of the legacy addin. If a full path isn't specified, Visual Studio will look in the visualizer directory next to the .natvis file that specified the add-in. A regular display string is still allowed in conjunction with an add-in, and will be used as a fallback if the add-in dll cannot be loaded.</xs:documentation>
          </xs:annotation>
        </xs:attribute>
        <xs:attribute name="Export" type="StringType" use="optional">
          <xs:annotation>
            <xs:documentation>If a legacy add-in exists, specifies the name of the export for the legacy add-in implementation.  This attribute is valid only if 'LegacyAddin' is also specified.</xs:documentation>
          </xs:annotation>
        </xs:attribute>
        <xs:attribute name="Encoding" type="EncodingType" use="optional">
          <xs:annotation>
            <xs:documentation>Specifies the encoding of the string returned by the legacy addin.  Default is Utf8.  This attribute is valid only if 'LegacyAddin' is also specified.
            </xs:documentation>
          </xs:annotation>
        </xs:attribute>
      </xs:extension>
    </xs:simpleContent>
  </xs:complexType>

  <xs:simpleType name="EncodingType">
    <xs:restriction base="xs:normalizedString">
      <xs:enumeration value="Ansi" />
      <xs:enumeration value="Utf8" />
    </xs:restriction>
  </xs:simpleType>

  <xs:complexType name="CustomVisualizerType">
    <xs:annotation>
      <xs:documentation>Specifies a visualizer add-in which customizes the debugger view of this object.</xs:documentation>
    </xs:annotation>
    <xs:attribute name="VisualizerId" type="GuidType" use="required"/>
    <xs:attributeGroup ref="CommonAttributes" />
  </xs:complexType>

  <xs:complexType name="StringViewType">
    <xs:annotation>
      <xs:documentation>Specifies the expression whose value is sent to the built-in text visualizers.</xs:documentation>
    </xs:annotation>
    <xs:simpleContent>
      <xs:extension base="StringType">
        <xs:attributeGroup ref="CommonAttributes" />
      </xs:extension>
    </xs:simpleContent>
  </xs:complexType>

  <xs:complexType name="IndexNodeType">
    <xs:simpleContent>
      <xs:extension base="StringType">
        <xs:attribute name="Condition" type="ConditionType" use="optional" />
      </xs:extension>
    </xs:simpleContent>
  </xs:complexType>

  <xs:attributeGroup name="NameAttribute">
  <xs:attribute type="xs:string" name="Name" use="optional">
    <xs:annotation>
      <xs:documentation>
        Specifies an optional name, in &lt;DisplayString&gt; syntax, for this node.  If omitted, the name
        of the node will simply be the index of the item in the tree traversal.  Expressions in curly braces
        are evaluated in the context of the node.
      </xs:documentation>
    </xs:annotation>
  </xs:attribute>    
  </xs:attributeGroup>
  
  <xs:complexType name="ListItemsNodeType">
    <xs:annotation>
      <xs:documentation>Expression that points to value of th