// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_market.steamclient.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_steammessages_5fmarket_2esteamclient_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_steammessages_5fmarket_2esteamclient_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019005 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "steammessages_base.pb.h"
#include "steammessages_unified_base.steamclient.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_steammessages_5fmarket_2esteamclient_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_steammessages_5fmarket_2esteamclient_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_steammessages_5fmarket_2esteamclient_2eproto;
class CEconMarket_IsMarketplaceAllowed_Request;
struct CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal;
extern CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal _CEconMarket_IsMarketplaceAllowed_Request_default_instance_;
class CEconMarket_IsMarketplaceAllowed_Response;
struct CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal;
extern CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal _CEconMarket_IsMarketplaceAllowed_Response_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::CEconMarket_IsMarketplaceAllowed_Request* Arena::CreateMaybeMessage<::CEconMarket_IsMarketplaceAllowed_Request>(Arena*);
template<> ::CEconMarket_IsMarketplaceAllowed_Response* Arena::CreateMaybeMessage<::CEconMarket_IsMarketplaceAllowed_Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class CEconMarket_IsMarketplaceAllowed_Request final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CEconMarket_IsMarketplaceAllowed_Request) */ {
 public:
  inline CEconMarket_IsMarketplaceAllowed_Request() : CEconMarket_IsMarketplaceAllowed_Request(nullptr) {}
  ~CEconMarket_IsMarketplaceAllowed_Request() override;
  explicit constexpr CEconMarket_IsMarketplaceAllowed_Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CEconMarket_IsMarketplaceAllowed_Request(const CEconMarket_IsMarketplaceAllowed_Request& from);
  CEconMarket_IsMarketplaceAllowed_Request(CEconMarket_IsMarketplaceAllowed_Request&& from) noexcept
    : CEconMarket_IsMarketplaceAllowed_Request() {
    *this = ::std::move(from);
  }

  inline CEconMarket_IsMarketplaceAllowed_Request& operator=(const CEconMarket_IsMarketplaceAllowed_Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline CEconMarket_IsMarketplaceAllowed_Request& operator=(CEconMarket_IsMarketplaceAllowed_Request&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CEconMarket_IsMarketplaceAllowed_Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const CEconMarket_IsMarketplaceAllowed_Request* internal_default_instance() {
    return reinterpret_cast<const CEconMarket_IsMarketplaceAllowed_Request*>(
               &_CEconMarket_IsMarketplaceAllowed_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CEconMarket_IsMarketplaceAllowed_Request& a, CEconMarket_IsMarketplaceAllowed_Request& b) {
    a.Swap(&b);
  }
  inline void Swap(CEconMarket_IsMarketplaceAllowed_Request* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CEconMarket_IsMarketplaceAllowed_Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CEconMarket_IsMarketplaceAllowed_Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CEconMarket_IsMarketplaceAllowed_Request>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CEconMarket_IsMarketplaceAllowed_Request& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const CEconMarket_IsMarketplaceAllowed_Request& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CEconMarket_IsMarketplaceAllowed_Request* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CEconMarket_IsMarketplaceAllowed_Request";
  }
  protected:
  explicit CEconMarket_IsMarketplaceAllowed_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWebcookieFieldNumber = 1,
  };
  // optional string webcookie = 1 [(.description) = "The user\'s Steam Guard machine auth cookie."];
  bool has_webcookie() const;
  private:
  bool _internal_has_webcookie() const;
  public:
  void clear_webcookie();
  const std::string& webcookie() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_webcookie(ArgT0&& arg0, ArgT... args);
  std::string* mutable_webcookie();
  PROTOBUF_NODISCARD std::string* release_webcookie();
  void set_allocated_webcookie(std::string* webcookie);
  private:
  const std::string& _internal_webcookie() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_webcookie(const std::string& value);
  std::string* _internal_mutable_webcookie();
  public:

  // @@protoc_insertion_point(class_scope:CEconMarket_IsMarketplaceAllowed_Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr webcookie_;
  friend struct ::TableStruct_steammessages_5fmarket_2esteamclient_2eproto;
};
// -------------------------------------------------------------------

class CEconMarket_IsMarketplaceAllowed_Response final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CEconMarket_IsMarketplaceAllowed_Response) */ {
 public:
  inline CEconMarket_IsMarketplaceAllowed_Response() : CEconMarket_IsMarketplaceAllowed_Response(nullptr) {}
  ~CEconMarket_IsMarketplaceAllowed_Response() override;
  explicit constexpr CEconMarket_IsMarketplaceAllowed_Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CEconMarket_IsMarketplaceAllowed_Response(const CEconMarket_IsMarketplaceAllowed_Response& from);
  CEconMarket_IsMarketplaceAllowed_Response(CEconMarket_IsMarketplaceAllowed_Response&& from) noexcept
    : CEconMarket_IsMarketplaceAllowed_Response() {
    *this = ::std::move(from);
  }

  inline CEconMarket_IsMarketplaceAllowed_Response& operator=(const CEconMarket_IsMarketplaceAllowed_Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline CEconMarket_IsMarketplaceAllowed_Response& operator=(CEconMarket_IsMarketplaceAllowed_Response&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CEconMarket_IsMarketplaceAllowed_Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const CEconMarket_IsMarketplaceAllowed_Response* internal_default_instance() {
    return reinterpret_cast<const CEconMarket_IsMarketplaceAllowed_Response*>(
               &_CEconMarket_IsMarketplaceAllowed_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CEconMarket_IsMarketplaceAllowed_Response& a, CEconMarket_IsMarketplaceAllowed_Response& b) {
    a.Swap(&b);
  }
  inline void Swap(CEconMarket_IsMarketplaceAllowed_Response* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CEconMarket_IsMarketplaceAllowed_Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CEconMarket_IsMarketplaceAllowed_Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CEconMarket_IsMarketplaceAllowed_Response>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CEconMarket_IsMarketplaceAllowed_Response& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const CEconMarket_IsMarketplaceAllowed_Response& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CEconMarket_IsMarketplaceAllowed_Response* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CEconMarket_IsMarketplaceAllowed_Response";
  }
  protected:
  explicit CEconMarket_IsMarketplaceAllowed_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 2,
    kAllowedAtTimeFieldNumber = 3,
    kSteamguardRequiredDaysFieldNumber = 4,
    kAllowedFieldNumber = 1,
    kFormsRequestedFieldNumber = 7,
    kFormsRequireVerificationFieldNumber = 8,
    kNewDeviceCooldownDaysFieldNumber = 9,
  };
  // optional uint32 reason = 2 [(.description) = "The reason the user can\'t use the market, if applicable"];
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  uint32_t reason() const;
  void set_reason(uint32_t value);
  private:
  uint32_t _internal_reason() const;
  void _internal_set_reason(uint32_t value);
  public:

  // optional uint32 allowed_at_time = 3 [(.description) = "The time the user will be allowed to use the market"];
  bool has_allowed_at_time() const;
  private:
  bool _internal_has_allowed_at_time() const;
  public:
  void clear_allowed_at_time();
  uint32_t allowed_at_time() const;
  void set_allowed_at_time(uint32_t value);
  private:
  uint32_t _internal_allowed_at_time() const;
  void _internal_set_allowed_at_time(uint32_t value);
  public:

  // optional uint32 steamguard_required_days = 4 [(.description) = "The number of days any user is required to have had Steam Guard before they can use the market"];
  bool has_steamguard_required_days() const;
  private:
  bool _internal_has_steamguard_required_days() const;
  public:
  void clear_steamguard_required_days();
  uint32_t steamguard_required_days() const;
  void set_steamguard_required_days(uint32_t value);
  private:
  uint32_t _internal_steamguard_required_days() const;
  void _internal_set_steamguard_required_days(uint32_t value);
  public:

  // optional bool allowed = 1 [(.description) = "Whether or not the user is allowed to use the market"];
  bool has_allowed() const;
  private:
  bool _internal_has_allowed() const;
  public:
  void clear_allowed();
  bool allowed() const;
  void set_allowed(bool value);
  private:
  bool _internal_allowed() const;
  void _internal_set_allowed(bool value);
  public:

  // optional bool forms_requested = 7 [(.description) = "Whether or not we\'ve requested the user fill out tax forms"];
  bool has_forms_requested() const;
  private:
  bool _internal_has_forms_requested() const;
  public:
  void clear_forms_requested();
  bool forms_requested() const;
  void set_forms_requested(bool value);
  private:
  bool _internal_forms_requested() const;
  void _internal_set_forms_requested(bool value);
  public:

  // optional bool forms_require_verification = 8 [(.description) = "True if we\'ve received forms but they require verification first"];
  bool has_forms_require_verification() const;
  private:
  bool _internal_has_forms_require_verification() const;
  public:
  void clear_forms_require_verification();
  bool forms_require_verification() const;
  void set_forms_require_verification(bool value);
  private:
  bool _internal_forms_require_verification() const;
  void _internal_set_forms_require_verification(bool value);
  public:

  // optional uint32 new_device_cooldown_days = 9 [(.description) = "The number of days after initial device authorization a user must wait before using the market on that device"];
  bool has_new_device_cooldown_days() const;
  private:
  bool _internal_has_new_device_cooldown_days() const;
  public:
  void clear_new_device_cooldown_days();
  uint32_t new_device_cooldown_days() const;
  void set_new_device_cooldown_days(uint32_t value);
  private:
  uint32_t _internal_new_device_cooldown_days() const;
  void _internal_set_new_device_cooldown_days(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:CEconMarket_IsMarketplaceAllowed_Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t reason_;
  uint32_t allowed_at_time_;
  uint32_t steamguard_required_days_;
  bool allowed_;
  bool forms_requested_;
  bool forms_require_verification_;
  uint32_t new_device_cooldown_days_;
  friend struct ::TableStruct_steammessages_5fmarket_2esteamclient_2eproto;
};
// ===================================================================

class EconMarket_Stub;

class EconMarket : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline EconMarket() {};
 public:
  virtual ~EconMarket();

  typedef EconMarket_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void IsMarketplaceAllowed(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::CEconMarket_IsMarketplaceAllowed_Request* request,
                       ::CEconMarket_IsMarketplaceAllowed_Response* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EconMarket);
};

class EconMarket_Stub : public EconMarket {
 public:
  EconMarket_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  EconMarket_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~EconMarket_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements EconMarket ------------------------------------------

  void IsMarketplaceAllowed(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::CEconMarket_IsMarketplaceAllowed_Request* request,
                       ::CEconMarket_IsMarketplaceAllowed_Response* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EconMarket_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CEconMarket_IsMarketplaceAllowed_Request

// optional string webcookie = 1 [(.description) = "The user\'s Steam Guard machine auth cookie."];
inline bool CEconMarket_IsMarketplaceAllowed_Request::_internal_has_webcookie() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Request::has_webcookie() const {
  return _internal_has_webcookie();
}
inline void CEconMarket_IsMarketplaceAllowed_Request::clear_webcookie() {
  webcookie_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CEconMarket_IsMarketplaceAllowed_Request::webcookie() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Request.webcookie)
  return _internal_webcookie();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CEconMarket_IsMarketplaceAllowed_Request::set_webcookie(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 webcookie_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Request.webcookie)
}
inline std::string* CEconMarket_IsMarketplaceAllowed_Request::mutable_webcookie() {
  std::string* _s = _internal_mutable_webcookie();
  // @@protoc_insertion_point(field_mutable:CEconMarket_IsMarketplaceAllowed_Request.webcookie)
  return _s;
}
inline const std::string& CEconMarket_IsMarketplaceAllowed_Request::_internal_webcookie() const {
  return webcookie_.Get();
}
inline void CEconMarket_IsMarketplaceAllowed_Request::_internal_set_webcookie(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  webcookie_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CEconMarket_IsMarketplaceAllowed_Request::_internal_mutable_webcookie() {
  _has_bits_[0] |= 0x00000001u;
  return webcookie_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CEconMarket_IsMarketplaceAllowed_Request::release_webcookie() {
  // @@protoc_insertion_point(field_release:CEconMarket_IsMarketplaceAllowed_Request.webcookie)
  if (!_internal_has_webcookie()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = webcookie_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (webcookie_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    webcookie_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CEconMarket_IsMarketplaceAllowed_Request::set_allocated_webcookie(std::string* webcookie) {
  if (webcookie != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  webcookie_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), webcookie,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (webcookie_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    webcookie_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:CEconMarket_IsMarketplaceAllowed_Request.webcookie)
}

// -------------------------------------------------------------------

// CEconMarket_IsMarketplaceAllowed_Response

// optional bool allowed = 1 [(.description) = "Whether or not the user is allowed to use the market"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_has_allowed() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_allowed() const {
  return _internal_has_allowed();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_allowed() {
  allowed_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_allowed() const {
  return allowed_;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::allowed() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Response.allowed)
  return _internal_allowed();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::_internal_set_allowed(bool value) {
  _has_bits_[0] |= 0x00000008u;
  allowed_ = value;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_allowed(bool value) {
  _internal_set_allowed(value);
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Response.allowed)
}

// optional uint32 reason = 2 [(.description) = "The reason the user can\'t use the market, if applicable"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_has_reason() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_reason() const {
  return _internal_has_reason();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_reason() {
  reason_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::_internal_reason() const {
  return reason_;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::reason() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Response.reason)
  return _internal_reason();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::_internal_set_reason(uint32_t value) {
  _has_bits_[0] |= 0x00000001u;
  reason_ = value;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_reason(uint32_t value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Response.reason)
}

// optional uint32 allowed_at_time = 3 [(.description) = "The time the user will be allowed to use the market"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_has_allowed_at_time() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_allowed_at_time() const {
  return _internal_has_allowed_at_time();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_allowed_at_time() {
  allowed_at_time_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::_internal_allowed_at_time() const {
  return allowed_at_time_;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::allowed_at_time() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Response.allowed_at_time)
  return _internal_allowed_at_time();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::_internal_set_allowed_at_time(uint32_t value) {
  _has_bits_[0] |= 0x00000002u;
  allowed_at_time_ = value;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_allowed_at_time(uint32_t value) {
  _internal_set_allowed_at_time(value);
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Response.allowed_at_time)
}

// optional uint32 steamguard_required_days = 4 [(.description) = "The number of days any user is required to have had Steam Guard before they can use the market"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_has_steamguard_required_days() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_steamguard_required_days() const {
  return _internal_has_steamguard_required_days();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_steamguard_required_days() {
  steamguard_required_days_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::_internal_steamguard_required_days() const {
  return steamguard_required_days_;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::steamguard_required_days() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Response.steamguard_required_days)
  return _internal_steamguard_required_days();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::_internal_set_steamguard_required_days(uint32_t value) {
  _has_bits_[0] |= 0x00000004u;
  steamguard_required_days_ = value;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_steamguard_required_days(uint32_t value) {
  _internal_set_steamguard_required_days(value);
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Response.steamguard_required_days)
}

// optional bool forms_requested = 7 [(.description) = "Whether or not we\'ve requested the user fill out tax forms"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_has_forms_requested() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_forms_requested() const {
  return _internal_has_forms_requested();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_forms_requested() {
  forms_requested_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_forms_requested() const {
  return forms_requested_;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::forms_requested() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Response.forms_requested)
  return _internal_forms_requested();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::_internal_set_forms_requested(bool value) {
  _has_bits_[0] |= 0x00000010u;
  forms_requested_ = value;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_forms_requested(bool value) {
  _internal_set_forms_requested(value);
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Response.forms_requested)
}

// optional bool forms_require_verification = 8 [(.description) = "True if we\'ve received forms but they require verification first"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_has_forms_require_verification() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_forms_require_verification() const {
  return _internal_has_forms_require_verification();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_forms_require_verification() {
  forms_require_verification_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_forms_require_verification() const {
  return forms_require_verification_;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::forms_require_verification() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Response.forms_require_verification)
  return _internal_forms_require_verification();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::_internal_set_forms_require_verification(bool value) {
  _has_bits_[0] |= 0x00000020u;
  forms_require_verification_ = value;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_forms_require_verification(bool value) {
  _internal_set_forms_require_verification(value);
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Response.forms_require_verification)
}

// optional uint32 new_device_cooldown_days = 9 [(.description) = "The number of days after initial device authorization a user must wait before using the market on that device"];
inline bool CEconMarket_IsMarketplaceAllowed_Response::_internal_has_new_device_cooldown_days() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool CEconMarket_IsMarketplaceAllowed_Response::has_new_device_cooldown_days() const {
  return _internal_has_new_device_cooldown_days();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::clear_new_device_cooldown_days() {
  new_device_cooldown_days_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::_internal_new_device_cooldown_days() const {
  return new_device_cooldown_days_;
}
inline uint32_t CEconMarket_IsMarketplaceAllowed_Response::new_device_cooldown_days() const {
  // @@protoc_insertion_point(field_get:CEconMarket_IsMarketplaceAllowed_Response.new_device_cooldown_days)
  return _internal_new_device_cooldown_days();
}
inline void CEconMarket_IsMarketplaceAllowed_Response::_internal_set_new_device_cooldown_days(uint32_t value) {
  _has_bits_[0] |= 0x00000040u;
  new_device_cooldown_days_ = value;
}
inline void CEconMarket_IsMarketplaceAllowed_Response::set_new_device_cooldown_days(uint32_t value) {
  _internal_set_new_device_cooldown_days(value);
  // @@protoc_insertion_point(field_set:CEconMarket_IsMarketplaceAllowed_Response.new_device_cooldown_days)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_steammessages_5fmarket_2esteamclient_2eproto
