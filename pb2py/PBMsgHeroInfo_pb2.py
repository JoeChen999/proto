# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: PBMsgHeroInfo.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='PBMsgHeroInfo.proto',
  package='',
  serialized_pb='\n\x13PBMsgHeroInfo.proto\"\x1e\n\rPBMsgHeroInfo\x12\r\n\x05score\x18\x01 \x01(\x05')




_PBMSGHEROINFO = _descriptor.Descriptor(
  name='PBMsgHeroInfo',
  full_name='PBMsgHeroInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='score', full_name='PBMsgHeroInfo.score', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=23,
  serialized_end=53,
)

DESCRIPTOR.message_types_by_name['PBMsgHeroInfo'] = _PBMSGHEROINFO

class PBMsgHeroInfo(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _PBMSGHEROINFO

  # @@protoc_insertion_point(class_scope:PBMsgHeroInfo)


# @@protoc_insertion_point(module_scope)