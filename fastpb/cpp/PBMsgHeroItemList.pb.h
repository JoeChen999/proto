// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBMsgHeroItemList.proto

#ifndef PROTOBUF_PBMsgHeroItemList_2eproto__INCLUDED
#define PROTOBUF_PBMsgHeroItemList_2eproto__INCLUDED

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
void  protobuf_AddDesc_PBMsgHeroItemList_2eproto();
void protobuf_AssignDesc_PBMsgHeroItemList_2eproto();
void protobuf_ShutdownFile_PBMsgHeroItemList_2eproto();

class PBMsgHeroItemList;
class PBMsgHeroItemList_PBMsgHeroItem;

// ===================================================================

class PBMsgHeroItemList_PBMsgHeroItem : public ::google::protobuf::Message {
 public:
  PBMsgHeroItemList_PBMsgHeroItem();
  virtual ~PBMsgHeroItemList_PBMsgHeroItem();

  PBMsgHeroItemList_PBMsgHeroItem(const PBMsgHeroItemList_PBMsgHeroItem& from);

  inline PBMsgHeroItemList_PBMsgHeroItem& operator=(const PBMsgHeroItemList_PBMsgHeroItem& from) {
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
  static const PBMsgHeroItemList_PBMsgHeroItem& default_instance();

  void Swap(PBMsgHeroItemList_PBMsgHeroItem* other);

  // implements Message ----------------------------------------------

  PBMsgHeroItemList_PBMsgHeroItem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgHeroItemList_PBMsgHeroItem& from);
  void MergeFrom(const PBMsgHeroItemList_PBMsgHeroItem& from);
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

  // required int32 itemId = 1;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemIdFieldNumber = 1;
  inline ::google::protobuf::int32 itemid() const;
  inline void set_itemid(::google::protobuf::int32 value);

  // required int32 addRenown = 2;
  inline bool has_addrenown() const;
  inline void clear_addrenown();
  static const int kAddRenownFieldNumber = 2;
  inline ::google::protobuf::int32 addrenown() const;
  inline void set_addrenown(::google::protobuf::int32 value);

  // required int32 own = 3;
  inline bool has_own() const;
  inline void clear_own();
  static const int kOwnFieldNumber = 3;
  inline ::google::protobuf::int32 own() const;
  inline void set_own(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PBMsgHeroItemList.PBMsgHeroItem)
 private:
  inline void set_has_itemid();
  inline void clear_has_itemid();
  inline void set_has_addrenown();
  inline void clear_has_addrenown();
  inline void set_has_own();
  inline void clear_has_own();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 itemid_;
  ::google::protobuf::int32 addrenown_;
  ::google::protobuf::int32 own_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgHeroItemList_2eproto();
  friend void protobuf_AssignDesc_PBMsgHeroItemList_2eproto();
  friend void protobuf_ShutdownFile_PBMsgHeroItemList_2eproto();

  void InitAsDefaultInstance();
  static PBMsgHeroItemList_PBMsgHeroItem* default_instance_;
};
// -------------------------------------------------------------------

class PBMsgHeroItemList : public ::google::protobuf::Message {
 public:
  PBMsgHeroItemList();
  virtual ~PBMsgHeroItemList();

  PBMsgHeroItemList(const PBMsgHeroItemList& from);

  inline PBMsgHeroItemList& operator=(const PBMsgHeroItemList& from) {
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
  static const PBMsgHeroItemList& default_instance();

  void Swap(PBMsgHeroItemList* other);

  // implements Message ----------------------------------------------

  PBMsgHeroItemList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsgHeroItemList& from);
  void MergeFrom(const PBMsgHeroItemList& from);
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

  typedef PBMsgHeroItemList_PBMsgHeroItem PBMsgHeroItem;

  // accessors -------------------------------------------------------

