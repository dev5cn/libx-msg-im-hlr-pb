// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net-x-msg-im-hlr-other-usr.proto

#ifndef PROTOBUF_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto__INCLUDED
#define PROTOBUF_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[5];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsXmsgImHlrOtherUsrInfoQueryReqImpl();
void InitDefaultsXmsgImHlrOtherUsrInfoQueryReq();
void InitDefaultsXmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUseImpl();
void InitDefaultsXmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse();
void InitDefaultsXmsgImHlrOtherUsrInfoQueryRspImpl();
void InitDefaultsXmsgImHlrOtherUsrInfoQueryRsp();
void InitDefaultsXmsgImHlrOtherUsrInfo_InfoEntry_DoNotUseImpl();
void InitDefaultsXmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse();
void InitDefaultsXmsgImHlrOtherUsrInfoImpl();
void InitDefaultsXmsgImHlrOtherUsrInfo();
inline void InitDefaults() {
  InitDefaultsXmsgImHlrOtherUsrInfoQueryReq();
  InitDefaultsXmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse();
  InitDefaultsXmsgImHlrOtherUsrInfoQueryRsp();
  InitDefaultsXmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse();
  InitDefaultsXmsgImHlrOtherUsrInfo();
}
}  // namespace protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto
class XmsgImHlrOtherUsrInfo;
class XmsgImHlrOtherUsrInfoDefaultTypeInternal;
extern XmsgImHlrOtherUsrInfoDefaultTypeInternal _XmsgImHlrOtherUsrInfo_default_instance_;
class XmsgImHlrOtherUsrInfoQueryReq;
class XmsgImHlrOtherUsrInfoQueryReqDefaultTypeInternal;
extern XmsgImHlrOtherUsrInfoQueryReqDefaultTypeInternal _XmsgImHlrOtherUsrInfoQueryReq_default_instance_;
class XmsgImHlrOtherUsrInfoQueryRsp;
class XmsgImHlrOtherUsrInfoQueryRspDefaultTypeInternal;
extern XmsgImHlrOtherUsrInfoQueryRspDefaultTypeInternal _XmsgImHlrOtherUsrInfoQueryRsp_default_instance_;
class XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse;
class XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUseDefaultTypeInternal;
extern XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUseDefaultTypeInternal _XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse_default_instance_;
class XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse;
class XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUseDefaultTypeInternal;
extern XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUseDefaultTypeInternal _XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse_default_instance_;

// ===================================================================

class XmsgImHlrOtherUsrInfoQueryReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:XmsgImHlrOtherUsrInfoQueryReq) */ {
 public:
  XmsgImHlrOtherUsrInfoQueryReq();
  virtual ~XmsgImHlrOtherUsrInfoQueryReq();

  XmsgImHlrOtherUsrInfoQueryReq(const XmsgImHlrOtherUsrInfoQueryReq& from);

