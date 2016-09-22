// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgHeroInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PBMsgHeroInfo.pb.h"

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

const ::google::protobuf::Descriptor* PBMsgHeroInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBMsgHeroInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PBMsgHeroInfo_2eproto() {
  protobuf_AddDesc_PBMsgHeroInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PBMsgHeroInfo.proto");
  GOOGLE_CHECK(file != NULL);
  PBMsgHeroInfo_descriptor_ = file->message_type(0);
  static const int PBMsgHeroInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgHeroInfo, score_),
  };
  PBMsgHeroInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PBMsgHeroInfo_descriptor_,
      PBMsgHeroInfo::default_instance_,
      PBMsgHeroInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgHeroInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgHeroInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PBMsgHeroInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PBMsgHeroInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PBMsgHeroInfo_descriptor_, &PBMsgHeroInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PBMsgHeroInfo_2eproto() {
  delete PBMsgHeroInfo::default_instance_;
  delete PBMsgHeroInfo_reflection_;
}

void protobuf_AddDesc_PBMsgHeroInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023PBMsgHeroInfo.proto\"\036\n\rPBMsgHeroInfo\022\r"
    "\n\005score\030\001 \001(\005", 53);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PBMsgHeroInfo.proto", &protobuf_RegisterTypes);
  PBMsgHeroInfo::default_instance_ = new PBMsgHeroInfo();
  PBMsgHeroInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PBMsgHeroInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PBMsgHeroInfo_2eproto {
  StaticDescriptorInitializer_PBMsgHeroInfo_2eproto() {
    protobuf_AddDesc_PBMsgHeroInfo_2eproto();
  }
} static_descriptor_initializer_PBMsgHeroInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PBMsgHeroInfo::kScoreFieldNumber;
#endif  // !_MSC_VER

PBMsgHeroInfo::PBMsgHeroInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PBMsgHeroInfo::InitAsDefaultInstance() {
}

PBMsgHeroInfo::PBMsgHeroInfo(const PBMsgHeroInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PBMsgHeroInfo::SharedCtor() {
  _cached_size_ = 0;
  score_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PBMsgHeroInfo::~PBMsgHeroInfo() {
  SharedDtor();
}

void PBMsgHeroInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PBMsgHeroInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBMsgHeroInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBMsgHeroInfo_descriptor_;
}

const PBMsgHeroInfo& PBMsgHeroInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PBMsgHeroInfo_2eproto();
  return *default_instance_;
}

PBMsgHeroInfo* PBMsgHeroInfo::default_instance_ = NULL;

PBMsgHeroInfo* PBMsgHeroInfo::New() const {
  return new PBMsgHeroInfo;
}

void PBMsgHeroInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    score_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PBMsgHeroInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 score = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &score_)));
          set_has_score();
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

void PBMsgHeroInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 score = 1;
  if (has_score()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->score(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PBMsgHeroInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 score = 1;
  if (has_score()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->score(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PBMsgHeroInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 score = 1;
    if (has_score()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->score());
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

void PBMsgHeroInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PBMsgHeroInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PBMsgHeroInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBMsgHeroInfo::MergeFrom(const PBMsgHeroInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_score()) {
      set_score(from.score());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PBMsgHeroInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBMsgHeroInfo::CopyFrom(const PBMsgHeroInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBMsgHeroInfo::IsInitialized() const {

  return true;
}

void PBMsgHeroInfo::Swap(PBMsgHeroInfo* other) {
  if (other != this) {
    std::swap(score_, other->score_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PBMsgHeroInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBMsgHeroInfo_descriptor_;
  metadata.reflection = PBMsgHeroInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