  // repeated .PBMsgHeroItemList.PBMsgHeroItem heroItem = 1;
  inline int heroitem_size() const;
  inline void clear_heroitem();
  static const int kHeroItemFieldNumber = 1;
  inline const ::PBMsgHeroItemList_PBMsgHeroItem& heroitem(int index) const;
  inline ::PBMsgHeroItemList_PBMsgHeroItem* mutable_heroitem(int index);
  inline ::PBMsgHeroItemList_PBMsgHeroItem* add_heroitem();
  inline const ::google::protobuf::RepeatedPtrField< ::PBMsgHeroItemList_PBMsgHeroItem >&
      heroitem() const;
  inline ::google::protobuf::RepeatedPtrField< ::PBMsgHeroItemList_PBMsgHeroItem >*
      mutable_heroitem();

  // @@protoc_insertion_point(class_scope:PBMsgHeroItemList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::PBMsgHeroItemList_PBMsgHeroItem > heroitem_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_PBMsgHeroItemList_2eproto();
  friend void protobuf_AssignDesc_PBMsgHeroItemList_2eproto();
  friend void protobuf_ShutdownFile_PBMsgHeroItemList_2eproto();

  void InitAsDefaultInstance();
  static PBMsgHeroItemList* default_instance_;
};
// ===================================================================


// ===================================================================

// PBMsgHeroItemList_PBMsgHeroItem

// required int32 itemId = 1;
inline bool PBMsgHeroItemList_PBMsgHeroItem::has_itemid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::set_has_itemid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::clear_itemid() {
  itemid_ = 0;
  clear_has_itemid();
}
inline ::google::protobuf::int32 PBMsgHeroItemList_PBMsgHeroItem::itemid() const {
  return itemid_;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::set_itemid(::google::protobuf::int32 value) {
  set_has_itemid();
  itemid_ = value;
}

// required int32 addRenown = 2;
inline bool PBMsgHeroItemList_PBMsgHeroItem::has_addrenown() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::set_has_addrenown() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::clear_has_addrenown() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::clear_addrenown() {
  addrenown_ = 0;
  clear_has_addrenown();
}
inline ::google::protobuf::int32 PBMsgHeroItemList_PBMsgHeroItem::addrenown() const {
  return addrenown_;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::set_addrenown(::google::protobuf::int32 value) {
  set_has_addrenown();
  addrenown_ = value;
}

// required int32 own = 3;
inline bool PBMsgHeroItemList_PBMsgHeroItem::has_own() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::set_has_own() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::clear_has_own() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::clear_own() {
  own_ = 0;
  clear_has_own();
}
inline ::google::protobuf::int32 PBMsgHeroItemList_PBMsgHeroItem::own() const {
  return own_;
}
inline void PBMsgHeroItemList_PBMsgHeroItem::set_own(::google::protobuf::int32 value) {
  set_has_own();
  own_ = value;
}

// -------------------------------------------------------------------

// PBMsgHeroItemList

// repeated .PBMsgHeroItemList.PBMsgHeroItem heroItem = 1;
inline int PBMsgHeroItemList::heroitem_size() const {
  return heroitem_.size();
}
inline void PBMsgHeroItemList::clear_heroitem() {
  heroitem_.Clear();
}
inline const ::PBMsgHeroItemList_PBMsgHeroItem& PBMsgHeroItemList::heroitem(int index) const {
  return heroitem_.Get(index);
}
inline ::PBMsgHeroItemList_PBMsgHeroItem* PBMsgHeroItemList::mutable_heroitem(int index) {
  return heroitem_.Mutable(index);
}
inline ::PBMsgHeroItemList_PBMsgHeroItem* PBMsgHeroItemList::add_heroitem() {
  return heroitem_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PBMsgHeroItemList_PBMsgHeroItem >&
PBMsgHeroItemList::heroitem() const {
  return heroitem_;
}
inline ::google::protobuf::RepeatedPtrField< ::PBMsgHeroItemList_PBMsgHeroItem >*
PBMsgHeroItemList::mutable_heroitem() {
  return &heroitem_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PBMsgHeroItemList_2eproto__INCLUDED
