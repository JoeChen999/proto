// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgReqUnassignHero.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PBMsgReqUnassignHero.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* PBMsgReqUnassignHero_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBMsgReqUnassignHero_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PBMsgReqUnassignHero_2eproto() {
  protobuf_AddDesc_PBMsgReqUnassignHero_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PBMsgReqUnassignHero.proto");
  GOOGLE_CHECK(file != NULL);
  PBMsgReqUnassignHero_descriptor_ = file->message_type(0);
  static const int PBMsgReqUnassignHero_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgReqUnassignHero, cid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgReqUnassignHero, hid_),
  };
  PBMsgReqUnassignHero_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PBMsgReqUnassignHero_descriptor_,
      PBMsgReqUnassignHero::default_instance_,
      PBMsgReqUnassignHero_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgReqUnassignHero, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgReqUnassignHero, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PBMsgReqUnassignHero));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PBMsgReqUnassignHero_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PBMsgReqUnassignHero_descriptor_, &PBMsgReqUnassignHero::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PBMsgReqUnassignHero_2eproto() {
  delete PBMsgReqUnassignHero::default_instance_;
  delete PBMsgReqUnassignHero_reflection_;
}

void protobuf_AddDesc_PBMsgReqUnassignHero_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032PBMsgReqUnassignHero.proto\"0\n\024PBMsgReq"
    "UnassignHero\022\013\n\003cid\030\001 \002(\003\022\013\n\003hid\030\002 \002(\003", 78);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PBMsgReqUnassignHero.proto", &protobuf_RegisterTypes);
  PBMsgReqUnassignHero::default_instance_ = new PBMsgReqUnassignHero();
  PBMsgReqUnassignHero::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PBMsgReqUnassignHero_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PBMsgReqUnassignHero_2eproto {
  StaticDescriptorInitializer_PBMsgReqUnassignHero_2eproto() {
    protobuf_AddDesc_PBMsgReqUnassignHero_2eproto();
  }
} static_descriptor_initializer_PBMsgReqUnassignHero_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PBMsgReqUnassignHero::kCidFieldNumber;
const int PBMsgReqUnassignHero::kHidFieldNumber;
#endif  // !_MSC_VER

PBMsgReqUnassignHero::PBMsgReqUnassignHero()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PBMsgReqUnassignHero::InitAsDefaultInstance() {
}

PBMsgReqUnassignHero::PBMsgReqUnassignHero(const PBMsgReqUnassignHero& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PBMsgReqUnassignHero::SharedCtor() {
  _cached_size_ = 0;
  cid_ = GOOGLE_LONGLONG(0);
  hid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PBMsgReqUnassignHero::~PBMsgReqUnassignHero() {
  SharedDtor();
}

void PBMsgReqUnassignHero::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PBMsgReqUnassignHero::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBMsgReqUnassignHero::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBMsgReqUnassignHero_descriptor_;
}

const PBMsgReqUnassignHero& PBMsgReqUnassignHero::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PBMsgReqUnassignHero_2eproto();
  return *default_instance_;
}

PBMsgReqUnassignHero* PBMsgReqUnassignHero::default_instance_ = NULL;

PBMsgReqUnassignHero* PBMsgReqUnassignHero::New() const {
  return new PBMsgReqUnassignHero;
}

void PBMsgReqUnassignHero::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cid_ = GOOGLE_LONGLONG(0);
    hid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PBMsgReqUnassignHero::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 cid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &cid_)));
          set_has_cid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_hid;
        break;
      }

      // required int64 hid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_hid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &hid_)));
          set_has_hid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PBMsgReqUnassignHero::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 cid = 1;
  if (has_cid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->cid(), output);
  }

  // required int64 hid = 2;
  if (has_hid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->hid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PBMsgReqUnassignHero::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 cid = 1;
  if (has_cid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->cid(), target);
  }

  // required int64 hid = 2;
  if (has_hid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->hid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PBMsgReqUnassignHero::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 cid = 1;
    if (has_cid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->cid());
    }

    // required int64 hid = 2;
    if (has_hid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->hid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PBMsgReqUnassignHero::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PBMsgReqUnassignHero* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PBMsgReqUnassignHero*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBMsgReqUnassignHero::MergeFrom(const PBMsgReqUnassignHero& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cid()) {
      set_cid(from.cid());
    }
    if (from.has_hid()) {
      set_hid(from.hid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PBMsgReqUnassignHero::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBMsgReqUnassignHero::CopyFrom(const PBMsgReqUnassignHero& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBMsgReqUnassignHero::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PBMsgReqUnassignHero::Swap(PBMsgReqUnassignHero* other) {
  if (other != this) {
    std::swap(cid_, other->cid_);
    std::swap(hid_, other->hid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PBMsgReqUnassignHero::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBMsgReqUnassignHero_descriptor_;
  metadata.reflection = PBMsgReqUnassignHero_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)