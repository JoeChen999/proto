// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgReqPveInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PBMsgReqPveInfo.pb.h"

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

const ::google::protobuf::Descriptor* PBMsgReqPveInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBMsgReqPveInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PBMsgReqPveInfo_2eproto() {
  protobuf_AddDesc_PBMsgReqPveInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PBMsgReqPveInfo.proto");
  GOOGLE_CHECK(file != NULL);
  PBMsgReqPveInfo_descriptor_ = file->message_type(0);
  static const int PBMsgReqPveInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgReqPveInfo, infover_),
  };
  PBMsgReqPveInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PBMsgReqPveInfo_descriptor_,
      PBMsgReqPveInfo::default_instance_,
      PBMsgReqPveInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgReqPveInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBMsgReqPveInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PBMsgReqPveInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PBMsgReqPveInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PBMsgReqPveInfo_descriptor_, &PBMsgReqPveInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PBMsgReqPveInfo_2eproto() {
  delete PBMsgReqPveInfo::default_instance_;
  delete PBMsgReqPveInfo_reflection_;
}

void protobuf_AddDesc_PBMsgReqPveInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025PBMsgReqPveInfo.proto\"\"\n\017PBMsgReqPveIn"
    "fo\022\017\n\007infoVer\030\001 \001(\t", 59);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PBMsgReqPveInfo.proto", &protobuf_RegisterTypes);
  PBMsgReqPveInfo::default_instance_ = new PBMsgReqPveInfo();
  PBMsgReqPveInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PBMsgReqPveInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PBMsgReqPveInfo_2eproto {
  StaticDescriptorInitializer_PBMsgReqPveInfo_2eproto() {
    protobuf_AddDesc_PBMsgReqPveInfo_2eproto();
  }
} static_descriptor_initializer_PBMsgReqPveInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PBMsgReqPveInfo::kInfoVerFieldNumber;
#endif  // !_MSC_VER

PBMsgReqPveInfo::PBMsgReqPveInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PBMsgReqPveInfo::InitAsDefaultInstance() {
}

PBMsgReqPveInfo::PBMsgReqPveInfo(const PBMsgReqPveInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PBMsgReqPveInfo::SharedCtor() {
  _cached_size_ = 0;
  infover_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PBMsgReqPveInfo::~PBMsgReqPveInfo() {
  SharedDtor();
}

void PBMsgReqPveInfo::SharedDtor() {
  if (infover_ != &::google::protobuf::internal::kEmptyString) {
    delete infover_;
  }
  if (this != default_instance_) {
  }
}

void PBMsgReqPveInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBMsgReqPveInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBMsgReqPveInfo_descriptor_;
}

const PBMsgReqPveInfo& PBMsgReqPveInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PBMsgReqPveInfo_2eproto();
  return *default_instance_;
}

PBMsgReqPveInfo* PBMsgReqPveInfo::default_instance_ = NULL;

PBMsgReqPveInfo* PBMsgReqPveInfo::New() const {
  return new PBMsgReqPveInfo;
}

void PBMsgReqPveInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_infover()) {
      if (infover_ != &::google::protobuf::internal::kEmptyString) {
        infover_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PBMsgReqPveInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string infoVer = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_infover()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->infover().data(), this->infover().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void PBMsgReqPveInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string infoVer = 1;
  if (has_infover()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->infover().data(), this->infover().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->infover(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PBMsgReqPveInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string infoVer = 1;
  if (has_infover()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->infover().data(), this->infover().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->infover(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PBMsgReqPveInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string infoVer = 1;
    if (has_infover()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->infover());
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

void PBMsgReqPveInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PBMsgReqPveInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PBMsgReqPveInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBMsgReqPveInfo::MergeFrom(const PBMsgReqPveInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_infover()) {
      set_infover(from.infover());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PBMsgReqPveInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBMsgReqPveInfo::CopyFrom(const PBMsgReqPveInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBMsgReqPveInfo::IsInitialized() const {

  return true;
}

void PBMsgReqPveInfo::Swap(PBMsgReqPveInfo* other) {
  if (other != this) {
    std::swap(infover_, other->infover_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PBMsgReqPveInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBMsgReqPveInfo_descriptor_;
  metadata.reflection = PBMsgReqPveInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
