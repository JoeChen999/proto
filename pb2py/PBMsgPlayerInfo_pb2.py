# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: PBMsgPlayerInfo.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='PBMsgPlayerInfo.proto',
  package='',
  serialized_pb='\n\x15PBMsgPlayerInfo.proto\"U\n\x0fPBMsgPlayerInfo\x12\x0e\n\x06pveVer\x18\x01 \x01(\t\x12\x0f\n\x07pveInfo\x18\x02 \x01(\x0c\x12\x0f\n\x07heroVer\x18\x03 \x01(\t\x12\x10\n\x08heroInfo\x18\x04 \x01(\x0c')




_PBMSGPLAYERINFO = _descriptor.Descriptor(
  name='PBMsgPlayerInfo',
  full_name='PBMsgPlayerInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pveVer', full_name='PBMsgPlayerInfo.pveVer', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pveInfo', full_name='PBMsgPlayerInfo.pveInfo', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='heroVer', full_name='PBMsgPlayerInfo.heroVer', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='heroInfo', full_name='PBMsgPlayerInfo.heroInfo', index=3,
      number=4, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=25,
  serialized_end=110,
)

DESCRIPTOR.message_types_by_name['PBMsgPlayerInfo'] = _PBMSGPLAYERINFO

class PBMsgPlayerInfo(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _PBMSGPLAYERINFO

  # @@protoc_insertion_point(class_scope:PBMsgPlayerInfo)


# @@protoc_insertion_point(module_scope)
