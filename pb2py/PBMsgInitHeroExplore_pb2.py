# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: PBMsgInitHeroExplore.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='PBMsgInitHeroExplore.proto',
  package='',
  serialized_pb='\n\x1aPBMsgInitHeroExplore.proto\"\x9b\x02\n\x14PBMsgInitHeroExplore\x12\x11\n\texploreId\x18\x01 \x02(\x03\x12\x0e\n\x06itemId\x18\x02 \x03(\x05\x12\x10\n\x08strength\x18\x03 \x02(\x05\x12\x35\n\x06status\x18\x04 \x02(\x0e\x32%.PBMsgInitHeroExplore.PBMsgHeroStatus\x12\x11\n\tsleepTime\x18\x05 \x02(\x05\x12\x12\n\nuserHeroId\x18\x06 \x02(\x03\"p\n\x0fPBMsgHeroStatus\x12\x0c\n\x08UNLOCKED\x10\x01\x12\x16\n\x12IN_CITY_DO_NOTHING\x10\x02\x12\x14\n\x10IN_CITY_IN_MARCH\x10\x03\x12\x11\n\rIN_CITY_SLEEP\x10\x04\x12\x0e\n\nIN_NO_CITY\x10\x05')



_PBMSGINITHEROEXPLORE_PBMSGHEROSTATUS = _descriptor.EnumDescriptor(
  name='PBMsgHeroStatus',
  full_name='PBMsgInitHeroExplore.PBMsgHeroStatus',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNLOCKED', index=0, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='IN_CITY_DO_NOTHING', index=1, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='IN_CITY_IN_MARCH', index=2, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='IN_CITY_SLEEP', index=3, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='IN_NO_CITY', index=4, number=5,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=202,
  serialized_end=314,
)


_PBMSGINITHEROEXPLORE = _descriptor.Descriptor(
  name='PBMsgInitHeroExplore',
  full_name='PBMsgInitHeroExplore',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='exploreId', full_name='PBMsgInitHeroExplore.exploreId', index=0,
      number=1, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='itemId', full_name='PBMsgInitHeroExplore.itemId', index=1,
      number=2, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='strength', full_name='PBMsgInitHeroExplore.strength', index=2,
      number=3, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='status', full_name='PBMsgInitHeroExplore.status', index=3,
      number=4, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sleepTime', full_name='PBMsgInitHeroExplore.sleepTime', index=4,
      number=5, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='userHeroId', full_name='PBMsgInitHeroExplore.userHeroId', index=5,
      number=6, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _PBMSGINITHEROEXPLORE_PBMSGHEROSTATUS,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=31,
  serialized_end=314,
)

_PBMSGINITHEROEXPLORE.fields_by_name['status'].enum_type = _PBMSGINITHEROEXPLORE_PBMSGHEROSTATUS
_PBMSGINITHEROEXPLORE_PBMSGHEROSTATUS.containing_type = _PBMSGINITHEROEXPLORE;
DESCRIPTOR.message_types_by_name['PBMsgInitHeroExplore'] = _PBMSGINITHEROEXPLORE

class PBMsgInitHeroExplore(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _PBMSGINITHEROEXPLORE

  # @@protoc_insertion_point(class_scope:PBMsgInitHeroExplore)


# @@protoc_insertion_point(module_scope)