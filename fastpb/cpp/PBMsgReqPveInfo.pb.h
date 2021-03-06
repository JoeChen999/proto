// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgReqPveInfo.proto

#ifndef PROTOBUF_PBMsgReqPveInfo_2eproto__INCLUDED
#define PROTOBUF_PBMsgReqPveInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PBMsgReqPveInfo_2eproto();
void protobuf_AssignDesc_PBMsgReqPveInfo_2eproto();
void protobuf_ShutdownFile_PBMsgReqPveInfo_2eproto();

class PBMsgReqPveInfo;

// ===================================================================

class PBMsgReqPveInfo : public ::google::protobuf::Message {
 public:
  PBMsgReqPveInfo();
  virtual ~PBMsgReqPveInfo();

  PBMsgReqPveInfo(const PBMsgReqPveInfo& from);

  inline PBMsgReqPveInfo& operator=(const PBMsgReqPveInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PBMsgReqPveInfo& default_instance();

  void Swap(PBMsgReqPveInfo* other);

  // implements Message ----------------------------------------------

  PBMsgReqPveInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgReqPveInfo& from);
  void MergeFrom(const PBMsgReqPveInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string infoVer = 1;
  inline bool has_infover() const;
  inline void clear_infover();
  static const int kInfoVerFieldNumber = 1;
  inline const ::std::string& infover() const;
  inline void set_infover(const ::std::string& value);
  inline void set_infover(const char* value);
  inline void set_infover(const char* value, size_t size);
  inline ::std::string* mutable_infover();
  inline ::std::string* release_infover();
  inline void set_allocated_infover(::std::string* infover);

  // @@protoc_insertion_point(class_scope:PBMsgReqPveInfo)
 private:
  inline void set_has_infover();
  inline void clear_has_infover();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* infover_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgReqPveInfo_2eproto();
  friend void protobuf_AssignDesc_PBMsgReqPveInfo_2eproto();
  friend void protobuf_ShutdownFile_PBMsgReqPveInfo_2eproto();

  void InitAsDefaultInstance();
  static PBMsgReqPveInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgReqPveInfo

// optional string infoVer = 1;
inline bool PBMsgReqPveInfo::has_infover() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgReqPveInfo::set_has_infover() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgReqPveInfo::clear_has_infover() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgReqPveInfo::clear_infover() {
  if (infover_ != &::google::protobuf::internal::kEmptyString) {
    infover_->clear();
  }
  clear_has_infover();
}
inline const ::std::string& PBMsgReqPveInfo::infover() const {
  return *infover_;
}
inline void PBMsgReqPveInfo::set_infover(const ::std::string& value) {
  set_has_infover();
  if (infover_ == &::google::protobuf::internal::kEmptyString) {
    infover_ = new ::std::string;
  }
  infover_->assign(value);
}
inline void PBMsgReqPveInfo::set_infover(const char* value) {
  set_has_infover();
  if (infover_ == &::google::protobuf::internal::kEmptyString) {
    infover_ = new ::std::string;
  }
  infover_->assign(value);
}
inline void PBMsgReqPveInfo::set_infover(const char* value, size_t size) {
  set_has_infover();
  if (infover_ == &::google::protobuf::internal::kEmptyString) {
    infover_ = new ::std::string;
  }
  infover_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgReqPveInfo::mutable_infover() {
  set_has_infover();
  if (infover_ == &::google::protobuf::internal::kEmptyString) {
    infover_ = new ::std::string;
  }
  return infover_;
}
inline ::std::string* PBMsgReqPveInfo::release_infover() {
  clear_has_infover();
  if (infover_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = infover_;
    infover_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgReqPveInfo::set_allocated_infover(::std::string* infover) {
  if (infover_ != &::google::protobuf::internal::kEmptyString) {
    delete infover_;
  }
  if (infover) {
    set_has_infover();
    infover_ = infover;
  } else {
    clear_has_infover();
    infover_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PBMsgReqPveInfo_2eproto__INCLUDED
