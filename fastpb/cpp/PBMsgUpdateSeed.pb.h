// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgUpdateSeed.proto

#ifndef PROTOBUF_PBMsgUpdateSeed_2eproto__INCLUDED
#define PROTOBUF_PBMsgUpdateSeed_2eproto__INCLUDED

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
void  protobuf_AddDesc_PBMsgUpdateSeed_2eproto();
void protobuf_AssignDesc_PBMsgUpdateSeed_2eproto();
void protobuf_ShutdownFile_PBMsgUpdateSeed_2eproto();

class PBMsgUpdateSeed;
class PBMsgUpdateSeed_PveData;
class PBMsgUpdateSeed_HeroData;

// ===================================================================

class PBMsgUpdateSeed_PveData : public ::google::protobuf::Message {
 public:
  PBMsgUpdateSeed_PveData();
  virtual ~PBMsgUpdateSeed_PveData();

  PBMsgUpdateSeed_PveData(const PBMsgUpdateSeed_PveData& from);

  inline PBMsgUpdateSeed_PveData& operator=(const PBMsgUpdateSeed_PveData& from) {
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
  static const PBMsgUpdateSeed_PveData& default_instance();

  void Swap(PBMsgUpdateSeed_PveData* other);

  // implements Message ----------------------------------------------

  PBMsgUpdateSeed_PveData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgUpdateSeed_PveData& from);
  void MergeFrom(const PBMsgUpdateSeed_PveData& from);
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

  // @@protoc_insertion_point(class_scope:PBMsgUpdateSeed.PveData)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_PBMsgUpdateSeed_2eproto();
  friend void protobuf_AssignDesc_PBMsgUpdateSeed_2eproto();
  friend void protobuf_ShutdownFile_PBMsgUpdateSeed_2eproto();

  void InitAsDefaultInstance();
  static PBMsgUpdateSeed_PveData* default_instance_;
};
// -------------------------------------------------------------------

class PBMsgUpdateSeed_HeroData : public ::google::protobuf::Message {
 public:
  PBMsgUpdateSeed_HeroData();
  virtual ~PBMsgUpdateSeed_HeroData();

  PBMsgUpdateSeed_HeroData(const PBMsgUpdateSeed_HeroData& from);

  inline PBMsgUpdateSeed_HeroData& operator=(const PBMsgUpdateSeed_HeroData& from) {
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
  static const PBMsgUpdateSeed_HeroData& default_instance();

  void Swap(PBMsgUpdateSeed_HeroData* other);

  // implements Message ----------------------------------------------

  PBMsgUpdateSeed_HeroData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgUpdateSeed_HeroData& from);
  void MergeFrom(const PBMsgUpdateSeed_HeroData& from);
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

  // @@protoc_insertion_point(class_scope:PBMsgUpdateSeed.HeroData)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_PBMsgUpdateSeed_2eproto();
  friend void protobuf_AssignDesc_PBMsgUpdateSeed_2eproto();
  friend void protobuf_ShutdownFile_PBMsgUpdateSeed_2eproto();

  void InitAsDefaultInstance();
  static PBMsgUpdateSeed_HeroData* default_instance_;
};
// -------------------------------------------------------------------

class PBMsgUpdateSeed : public ::google::protobuf::Message {
 public:
  PBMsgUpdateSeed();
  virtual ~PBMsgUpdateSeed();

  PBMsgUpdateSeed(const PBMsgUpdateSeed& from);

  inline PBMsgUpdateSeed& operator=(const PBMsgUpdateSeed& from) {
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
  static const PBMsgUpdateSeed& default_instance();

  void Swap(PBMsgUpdateSeed* other);

  // implements Message ----------------------------------------------

  PBMsgUpdateSeed* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgUpdateSeed& from);
  void MergeFrom(const PBMsgUpdateSeed& from);
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

  typedef PBMsgUpdateSeed_PveData PveData;
  typedef PBMsgUpdateSeed_HeroData HeroData;

  // accessors -------------------------------------------------------

  // optional string pveMd5 = 1;
  inline bool has_pvemd5() const;
  inline void clear_pvemd5();
  static const int kPveMd5FieldNumber = 1;
  inline const ::std::string& pvemd5() const;
  inline void set_pvemd5(const ::std::string& value);
  inline void set_pvemd5(const char* value);
  inline void set_pvemd5(const char* value, size_t size);
  inline ::std::string* mutable_pvemd5();
  inline ::std::string* release_pvemd5();
  inline void set_allocated_pvemd5(::std::string* pvemd5);

  // optional .PBMsgUpdateSeed.PveData pveData = 2;
  inline bool has_pvedata() const;
  inline void clear_pvedata();
  static const int kPveDataFieldNumber = 2;
  inline const ::PBMsgUpdateSeed_PveData& pvedata() const;
  inline ::PBMsgUpdateSeed_PveData* mutable_pvedata();
  inline ::PBMsgUpdateSeed_PveData* release_pvedata();
  inline void set_allocated_pvedata(::PBMsgUpdateSeed_PveData* pvedata);

