# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: PBMsgHeader.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='PBMsgHeader.proto',
  package='',
  serialized_pb='\n\x11PBMsgHeader.proto\"\x99\x02\n\x0bPBMsgHeader\x12\x0c\n\x04naId\x18\x01 \x02(\t\x12\r\n\x05gcUid\x18\x02 \x02(\t\x12\x0f\n\x07gcUnick\x18\x03 \x02(\t\x12\x10\n\x08mobileId\x18\x04 \x02(\t\x12\x12\n\nplatformId\x18\x05 \x02(\x05\x12\x14\n\x0c\x62\x65\x63omeUserId\x18\x06 \x02(\t\x12\x16\n\x0e\x62\x65\x63omePassword\x18\x07 \x02(\t\x12\r\n\x05\x64\x65\x62ug\x18\x08 \x02(\x05\x12\x0c\n\x04gVer\x18\t \x02(\t\x12\x10\n\x08gameSlot\x18\n \x02(\x03\x12\r\n\x05theme\x18\x0b \x02(\x05\x12\x0f\n\x07newLang\x18\x0c \x02(\t\x12\x12\n\ngameNumber\x18\r \x02(\x03\x12\x0f\n\x07kabamId\x18\x0e \x01(\t\x12\x14\n\x0c\x61\x63\x63\x65ss_token\x18\x0f \x01(\t')




_PBMSGHEADER = _descriptor.Descriptor(
  name='PBMsgHeader',
  full_name='PBMsgHeader',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='naId', full_name='PBMsgHeader.naId', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gcUid', full_name='PBMsgHeader.gcUid', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gcUnick', full_name='PBMsgHeader.gcUnick', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mobileId', full_name='PBMsgHeader.mobileId', index=3,
      number=4, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='platformId', full_name='PBMsgHeader.platformId', index=4,
      number=5, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='becomeUserId', full_name='PBMsgHeader.becomeUserId', index=5,
      number=6, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='becomePassword', full_name='PBMsgHeader.becomePassword', index=6,
      number=7, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='debug', full_name='PBMsgHeader.debug', index=7,
      number=8, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gVer', full_name='PBMsgHeader.gVer', index=8,
      number=9, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gameSlot', full_name='PBMsgHeader.gameSlot', index=9,
      number=10, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='theme', full_name='PBMsgHeader.theme', index=10,
      number=11, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='newLang', full_name='PBMsgHeader.newLang', index=11,
      number=12, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gameNumber', full_name='PBMsgHeader.gameNumber', index=12,
      number=13, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='kabamId', full_name='PBMsgHeader.kabamId', index=13,
      number=14, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='access_token', full_name='PBMsgHeader.access_token', index=14,
      number=15, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
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
  serialized_start=22,
  serialized_end=303,
)

DESCRIPTOR.message_types_by_name['PBMsgHeader'] = _PBMSGHEADER

class PBMsgHeader(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _PBMSGHEADER

  # @@protoc_insertion_point(class_scope:PBMsgHeader)


# @@protoc_insertion_point(module_scope)
