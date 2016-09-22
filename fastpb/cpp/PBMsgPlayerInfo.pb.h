// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgPlayerInfo.proto

#ifndef PROTOBUF_PBMsgPlayerInfo_2eproto__INCLUDED
#define PROTOBUF_PBMsgPlayerInfo_2eproto__INCLUDED

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
void  protobuf_AddDesc_PBMsgPlayerInfo_2eproto();
void protobuf_AssignDesc_PBMsgPlayerInfo_2eproto();
void protobuf_ShutdownFile_PBMsgPlayerInfo_2eproto();

class PBMsgPlayerInfo;

// ===================================================================

class PBMsgPlayerInfo : public ::google::protobuf::Message {
 public:
  PBMsgPlayerInfo();
  virtual ~PBMsgPlayerInfo();

  PBMsgPlayerInfo(const PBMsgPlayerInfo& from);

  inline PBMsgPlayerInfo& operator=(const PBMsgPlayerInfo& from) {
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
  static const PBMsgPlayerInfo& default_instance();

  void Swap(PBMsgPlayerInfo* other);

  // implements Message ----------------------------------------------

  PBMsgPlayerInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgPlayerInfo& from);
  void MergeFrom(const PBMsgPlayerInfo& from);
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

  // optional string pveVer = 1;
  inline bool has_pvever() const;
  inline void clear_pvever();
  static const int kPveVerFieldNumber = 1;
  inline const ::std::string& pvever() const;
  inline void set_pvever(const ::std::string& value);
  inline void set_pvever(const char* value);
  inline void set_pvever(const char* value, size_t size);
  inline ::std::string* mutable_pvever();
  inline ::std::string* release_pvever();
  inline void set_allocated_pvever(::std::string* pvever);

  // optional bytes pveInfo = 2;
  inline bool has_pveinfo() const;
  inline void clear_pveinfo();
  static const int kPveInfoFieldNumber = 2;
  inline const ::std::string& pveinfo() const;
  inline void set_pveinfo(const ::std::string& value);
  inline void set_pveinfo(const char* value);
  inline void set_pveinfo(const void* value, size_t size);
  inline ::std::string* mutable_pveinfo();
  inline ::std::string* release_pveinfo();
  inline void set_allocated_pveinfo(::std::string* pveinfo);

  // optional string heroVer = 3;
  inline bool has_herover() const;
  inline void clear_herover();
  static const int kHeroVerFieldNumber = 3;
  inline const ::std::string& herover() const;
  inline void set_herover(const ::std::string& value);
  inline void set_herover(const char* value);
  inline void set_herover(const char* value, size_t size);
  inline ::std::string* mutable_herover();
  inline ::std::string* release_herover();
  inline void set_allocated_herover(::std::string* herover);

  // optional bytes heroInfo = 4;
  inline bool has_heroinfo() const;
  inline void clear_heroinfo();
  static const int kHeroInfoFieldNumber = 4;
  inline const ::std::string& heroinfo() const;
  inline void set_heroinfo(const ::std::string& value);
  inline void set_heroinfo(const char* value);
  inline void set_heroinfo(const void* value, size_t size);
  inline ::std::string* mutable_heroinfo();
  inline ::std::string* release_heroinfo();
  inline void set_allocated_heroinfo(::std::string* heroinfo);

  // @@protoc_insertion_point(class_scope:PBMsgPlayerInfo)
 private:
  inline void set_has_pvever();
  inline void clear_has_pvever();
  inline void set_has_pveinfo();
  inline void clear_has_pveinfo();
  inline void set_has_herover();
  inline void clear_has_herover();
  inline void set_has_heroinfo();
  inline void clear_has_heroinfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* pvever_;
  ::std::string* pveinfo_;
  ::std::string* herover_;
  ::std::string* heroinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgPlayerInfo_2eproto();
  friend void protobuf_AssignDesc_PBMsgPlayerInfo_2eproto();
  friend void protobuf_ShutdownFile_PBMsgPlayerInfo_2eproto();

