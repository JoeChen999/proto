// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgReqGds.proto

#ifndef PROTOBUF_PBMsgReqGds_2eproto__INCLUDED
#define PROTOBUF_PBMsgReqGds_2eproto__INCLUDED

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
void  protobuf_AddDesc_PBMsgReqGds_2eproto();
void protobuf_AssignDesc_PBMsgReqGds_2eproto();
void protobuf_ShutdownFile_PBMsgReqGds_2eproto();

class PBMsgReqGds;

// ===================================================================

class PBMsgReqGds : public ::google::protobuf::Message {
 public:
  PBMsgReqGds();
  virtual ~PBMsgReqGds();

  PBMsgReqGds(const PBMsgReqGds& from);

  inline PBMsgReqGds& operator=(const PBMsgReqGds& from) {
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
  static const PBMsgReqGds& default_instance();

  void Swap(PBMsgReqGds* other);

  // implements Message ----------------------------------------------

  PBMsgReqGds* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgReqGds& from);
  void MergeFrom(const PBMsgReqGds& from);
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

  // optional string type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  inline ::std::string* release_type();
  inline void set_allocated_type(::std::string* type);

  // optional int32 worldId = 2;
  inline bool has_worldid() const;
  inline void clear_worldid();
  static const int kWorldIdFieldNumber = 2;
  inline ::google::protobuf::int32 worldid() const;
  inline void set_worldid(::google::protobuf::int32 value);

  // optional int32 version = 3;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 3;
  inline ::google::protobuf::int32 version() const;
  inline void set_version(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PBMsgReqGds)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_worldid();
  inline void clear_has_worldid();
  inline void set_has_version();
  inline void clear_has_version();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* type_;
  ::google::protobuf::int32 worldid_;
  ::google::protobuf::int32 version_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgReqGds_2eproto();
  friend void protobuf_AssignDesc_PBMsgReqGds_2eproto();
  friend void protobuf_ShutdownFile_PBMsgReqGds_2eproto();

  void InitAsDefaultInstance();
  static PBMsgReqGds* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgReqGds

// optional string type = 1;
inline bool PBMsgReqGds::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgReqGds::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgReqGds::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgReqGds::clear_type() {
  if (type_ != &::google::protobuf::internal::kEmptyString) {
    type_->clear();
  }
  clear_has_type();
}
inline const ::std::string& PBMsgReqGds::type() const {
  return *type_;
}
inline void PBMsgReqGds::set_type(const ::std::string& value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void PBMsgReqGds::set_type(const char* value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void PBMsgReqGds::set_type(const char* value, size_t size) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgReqGds::mutable_type() {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  return type_;
}
inline ::std::string* PBMsgReqGds::release_type() {
  clear_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = type_;
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgReqGds::set_allocated_type(::std::string* type) {
  if (type_ != &::google::protobuf::internal::kEmptyString) {
    delete type_;
  }
  if (type) {
    set_has_type();
    type_ = type;
  } else {
    clear_has_type();
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 worldId = 2;
inline bool PBMsgReqGds::has_worldid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBMsgReqGds::set_has_worldid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBMsgReqGds::clear_has_worldid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBMsgReqGds::clear_worldid() {
  worldid_ = 0;
  clear_has_worldid();
}
inline ::google::protobuf::int32 PBMsgReqGds::worldid() const {
  return worldid_;
}
inline void PBMsgReqGds::set_worldid(::google::protobuf::int32 value) {
  set_has_worldid();
  worldid_ = value;
}

// optional int32 version = 3;
inline bool PBMsgReqGds::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PBMsgReqGds::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PBMsgReqGds::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PBMsgReqGds::clear_version() {
  version_ = 0;
  clear_has_version();
}
inline ::google::protobuf::int32 PBMsgReqGds::version() const {
  return version_;
}
inline void PBMsgReqGds::set_version(::google::protobuf::int32 value) {
  set_has_version();
  version_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PBMsgReqGds_2eproto__INCLUDED