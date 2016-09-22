// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgPveStaminaInfo.proto

#ifndef PROTOBUF_PBMsgPveStaminaInfo_2eproto__INCLUDED
#define PROTOBUF_PBMsgPveStaminaInfo_2eproto__INCLUDED

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
void  protobuf_AddDesc_PBMsgPveStaminaInfo_2eproto();
void protobuf_AssignDesc_PBMsgPveStaminaInfo_2eproto();
void protobuf_ShutdownFile_PBMsgPveStaminaInfo_2eproto();

class PBMsgPveStaminaInfo;

// ===================================================================

class PBMsgPveStaminaInfo : public ::google::protobuf::Message {
 public:
  PBMsgPveStaminaInfo();
  virtual ~PBMsgPveStaminaInfo();

  PBMsgPveStaminaInfo(const PBMsgPveStaminaInfo& from);

  inline PBMsgPveStaminaInfo& operator=(const PBMsgPveStaminaInfo& from) {
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
  static const PBMsgPveStaminaInfo& default_instance();

  void Swap(PBMsgPveStaminaInfo* other);

  // implements Message ----------------------------------------------

  PBMsgPveStaminaInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgPveStaminaInfo& from);
  void MergeFrom(const PBMsgPveStaminaInfo& from);
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

  // optional int32 energy = 1;
  inline bool has_energy() const;
  inline void clear_energy();
  static const int kEnergyFieldNumber = 1;
  inline ::google::protobuf::int32 energy() const;
  inline void set_energy(::google::protobuf::int32 value);

  // optional int64 time = 2;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 2;
  inline ::google::protobuf::int64 time() const;
  inline void set_time(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:PBMsgPveStaminaInfo)
 private:
  inline void set_has_energy();
  inline void clear_has_energy();
  inline void set_has_time();
  inline void clear_has_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 time_;
  ::google::protobuf::int32 energy_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgPveStaminaInfo_2eproto();
  friend void protobuf_AssignDesc_PBMsgPveStaminaInfo_2eproto();
  friend void protobuf_ShutdownFile_PBMsgPveStaminaInfo_2eproto();

  void InitAsDefaultInstance();
  static PBMsgPveStaminaInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgPveStaminaInfo

// optional int32 energy = 1;
inline bool PBMsgPveStaminaInfo::has_energy() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgPveStaminaInfo::set_has_energy() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgPveStaminaInfo::clear_has_energy() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgPveStaminaInfo::clear_energy() {
  energy_ = 0;
  clear_has_energy();
}
inline ::google::protobuf::int32 PBMsgPveStaminaInfo::energy() const {
  return energy_;
}
inline void PBMsgPveStaminaInfo::set_energy(::google::protobuf::int32 value) {
  set_has_energy();
  energy_ = value;
}

// optional int64 time = 2;
inline bool PBMsgPveStaminaInfo::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBMsgPveStaminaInfo::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBMsgPveStaminaInfo::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBMsgPveStaminaInfo::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::int64 PBMsgPveStaminaInfo::time() const {
  return time_;
}
inline void PBMsgPveStaminaInfo::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PBMsgPveStaminaInfo_2eproto__INCLUDED