// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgPveStaminaInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PBMsgPveStaminaInfo.pb.h"

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

const ::google::protobuf::Descriptor* PBMsgPveStaminaInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBMsgPveStaminaInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PBMsgPveStaminaInfo_2eproto() {
  protobuf_AddDesc_PBMsgPveStaminaInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PBMsgPveStaminaInfo.proto");
  GOOGLE_CHECK(file != NULL);
  PBMsgPveStaminaInfo_descriptor_ = file->message_type(0);
  static const int PBMsgPveStaminaInfo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgPveStaminaInfo, energy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgPveStaminaInfo, time_),
  };
  PBMsgPveStaminaInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PBMsgPveStaminaInfo_descriptor_,
      PBMsgPveStaminaInfo::default_instance_,
      PBMsgPveStaminaInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgPveStaminaInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgPveStaminaInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PBMsgPveStaminaInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PBMsgPveStaminaInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PBMsgPveStaminaInfo_descriptor_, &PBMsgPveStaminaInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PBMsgPveStaminaInfo_2eproto() {
  delete PBMsgPveStaminaInfo::default_instance_;
  delete PBMsgPveStaminaInfo_reflection_;
}

void protobuf_AddDesc_PBMsgPveStaminaInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031PBMsgPveStaminaInfo.proto\"3\n\023PBMsgPveS"
    "taminaInfo\022\016\n\006energy\030\001 \001(\005\022\014\n\004time\030\002 \001(\003", 80);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PBMsgPveStaminaInfo.proto", &protobuf_RegisterTypes);
  PBMsgPveStaminaInfo::default_instance_ = new PBMsgPveStaminaInfo();
  PBMsgPveStaminaInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PBMsgPveStaminaInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PBMsgPveStaminaInfo_2eproto {
  StaticDescriptorInitializer_PBMsgPveStaminaInfo_2eproto() {
    protobuf_AddDesc_PBMsgPveStaminaInfo_2eproto();
  }
} static_descriptor_initializer_PBMsgPveStaminaInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PBMsgPveStaminaInfo::kEnergyFieldNumber;
const int PBMsgPveStaminaInfo::kTimeFieldNumber;
#endif  // !_MSC_VER

PBMsgPveStaminaInfo::PBMsgPveStaminaInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PBMsgPveStaminaInfo::InitAsDefaultInstance() {
}

PBMsgPveStaminaInfo::PBMsgPveStaminaInfo(const PBMsgPveStaminaInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PBMsgPveStaminaInfo::SharedCtor() {
  _cached_size_ = 0;
  energy_ = 0;
  time_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PBMsgPveStaminaInfo::~PBMsgPveStaminaInfo() {
  SharedDtor();
}

void PBMsgPveStaminaInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PBMsgPveStaminaInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBMsgPveStaminaInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBMsgPveStaminaInfo_descriptor_;
}

const PBMsgPveStaminaInfo& PBMsgPveStaminaInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PBMsgPveStaminaInfo_2eproto();
  return *default_instance_;
}

PBMsgPveStaminaInfo* PBMsgPveStaminaInfo::default_instance_ = NULL;

PBMsgPveStaminaInfo* PBMsgPveStaminaInfo::New() const {
  return new PBMsgPveStaminaInfo;
}

void PBMsgPveStaminaInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    energy_ = 0;
    time_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PBMsgPveStaminaInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 energy = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &energy_)));
          set_has_energy();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_time;
        break;
      }

      // optional int64 time = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &time_)));
          set_has_time();
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

void PBMsgPveStaminaInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 energy = 1;
  if (has_energy()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->energy(), output);
  }

  // optional int64 time = 2;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PBMsgPveStaminaInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 energy = 1;
  if (has_energy()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->energy(), target);
  }

  // optional int64 time = 2;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PBMsgPveStaminaInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 energy = 1;
    if (has_energy()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->energy());
    }

    // optional int64 time = 2;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->time());
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

void PBMsgPveStaminaInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PBMsgPveStaminaInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PBMsgPveStaminaInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBMsgPveStaminaInfo::MergeFrom(const PBMsgPveStaminaInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_energy()) {
      set_energy(from.energy());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PBMsgPveStaminaInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBMsgPveStaminaInfo::CopyFrom(const PBMsgPveStaminaInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBMsgPveStaminaInfo::IsInitialized() const {

  return true;
}

void PBMsgPveStaminaInfo::Swap(PBMsgPveStaminaInfo* other) {
  if (other != this) {
    std::swap(energy_, other->energy_);
    std::swap(time_, other->time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PBMsgPveStaminaInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBMsgPveStaminaInfo_descriptor_;
  metadata.reflection = PBMsgPveStaminaInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