  inline XmsgImHlrOtherUsrInfoQueryReq& operator=(const XmsgImHlrOtherUsrInfoQueryReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmsgImHlrOtherUsrInfoQueryReq(XmsgImHlrOtherUsrInfoQueryReq&& from) noexcept
    : XmsgImHlrOtherUsrInfoQueryReq() {
    *this = ::std::move(from);
  }

  inline XmsgImHlrOtherUsrInfoQueryReq& operator=(XmsgImHlrOtherUsrInfoQueryReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmsgImHlrOtherUsrInfoQueryReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XmsgImHlrOtherUsrInfoQueryReq* internal_default_instance() {
    return reinterpret_cast<const XmsgImHlrOtherUsrInfoQueryReq*>(
               &_XmsgImHlrOtherUsrInfoQueryReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(XmsgImHlrOtherUsrInfoQueryReq* other);
  friend void swap(XmsgImHlrOtherUsrInfoQueryReq& a, XmsgImHlrOtherUsrInfoQueryReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmsgImHlrOtherUsrInfoQueryReq* New() const PROTOBUF_FINAL { return New(NULL); }

  XmsgImHlrOtherUsrInfoQueryReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmsgImHlrOtherUsrInfoQueryReq& from);
  void MergeFrom(const XmsgImHlrOtherUsrInfoQueryReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(XmsgImHlrOtherUsrInfoQueryReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string cgt = 1;
  int cgt_size() const;
  void clear_cgt();
  static const int kCgtFieldNumber = 1;
  const ::std::string& cgt(int index) const;
  ::std::string* mutable_cgt(int index);
  void set_cgt(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_cgt(int index, ::std::string&& value);
  #endif
  void set_cgt(int index, const char* value);
  void set_cgt(int index, const char* value, size_t size);
  ::std::string* add_cgt();
  void add_cgt(const ::std::string& value);
  #if LANG_CXX11
  void add_cgt(::std::string&& value);
  #endif
  void add_cgt(const char* value);
  void add_cgt(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& cgt() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_cgt();

  // @@protoc_insertion_point(class_scope:XmsgImHlrOtherUsrInfoQueryReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> cgt_;
  mutable int _cached_size_;
  friend struct ::protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto::TableStruct;
  friend void ::protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto::InitDefaultsXmsgImHlrOtherUsrInfoQueryReqImpl();
};
// -------------------------------------------------------------------

class XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse, 
    ::std::string, ::XmsgImHlrOtherUsrInfo,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse, 
    ::std::string, ::XmsgImHlrOtherUsrInfo,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse();
  XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse& other);
  static const XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse*>(&_XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class XmsgImHlrOtherUsrInfoQueryRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:XmsgImHlrOtherUsrInfoQueryRsp) */ {
 public:
  XmsgImHlrOtherUsrInfoQueryRsp();
  virtual ~XmsgImHlrOtherUsrInfoQueryRsp();

  XmsgImHlrOtherUsrInfoQueryRsp(const XmsgImHlrOtherUsrInfoQueryRsp& from);

  inline XmsgImHlrOtherUsrInfoQueryRsp& operator=(const XmsgImHlrOtherUsrInfoQueryRsp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmsgImHlrOtherUsrInfoQueryRsp(XmsgImHlrOtherUsrInfoQueryRsp&& from) noexcept
    : XmsgImHlrOtherUsrInfoQueryRsp() {
    *this = ::std::move(from);
  }

  inline XmsgImHlrOtherUsrInfoQueryRsp& operator=(XmsgImHlrOtherUsrInfoQueryRsp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmsgImHlrOtherUsrInfoQueryRsp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XmsgImHlrOtherUsrInfoQueryRsp* internal_default_instance() {
    return reinterpret_cast<const XmsgImHlrOtherUsrInfoQueryRsp*>(
               &_XmsgImHlrOtherUsrInfoQueryRsp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(XmsgImHlrOtherUsrInfoQueryRsp* other);
  friend void swap(XmsgImHlrOtherUsrInfoQueryRsp& a, XmsgImHlrOtherUsrInfoQueryRsp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmsgImHlrOtherUsrInfoQueryRsp* New() const PROTOBUF_FINAL { return New(NULL); }

  XmsgImHlrOtherUsrInfoQueryRsp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmsgImHlrOtherUsrInfoQueryRsp& from);
  void MergeFrom(const XmsgImHlrOtherUsrInfoQueryRsp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(XmsgImHlrOtherUsrInfoQueryRsp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .XmsgImHlrOtherUsrInfo> usrInfo = 1;
  int usrinfo_size() const;
  void clear_usrinfo();
  static const int kUsrInfoFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::XmsgImHlrOtherUsrInfo >&
      usrinfo() const;
  ::google::protobuf::Map< ::std::string, ::XmsgImHlrOtherUsrInfo >*
      mutable_usrinfo();

  // @@protoc_insertion_point(class_scope:XmsgImHlrOtherUsrInfoQueryRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      XmsgImHlrOtherUsrInfoQueryRsp_UsrInfoEntry_DoNotUse,
      ::std::string, ::XmsgImHlrOtherUsrInfo,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > usrinfo_;
  mutable int _cached_size_;
  friend struct ::protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto::TableStruct;
  friend void ::protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto::InitDefaultsXmsgImHlrOtherUsrInfoQueryRspImpl();
};
// -------------------------------------------------------------------

class XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse();
  XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse& other);
  static const XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse*>(&_XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class XmsgImHlrOtherUsrInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:XmsgImHlrOtherUsrInfo) */ {
 public:
  XmsgImHlrOtherUsrInfo();
  virtual ~XmsgImHlrOtherUsrInfo();

  XmsgImHlrOtherUsrInfo(const XmsgImHlrOtherUsrInfo& from);

  inline XmsgImHlrOtherUsrInfo& operator=(const XmsgImHlrOtherUsrInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmsgImHlrOtherUsrInfo(XmsgImHlrOtherUsrInfo&& from) noexcept
    : XmsgImHlrOtherUsrInfo() {
    *this = ::std::move(from);
  }

  inline XmsgImHlrOtherUsrInfo& operator=(XmsgImHlrOtherUsrInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmsgImHlrOtherUsrInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XmsgImHlrOtherUsrInfo* internal_default_instance() {
    return reinterpret_cast<const XmsgImHlrOtherUsrInfo*>(
               &_XmsgImHlrOtherUsrInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(XmsgImHlrOtherUsrInfo* other);
  friend void swap(XmsgImHlrOtherUsrInfo& a, XmsgImHlrOtherUsrInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmsgImHlrOtherUsrInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  XmsgImHlrOtherUsrInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmsgImHlrOtherUsrInfo& from);
  void MergeFrom(const XmsgImHlrOtherUsrInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(XmsgImHlrOtherUsrInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> info = 1;
  int info_size() const;
  void clear_info();
  static const int kInfoFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      info() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_info();

  // @@protoc_insertion_point(class_scope:XmsgImHlrOtherUsrInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      XmsgImHlrOtherUsrInfo_InfoEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > info_;
  mutable int _cached_size_;
  friend struct ::protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto::TableStruct;
  friend void ::protobuf_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto::InitDefaultsXmsgImHlrOtherUsrInfoImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// XmsgImHlrOtherUsrInfoQueryReq

// repeated string cgt = 1;
inline int XmsgImHlrOtherUsrInfoQueryReq::cgt_size() const {
  return cgt_.size();
}
inline void XmsgImHlrOtherUsrInfoQueryReq::clear_cgt() {
  cgt_.Clear();
}
inline const ::std::string& XmsgImHlrOtherUsrInfoQueryReq::cgt(int index) const {
  // @@protoc_insertion_point(field_get:XmsgImHlrOtherUsrInfoQueryReq.cgt)
  return cgt_.Get(index);
}
inline ::std::string* XmsgImHlrOtherUsrInfoQueryReq::mutable_cgt(int index) {
  // @@protoc_insertion_point(field_mutable:XmsgImHlrOtherUsrInfoQueryReq.cgt)
  return cgt_.Mutable(index);
}
inline void XmsgImHlrOtherUsrInfoQueryReq::set_cgt(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:XmsgImHlrOtherUsrInfoQueryReq.cgt)
  cgt_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void XmsgImHlrOtherUsrInfoQueryReq::set_cgt(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:XmsgImHlrOtherUsrInfoQueryReq.cgt)
  cgt_.Mutable(index)->assign(std::move(value));
}
#endif
inline void XmsgImHlrOtherUsrInfoQueryReq::set_cgt(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  cgt_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:XmsgImHlrOtherUsrInfoQueryReq.cgt)
}
inline void XmsgImHlrOtherUsrInfoQueryReq::set_cgt(int index, const char* value, size_t size) {
  cgt_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:XmsgImHlrOtherUsrInfoQueryReq.cgt)
}
inline ::std::string* XmsgImHlrOtherUsrInfoQueryReq::add_cgt() {
  // @@protoc_insertion_point(field_add_mutable:XmsgImHlrOtherUsrInfoQueryReq.cgt)
  return cgt_.Add();
}
inline void XmsgImHlrOtherUsrInfoQueryReq::add_cgt(const ::std::string& value) {
  cgt_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:XmsgImHlrOtherUsrInfoQueryReq.cgt)
}
#if LANG_CXX11
inline void XmsgImHlrOtherUsrInfoQueryReq::add_cgt(::std::string&& value) {
  cgt_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:XmsgImHlrOtherUsrInfoQueryReq.cgt)
}
#endif
inline void XmsgImHlrOtherUsrInfoQueryReq::add_cgt(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  cgt_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:XmsgImHlrOtherUsrInfoQueryReq.cgt)
}
inline void XmsgImHlrOtherUsrInfoQueryReq::add_cgt(const char* value, size_t size) {
  cgt_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:XmsgImHlrOtherUsrInfoQueryReq.cgt)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
XmsgImHlrOtherUsrInfoQueryReq::cgt() const {
  // @@protoc_insertion_point(field_list:XmsgImHlrOtherUsrInfoQueryReq.cgt)
  return cgt_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
XmsgImHlrOtherUsrInfoQueryReq::mutable_cgt() {
  // @@protoc_insertion_point(field_mutable_list:XmsgImHlrOtherUsrInfoQueryReq.cgt)
  return &cgt_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// XmsgImHlrOtherUsrInfoQueryRsp

// map<string, .XmsgImHlrOtherUsrInfo> usrInfo = 1;
inline int XmsgImHlrOtherUsrInfoQueryRsp::usrinfo_size() const {
  return usrinfo_.size();
}
inline void XmsgImHlrOtherUsrInfoQueryRsp::clear_usrinfo() {
  usrinfo_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::XmsgImHlrOtherUsrInfo >&
XmsgImHlrOtherUsrInfoQueryRsp::usrinfo() const {
  // @@protoc_insertion_point(field_map:XmsgImHlrOtherUsrInfoQueryRsp.usrInfo)
  return usrinfo_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::XmsgImHlrOtherUsrInfo >*
XmsgImHlrOtherUsrInfoQueryRsp::mutable_usrinfo() {
  // @@protoc_insertion_point(field_mutable_map:XmsgImHlrOtherUsrInfoQueryRsp.usrInfo)
  return usrinfo_.MutableMap();
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// XmsgImHlrOtherUsrInfo

// map<string, string> info = 1;
inline int XmsgImHlrOtherUsrInfo::info_size() const {
  return info_.size();
}
inline void XmsgImHlrOtherUsrInfo::clear_info() {
  info_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
XmsgImHlrOtherUsrInfo::info() const {
  // @@protoc_insertion_point(field_map:XmsgImHlrOtherUsrInfo.info)
  return info_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
XmsgImHlrOtherUsrInfo::mutable_info() {
  // @@protoc_insertion_point(field_mutable_map:XmsgImHlrOtherUsrInfo.info)
  return info_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_net_2dx_2dmsg_2dim_2dhlr_2dother_2dusr_2eproto__INCLUDED
