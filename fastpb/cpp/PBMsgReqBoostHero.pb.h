// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgReqBoostHero.proto

#ifndef PROTOBUF_PBMsgReqBoostHero_2eproto__INCLUDED
#define PROTOBUF_PBMsgReqBoostHero_2eproto__INCLUDED

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
void  protobuf_AddDesc_PBMsgReqBoostHero_2eproto();
void protobuf_AssignDesc_PBMsgReqBoostHero_2eproto();
void protobuf_ShutdownFile_PBMsgReqBoostHero_2eproto();

class PBMsgReqBoostHero;

// ===================================================================

class PBMsgReqBoostHero : public ::google::protobuf::Message {
 public:
  PBMsgReqBoostHero();
  virtual ~PBMsgReqBoostHero();

  PBMsgReqBoostHero(const PBMsgReqBoostHero& from);

  inline PBMsgReqBoostHero& operator=(const PBMsgReqBoostHero& from) {
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
  static const PBMsgReqBoostHero& default_instance();

  void Swap(PBMsgReqBoostHero* other);

  // implements Message ----------------------------------------------

  PBMsgReqBoostHero* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgReqBoostHero& from);
  void MergeFrom(const PBMsgReqBoostHero& from);
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

  // required int64 hid = 1;
  inline bool has_hid() const;
  inline void clear_hid();
  static const int kHidFieldNumber = 1;
  inline ::google::protobuf::int64 hid() const;
  inline void set_hid(::google::protobuf::int64 value);

  // required int32 iid = 2;
  inline bool has_iid() const;
  inline void clear_iid();
  static const int kIidFieldNumber = 2;
  inline ::google::protobuf::int32 iid() const;
  inline void set_iid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PBMsgReqBoostHero)
 private:
  inline void set_has_hid();
  inline void clear_has_hid();
  inline void set_has_iid();
  inline void clear_has_iid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 hid_;
  ::google::protobuf::int32 iid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgReqBoostHero_2eproto();
  friend void protobuf_AssignDesc_PBMsgReqBoostHero_2eproto();
  friend void protobuf_ShutdownFile_PBMsgReqBoostHero_2eproto();

  void InitAsDefaultInstance();
  static PBMsgReqBoostHero* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgReqBoostHero

// required int64 hid = 1;
inline bool PBMsgReqBoostHero::has_hid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgReqBoostHero::set_has_hid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgReqBoostHero::clear_has_hid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgReqBoostHero::clear_hid() {
  hid_ = GOOGLE_LONGLONG(0);
  clear_has_hid();
}
inline ::google::protobuf::int64 PBMsgReqBoostHero::hid() const {
  return hid_;
}
inline void PBMsgReqBoostHero::set_hid(::google::protobuf::int64 value) {
  set_has_hid();
  hid_ = value;
}

// required int32 iid = 2;
inline bool PBMsgReqBoostHero::has_iid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBMsgReqBoostHero::set_has_iid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBMsgReqBoostHero::clear_has_iid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBMsgReqBoostHero::clear_iid() {
  iid_ = 0;
  clear_has_iid();
}
inline ::google::protobuf::int32 PBMsgReqBoostHero::iid() const {
  return iid_;
}
inline void PBMsgReqBoostHero::set_iid(::google::protobuf::int32 value) {
  set_has_iid();
  iid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PBMsgReqBoostHero_2eproto__INCLUDED