  void InitAsDefaultInstance();
  static PBMsgPlayerInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgPlayerInfo

// optional string pveVer = 1;
inline bool PBMsgPlayerInfo::has_pvever() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgPlayerInfo::set_has_pvever() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgPlayerInfo::clear_has_pvever() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgPlayerInfo::clear_pvever() {
  if (pvever_ != &::google::protobuf::internal::kEmptyString) {
    pvever_->clear();
  }
  clear_has_pvever();
}
inline const ::std::string& PBMsgPlayerInfo::pvever() const {
  return *pvever_;
}
inline void PBMsgPlayerInfo::set_pvever(const ::std::string& value) {
  set_has_pvever();
  if (pvever_ == &::google::protobuf::internal::kEmptyString) {
    pvever_ = new ::std::string;
  }
  pvever_->assign(value);
}
inline void PBMsgPlayerInfo::set_pvever(const char* value) {
  set_has_pvever();
  if (pvever_ == &::google::protobuf::internal::kEmptyString) {
    pvever_ = new ::std::string;
  }
  pvever_->assign(value);
}
inline void PBMsgPlayerInfo::set_pvever(const char* value, size_t size) {
  set_has_pvever();
  if (pvever_ == &::google::protobuf::internal::kEmptyString) {
    pvever_ = new ::std::string;
  }
  pvever_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgPlayerInfo::mutable_pvever() {
  set_has_pvever();
  if (pvever_ == &::google::protobuf::internal::kEmptyString) {
    pvever_ = new ::std::string;
  }
  return pvever_;
}
inline ::std::string* PBMsgPlayerInfo::release_pvever() {
  clear_has_pvever();
  if (pvever_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = pvever_;
    pvever_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgPlayerInfo::set_allocated_pvever(::std::string* pvever) {
  if (pvever_ != &::google::protobuf::internal::kEmptyString) {
    delete pvever_;
  }
  if (pvever) {
    set_has_pvever();
    pvever_ = pvever;
  } else {
    clear_has_pvever();
    pvever_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes pveInfo = 2;
inline bool PBMsgPlayerInfo::has_pveinfo() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBMsgPlayerInfo::set_has_pveinfo() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBMsgPlayerInfo::clear_has_pveinfo() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBMsgPlayerInfo::clear_pveinfo() {
  if (pveinfo_ != &::google::protobuf::internal::kEmptyString) {
    pveinfo_->clear();
  }
  clear_has_pveinfo();
}
inline const ::std::string& PBMsgPlayerInfo::pveinfo() const {
  return *pveinfo_;
}
inline void PBMsgPlayerInfo::set_pveinfo(const ::std::string& value) {
  set_has_pveinfo();
  if (pveinfo_ == &::google::protobuf::internal::kEmptyString) {
    pveinfo_ = new ::std::string;
  }
  pveinfo_->assign(value);
}
inline void PBMsgPlayerInfo::set_pveinfo(const char* value) {
  set_has_pveinfo();
  if (pveinfo_ == &::google::protobuf::internal::kEmptyString) {
    pveinfo_ = new ::std::string;
  }
  pveinfo_->assign(value);
}
inline void PBMsgPlayerInfo::set_pveinfo(const void* value, size_t size) {
  set_has_pveinfo();
  if (pveinfo_ == &::google::protobuf::internal::kEmptyString) {
    pveinfo_ = new ::std::string;
  }
  pveinfo_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgPlayerInfo::mutable_pveinfo() {
  set_has_pveinfo();
  if (pveinfo_ == &::google::protobuf::internal::kEmptyString) {
    pveinfo_ = new ::std::string;
  }
  return pveinfo_;
}
inline ::std::string* PBMsgPlayerInfo::release_pveinfo() {
  clear_has_pveinfo();
  if (pveinfo_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = pveinfo_;
    pveinfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgPlayerInfo::set_allocated_pveinfo(::std::string* pveinfo) {
  if (pveinfo_ != &::google::protobuf::internal::kEmptyString) {
    delete pveinfo_;
  }
  if (pveinfo) {
    set_has_pveinfo();
    pveinfo_ = pveinfo;
  } else {
    clear_has_pveinfo();
    pveinfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string heroVer = 3;
inline bool PBMsgPlayerInfo::has_herover() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PBMsgPlayerInfo::set_has_herover() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PBMsgPlayerInfo::clear_has_herover() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PBMsgPlayerInfo::clear_herover() {
  if (herover_ != &::google::protobuf::internal::kEmptyString) {
    herover_->clear();
  }
  clear_has_herover();
}
inline const ::std::string& PBMsgPlayerInfo::herover() const {
  return *herover_;
}
inline void PBMsgPlayerInfo::set_herover(const ::std::string& value) {
  set_has_herover();
  if (herover_ == &::google::protobuf::internal::kEmptyString) {
    herover_ = new ::std::string;
  }
  herover_->assign(value);
}
inline void PBMsgPlayerInfo::set_herover(const char* value) {
  set_has_herover();
  if (herover_ == &::google::protobuf::internal::kEmptyString) {
    herover_ = new ::std::string;
  }
  herover_->assign(value);
}
inline void PBMsgPlayerInfo::set_herover(const char* value, size_t size) {
  set_has_herover();
  if (herover_ == &::google::protobuf::internal::kEmptyString) {
    herover_ = new ::std::string;
  }
  herover_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgPlayerInfo::mutable_herover() {
  set_has_herover();
  if (herover_ == &::google::protobuf::internal::kEmptyString) {
    herover_ = new ::std::string;
  }
  return herover_;
}
inline ::std::string* PBMsgPlayerInfo::release_herover() {
  clear_has_herover();
  if (herover_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = herover_;
    herover_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgPlayerInfo::set_allocated_herover(::std::string* herover) {
  if (herover_ != &::google::protobuf::internal::kEmptyString) {
    delete herover_;
  }
  if (herover) {
    set_has_herover();
    herover_ = herover;
  } else {
    clear_has_herover();
    herover_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes heroInfo = 4;
inline bool PBMsgPlayerInfo::has_heroinfo() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PBMsgPlayerInfo::set_has_heroinfo() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PBMsgPlayerInfo::clear_has_heroinfo() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PBMsgPlayerInfo::clear_heroinfo() {
  if (heroinfo_ != &::google::protobuf::internal::kEmptyString) {
    heroinfo_->clear();
  }
  clear_has_heroinfo();
}
inline const ::std::string& PBMsgPlayerInfo::heroinfo() const {
  return *heroinfo_;
}
inline void PBMsgPlayerInfo::set_heroinfo(const ::std::string& value) {
  set_has_heroinfo();
  if (heroinfo_ == &::google::protobuf::internal::kEmptyString) {
    heroinfo_ = new ::std::string;
  }
  heroinfo_->assign(value);
}
inline void PBMsgPlayerInfo::set_heroinfo(const char* value) {
  set_has_heroinfo();
  if (heroinfo_ == &::google::protobuf::internal::kEmptyString) {
    heroinfo_ = new ::std::string;
  }
  heroinfo_->assign(value);
}
inline void PBMsgPlayerInfo::set_heroinfo(const void* value, size_t size) {
  set_has_heroinfo();
  if (heroinfo_ == &::google::protobuf::internal::kEmptyString) {
    heroinfo_ = new ::std::string;
  }
  heroinfo_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBMsgPlayerInfo::mutable_heroinfo() {
  set_has_heroinfo();
  if (heroinfo_ == &::google::protobuf::internal::kEmptyString) {
    heroinfo_ = new ::std::string;
  }
  return heroinfo_;
}
inline ::std::string* PBMsgPlayerInfo::release_heroinfo() {
  clear_has_heroinfo();
  if (heroinfo_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = heroinfo_;
    heroinfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBMsgPlayerInfo::set_allocated_heroinfo(::std::string* heroinfo) {
  if (heroinfo_ != &::google::protobuf::internal::kEmptyString) {
    delete heroinfo_;
  }
  if (heroinfo) {
    set_has_heroinfo();
    heroinfo_ = heroinfo;
  } else {
    clear_has_heroinfo();
    heroinfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
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

#endif  // PROTOBUF_PBMsgPlayerInfo_2eproto__INCLUDED