  // optional string heroMd5 = 3;
  inline bool has_heromd5() const;
  inline void clear_heromd5();
  static const int kHeroMd5FieldNumber = 3;
  inline const ::std::string& heromd5() const;
  inline void set_heromd5(const ::std::string& value);
  inline void set_heromd5(const char* value);
  inline void set_heromd5(const char* value, size_t size);
  inline ::std::string* mutable_heromd5();
  inline ::std::string* release_heromd5();
  inline void set_allocated_heromd5(::std::string* heromd5);

  // optional .PBMsgUpdateSeed.HeroData heroData = 4;
  inline bool has_herodata() const;
  inline void clear_herodata();
  static const int kHeroDataFieldNumber = 4;
  inline const ::PBMsgUpdateSeed_HeroData& herodata() const;
  inline ::PBMsgUpdateSeed_HeroData* mutable_herodata();
  inline ::PBMsgUpdateSeed_HeroData* release_herodata();
  inline void set_allocated_herodata(::PBMsgUpdateSeed_HeroData* herodata);

  // @@protoc_insertion_point(class_scope:PBMsgUpdateSeed)
 private:
  inline void set_has_pvemd5();
  inline void clear_has_pvemd5();
  inline void set_has_pvedata();
  inline void clear_has_pvedata();
  inline void set_has_heromd5();
  inline void clear_has_heromd5();
  inline void set_has_herodata();
  inline void clear_has_herodata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* pvemd5_;
  ::PBMsgUpdateSeed_PveData* pvedata_;
  ::std::string* heromd5_;
  ::PBMsgUpdateSeed_HeroData* herodata_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgUpdateSeed_2eproto();
  friend void protobuf_AssignDesc_PBMsgUpdateSeed_2eproto();
  friend void protobuf_ShutdownFile_PBMsgUpdateSeed_2eproto();

