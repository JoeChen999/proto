// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgReqInitHeroExplore.proto

#ifndef PROTOBUF_PBMsgReqInitHeroExplore_2eproto__INCLUDED
#define PROTOBUF_PBMsgReqInitHeroExplore_2eproto__INCLUDED

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
void  protobuf_AddDesc_PBMsgReqInitHeroExplore_2eproto();
void protobuf_AssignDesc_PBMsgReqInitHeroExplore_2eproto();
void protobuf_ShutdownFile_PBMsgReqInitHeroExplore_2eproto();

class PBMsgReqInitHeroExplore;

// ===================================================================

class PBMsgReqInitHeroExplore : public ::google::protobuf::Message {
 public:
  PBMsgReqInitHeroExplore();
  virtual ~PBMsgReqInitHeroExplore();

  PBMsgReqInitHeroExplore(const PBMsgReqInitHeroExplore& from);

  inline PBMsgReqInitHeroExplore& operator=(const PBMsgReqInitHeroExplore& from) {
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
  static const PBMsgReqInitHeroExplore& default_instance();

  void Swap(PBMsgReqInitHeroExplore* other);

  // implements Message ----------------------------------------------

  PBMsgReqInitHeroExplore* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgReqInitHeroExplore& from);
  void MergeFrom(const PBMsgReqInitHeroExplore& from);
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

  // required int64 cid = 1;
  inline bool has_cid() const;
  inline void clear_cid();
  static const int kCidFieldNumber = 1;
  inline ::google::protobuf::int64 cid() const;
  inline void set_cid(::google::protobuf::int64 value);

  // required int64 hid = 2;
  inline bool has_hid() const;
  inline void clear_hid();
  static const int kHidFieldNumber = 2;
  inline ::google::protobuf::int64 hid() const;
  inline void set_hid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:PBMsgReqInitHeroExplore)
 private:
  inline void set_has_cid();
  inline void clear_has_cid();
  inline void set_has_hid();
  inline void clear_has_hid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 cid_;
  ::google::protobuf::int64 hid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgReqInitHeroExplore_2eproto();
  friend void protobuf_AssignDesc_PBMsgReqInitHeroExplore_2eproto();
  friend void protobuf_ShutdownFile_PBMsgReqInitHeroExplore_2eproto();

  void InitAsDefaultInstance();
  static PBMsgReqInitHeroExplore* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgReqInitHeroExplore

// required int64 cid = 1;
inline bool PBMsgReqInitHeroExplore::has_cid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgReqInitHeroExplore::set_has_cid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgReqInitHeroExplore::clear_has_cid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgReqInitHeroExplore::clear_cid() {
  cid_ = GOOGLE_LONGLONG(0);
  clear_has_cid();
}
inline ::google::protobuf::int64 PBMsgReqInitHeroExplore::cid() const {
  return cid_;
}
inline void PBMsgReqInitHeroExplore::set_cid(::google::protobuf::int64 value) {
  set_has_cid();
  cid_ = value;
}

// required int64 hid = 2;
inline bool PBMsgReqInitHeroExplore::has_hid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBMsgReqInitHeroExplore::set_has_hid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBMsgReqInitHeroExplore::clear_has_hid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBMsgReqInitHeroExplore::clear_hid() {
  hid_ = GOOGLE_LONGLONG(0);
  clear_has_hid();
}
inline ::google::protobuf::int64 PBMsgReqInitHeroExplore::hid() const {
  return hid_;
}
inline void PBMsgReqInitHeroExplore::set_hid(::google::protobuf::int64 value) {
  set_has_hid();
  hid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PBMsgReqInitHeroExplore_2eproto__INCLUDED