  void InitAsDefaultInstance();
  static PBMsgUpdateSeed* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgUpdateSeed_PveData

// -------------------------------------------------------------------

// PBMsgUpdateSeed_HeroData

// -------------------------------------------------------------------

// PBMsgUpdateSeed

// optional string pveMd5 = 1;
inline bool PBMsgUpdateSeed::has_pvemd5() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgUpdateSeed::set_has_pvemd5() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgUpdateSeed::clear_has_pvemd5() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgUpdateSeed::clear_pvemd5() {
  if (pvemd5_ != &::google::protobuf::internal::kEmptyString) {
    pvemd5_->clear();
  }
  clear_has_pvemd5();
}
inline const ::std::string& PBMsgUpdateSeed::pvemd5() const {
  return *pvemd5_;
}
inline void PBMsgUpdateSeed::set_pvemd5(const ::std::string& value) {
  set_has_pvemd5();
  if (pvemd5_ == &::google::protobuf::internal::kEmptyString) {
    pvemd5_ = new ::std::string;
  }
  pvemd5_->assign(value);
}
inline void PBMsgUpdateSeed::set_pvemd5(const char* value) {
  set_has_pvemd5();
  if (pvemd5_ == &::google::protobuf::internal::kEmptyString) {
    pvemd5_ = new ::std::string;
  }
  pvemd5_->assign(value);
}
inline void PBMsgUpdateSeed::set_pvemd5(const char* value, size_t size) {
  set_has_pvemd5();
  if (pvemd5_ == &::google::protobuf::internal::kEmptyString) {
    pvemd5_ = new ::std::string;
  }
  pvemd5_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgUpdateSeed::mutable_pvemd5() {
  set_has_pvemd5();
  if (pvemd5_ == &::google::protobuf::internal::kEmptyString) {
    pvemd5_ = new ::std::string;
  }
  return pvemd5_;
}
inline ::std::string* PBMsgUpdateSeed::release_pvemd5() {
  clear_has_pvemd5();
  if (pvemd5_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = pvemd5_;
    pvemd5_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgUpdateSeed::set_allocated_pvemd5(::std::string* pvemd5) {
  if (pvemd5_ != &::google::protobuf::internal::kEmptyString) {
    delete pvemd5_;
  }
  if (pvemd5) {
    set_has_pvemd5();
    pvemd5_ = pvemd5;
  } else {
    clear_has_pvemd5();
    pvemd5_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .PBMsgUpdateSeed.PveData pveData = 2;
inline bool PBMsgUpdateSeed::has_pvedata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBMsgUpdateSeed::set_has_pvedata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBMsgUpdateSeed::clear_has_pvedata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBMsgUpdateSeed::clear_pvedata() {
  if (pvedata_ != NULL) pvedata_->::PBMsgUpdateSeed_PveData::Clear();
  clear_has_pvedata();
}
inline const ::PBMsgUpdateSeed_PveData& PBMsgUpdateSeed::pvedata() const {
  return pvedata_ != NULL ? *pvedata_ : *default_instance_->pvedata_;
}
inline ::PBMsgUpdateSeed_PveData* PBMsgUpdateSeed::mutable_pvedata() {
  set_has_pvedata();
  if (pvedata_ == NULL) pvedata_ = new ::PBMsgUpdateSeed_PveData;
  return pvedata_;
}
inline ::PBMsgUpdateSeed_PveData* PBMsgUpdateSeed::release_pvedata() {
  clear_has_pvedata();
  ::PBMsgUpdateSeed_PveData* temp = pvedata_;
  pvedata_ = NULL;
  return temp;
}
inline void PBMsgUpdateSeed::set_allocated_pvedata(::PBMsgUpdateSeed_PveData* pvedata) {
  delete pvedata_;
  pvedata_ = pvedata;
  if (pvedata) {
    set_has_pvedata();
  } else {
    clear_has_pvedata();
  }
}

// optional string heroMd5 = 3;
inline bool PBMsgUpdateSeed::has_heromd5() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PBMsgUpdateSeed::set_has_heromd5() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PBMsgUpdateSeed::clear_has_heromd5() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PBMsgUpdateSeed::clear_heromd5() {
  if (heromd5_ != &::google::protobuf::internal::kEmptyString) {
    heromd5_->clear();
  }
  clear_has_heromd5();
}
inline const ::std::string& PBMsgUpdateSeed::heromd5() const {
  return *heromd5_;
}
inline void PBMsgUpdateSeed::set_heromd5(const ::std::string& value) {
  set_has_heromd5();
  if (heromd5_ == &::google::protobuf::internal::kEmptyString) {
    heromd5_ = new ::std::string;
  }
  heromd5_->assign(value);
}
inline void PBMsgUpdateSeed::set_heromd5(const char* value) {
  set_has_heromd5();
  if (heromd5_ == &::google::protobuf::internal::kEmptyString) {
    heromd5_ = new ::std::string;
  }
  heromd5_->assign(value);
}
inline void PBMsgUpdateSeed::set_heromd5(const char* value, size_t size) {
  set_has_heromd5();
  if (heromd5_ == &::google::protobuf::internal::kEmptyString) {
    heromd5_ = new ::std::string;
  }
  heromd5_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgUpdateSeed::mutable_heromd5() {
  set_has_heromd5();
  if (heromd5_ == &::google::protobuf::internal::kEmptyString) {
    heromd5_ = new ::std::string;
  }
  return heromd5_;
}
inline ::std::string* PBMsgUpdateSeed::release_heromd5() {
  clear_has_heromd5();
  if (heromd5_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = heromd5_;
    heromd5_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgUpdateSeed::set_allocated_heromd5(::std::string* heromd5) {
  if (heromd5_ != &::google::protobuf::internal::kEmptyString) {
    delete heromd5_;
  }
  if (heromd5) {
    set_has_heromd5();
    heromd5_ = heromd5;
  } else {
    clear_has_heromd5();
    heromd5_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .PBMsgUpdateSeed.HeroData heroData = 4;
inline bool PBMsgUpdateSeed::has_herodata() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PBMsgUpdateSeed::set_has_herodata() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PBMsgUpdateSeed::clear_has_herodata() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PBMsgUpdateSeed::clear_herodata() {
  if (herodata_ != NULL) herodata_->::PBMsgUpdateSeed_HeroData::Clear();
  clear_has_herodata();
}
inline const ::PBMsgUpdateSeed_HeroData& PBMsgUpdateSeed::herodata() const {
  return herodata_ != NULL ? *herodata_ : *default_instance_->herodata_;
}
inline ::PBMsgUpdateSeed_HeroData* PBMsgUpdateSeed::mutable_herodata() {
  set_has_herodata();
  if (herodata_ == NULL) herodata_ = new ::PBMsgUpdateSeed_HeroData;
  return herodata_;
}
inline ::PBMsgUpdateSeed_HeroData* PBMsgUpdateSeed::release_herodata() {
  clear_has_herodata();
  ::PBMsgUpdateSeed_HeroData* temp = herodata_;
  herodata_ = NULL;
  return temp;
}
inline void PBMsgUpdateSeed::set_allocated_herodata(::PBMsgUpdateSeed_HeroData* herodata) {
  delete herodata_;
  herodata_ = herodata;
  if (herodata) {
    set_has_herodata();
  } else {
    clear_has_herodata();
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

#endif  // PROTOBUF_PBMsgUpdateSeed_2eproto__INCLUDED
