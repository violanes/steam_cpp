// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_lobbymatchmaking.steamclient.proto

#include "steammessages_lobbymatchmaking.steamclient.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr LobbyMatchmakingLegacy_GetLobbyStatus_Request::LobbyMatchmakingLegacy_GetLobbyStatus_Request(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : steamid_lobby_(uint64_t{0u})
  , app_id_(0u)
  , claim_ownership_(false)
  , claim_membership_(false)
  , version_num_(0u){}
struct LobbyMatchmakingLegacy_GetLobbyStatus_RequestDefaultTypeInternal {
  constexpr LobbyMatchmakingLegacy_GetLobbyStatus_RequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LobbyMatchmakingLegacy_GetLobbyStatus_RequestDefaultTypeInternal() {}
  union {
    LobbyMatchmakingLegacy_GetLobbyStatus_Request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LobbyMatchmakingLegacy_GetLobbyStatus_RequestDefaultTypeInternal _LobbyMatchmakingLegacy_GetLobbyStatus_Request_default_instance_;
constexpr LobbyMatchmakingLegacy_GetLobbyStatus_Response::LobbyMatchmakingLegacy_GetLobbyStatus_Response(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : steamid_lobby_(uint64_t{0u})
  , app_id_(0u)
  , lobby_status_(0)
{}
struct LobbyMatchmakingLegacy_GetLobbyStatus_ResponseDefaultTypeInternal {
  constexpr LobbyMatchmakingLegacy_GetLobbyStatus_ResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LobbyMatchmakingLegacy_GetLobbyStatus_ResponseDefaultTypeInternal() {}
  union {
    LobbyMatchmakingLegacy_GetLobbyStatus_Response _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LobbyMatchmakingLegacy_GetLobbyStatus_ResponseDefaultTypeInternal _LobbyMatchmakingLegacy_GetLobbyStatus_Response_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_steammessages_5flobbymatchmaking_2esteamclient_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_steammessages_5flobbymatchmaking_2esteamclient_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_steammessages_5flobbymatchmaking_2esteamclient_2eproto[1];

const uint32_t TableStruct_steammessages_5flobbymatchmaking_2esteamclient_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Request, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Request, app_id_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Request, steamid_lobby_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Request, claim_ownership_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Request, claim_membership_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Request, version_num_),
  1,
  0,
  2,
  3,
  4,
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Response, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Response, app_id_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Response, steamid_lobby_),
  PROTOBUF_FIELD_OFFSET(::LobbyMatchmakingLegacy_GetLobbyStatus_Response, lobby_status_),
  1,
  0,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::LobbyMatchmakingLegacy_GetLobbyStatus_Request)},
  { 16, 25, -1, sizeof(::LobbyMatchmakingLegacy_GetLobbyStatus_Response)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_LobbyMatchmakingLegacy_GetLobbyStatus_Request_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_LobbyMatchmakingLegacy_GetLobbyStatus_Response_default_instance_),
};

const char descriptor_table_protodef_steammessages_5flobbymatchmaking_2esteamclient_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n0steammessages_lobbymatchmaking.steamcl"
  "ient.proto\032\030steammessages_base.proto\032,st"
  "eammessages_unified_base.steamclient.pro"
  "to\"\236\001\n-LobbyMatchmakingLegacy_GetLobbySt"
  "atus_Request\022\016\n\006app_id\030\001 \001(\r\022\025\n\rsteamid_"
  "lobby\030\002 \001(\006\022\027\n\017claim_ownership\030\003 \001(\010\022\030\n\020"
  "claim_membership\030\004 \001(\010\022\023\n\013version_num\030\005 "
  "\001(\r\"\223\001\n.LobbyMatchmakingLegacy_GetLobbyS"
  "tatus_Response\022\016\n\006app_id\030\001 \001(\r\022\025\n\rsteami"
  "d_lobby\030\002 \001(\006\022:\n\014lobby_status\030\003 \001(\0162\r.EL"
  "obbyStatus:\025k_ELobbyStatusInvalid*\201\001\n\014EL"
  "obbyStatus\022\031\n\025k_ELobbyStatusInvalid\020\000\022\030\n"
  "\024k_ELobbyStatusExists\020\001\022\036\n\032k_ELobbyStatu"
  "sDoesNotExist\020\002\022\034\n\030k_ELobbyStatusNotAMem"
  "ber\020\0032\306\001\n\026LobbyMatchmakingLegacy\022\205\001\n\016Get"
  "LobbyStatus\022..LobbyMatchmakingLegacy_Get"
  "LobbyStatus_Request\032/.LobbyMatchmakingLe"
  "gacy_GetLobbyStatus_Response\"\022\202\265\030\016GetLob"
  "byStatus\032$\202\265\030 Lobby matchmaking legacy s"
  "erviceB\003\200\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_deps[2] = {
  &::descriptor_table_steammessages_5fbase_2eproto,
  &::descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto = {
  false, false, 771, descriptor_table_protodef_steammessages_5flobbymatchmaking_2esteamclient_2eproto, "steammessages_lobbymatchmaking.steamclient.proto", 
  &descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_once, descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_steammessages_5flobbymatchmaking_2esteamclient_2eproto::offsets,
  file_level_metadata_steammessages_5flobbymatchmaking_2esteamclient_2eproto, file_level_enum_descriptors_steammessages_5flobbymatchmaking_2esteamclient_2eproto, file_level_service_descriptors_steammessages_5flobbymatchmaking_2esteamclient_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_getter() {
  return &descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_steammessages_5flobbymatchmaking_2esteamclient_2eproto(&descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ELobbyStatus_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto);
  return file_level_enum_descriptors_steammessages_5flobbymatchmaking_2esteamclient_2eproto[0];
}
bool ELobbyStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class LobbyMatchmakingLegacy_GetLobbyStatus_Request::_Internal {
 public:
  using HasBits = decltype(std::declval<LobbyMatchmakingLegacy_GetLobbyStatus_Request>()._has_bits_);
  static void set_has_app_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_steamid_lobby(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_claim_ownership(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_claim_membership(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_version_num(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

LobbyMatchmakingLegacy_GetLobbyStatus_Request::LobbyMatchmakingLegacy_GetLobbyStatus_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
}
LobbyMatchmakingLegacy_GetLobbyStatus_Request::LobbyMatchmakingLegacy_GetLobbyStatus_Request(const LobbyMatchmakingLegacy_GetLobbyStatus_Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&steamid_lobby_, &from.steamid_lobby_,
    static_cast<size_t>(reinterpret_cast<char*>(&version_num_) -
    reinterpret_cast<char*>(&steamid_lobby_)) + sizeof(version_num_));
  // @@protoc_insertion_point(copy_constructor:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
}

inline void LobbyMatchmakingLegacy_GetLobbyStatus_Request::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&steamid_lobby_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&version_num_) -
    reinterpret_cast<char*>(&steamid_lobby_)) + sizeof(version_num_));
}

LobbyMatchmakingLegacy_GetLobbyStatus_Request::~LobbyMatchmakingLegacy_GetLobbyStatus_Request() {
  // @@protoc_insertion_point(destructor:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LobbyMatchmakingLegacy_GetLobbyStatus_Request::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Request::ArenaDtor(void* object) {
  LobbyMatchmakingLegacy_GetLobbyStatus_Request* _this = reinterpret_cast< LobbyMatchmakingLegacy_GetLobbyStatus_Request* >(object);
  (void)_this;
}
void LobbyMatchmakingLegacy_GetLobbyStatus_Request::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LobbyMatchmakingLegacy_GetLobbyStatus_Request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Request::Clear() {
// @@protoc_insertion_point(message_clear_start:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&steamid_lobby_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&version_num_) -
        reinterpret_cast<char*>(&steamid_lobby_)) + sizeof(version_num_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LobbyMatchmakingLegacy_GetLobbyStatus_Request::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 app_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_app_id(&has_bits);
          app_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional fixed64 steamid_lobby = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _Internal::set_has_steamid_lobby(&has_bits);
          steamid_lobby_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint64_t>(ptr);
          ptr += sizeof(uint64_t);
        } else
          goto handle_unusual;
        continue;
      // optional bool claim_ownership = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_claim_ownership(&has_bits);
          claim_ownership_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool claim_membership = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_claim_membership(&has_bits);
          claim_membership_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 version_num = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_version_num(&has_bits);
          version_num_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LobbyMatchmakingLegacy_GetLobbyStatus_Request::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 app_id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_app_id(), target);
  }

  // optional fixed64 steamid_lobby = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed64ToArray(2, this->_internal_steamid_lobby(), target);
  }

  // optional bool claim_ownership = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_claim_ownership(), target);
  }

  // optional bool claim_membership = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_claim_membership(), target);
  }

  // optional uint32 version_num = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->_internal_version_num(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
  return target;
}

size_t LobbyMatchmakingLegacy_GetLobbyStatus_Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional fixed64 steamid_lobby = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional uint32 app_id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_app_id());
    }

    // optional bool claim_ownership = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional bool claim_membership = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional uint32 version_num = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_version_num());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LobbyMatchmakingLegacy_GetLobbyStatus_Request::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LobbyMatchmakingLegacy_GetLobbyStatus_Request::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LobbyMatchmakingLegacy_GetLobbyStatus_Request::GetClassData() const { return &_class_data_; }

void LobbyMatchmakingLegacy_GetLobbyStatus_Request::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LobbyMatchmakingLegacy_GetLobbyStatus_Request *>(to)->MergeFrom(
      static_cast<const LobbyMatchmakingLegacy_GetLobbyStatus_Request &>(from));
}


void LobbyMatchmakingLegacy_GetLobbyStatus_Request::MergeFrom(const LobbyMatchmakingLegacy_GetLobbyStatus_Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      steamid_lobby_ = from.steamid_lobby_;
    }
    if (cached_has_bits & 0x00000002u) {
      app_id_ = from.app_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      claim_ownership_ = from.claim_ownership_;
    }
    if (cached_has_bits & 0x00000008u) {
      claim_membership_ = from.claim_membership_;
    }
    if (cached_has_bits & 0x00000010u) {
      version_num_ = from.version_num_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Request::CopyFrom(const LobbyMatchmakingLegacy_GetLobbyStatus_Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LobbyMatchmakingLegacy_GetLobbyStatus_Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LobbyMatchmakingLegacy_GetLobbyStatus_Request::IsInitialized() const {
  return true;
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Request::InternalSwap(LobbyMatchmakingLegacy_GetLobbyStatus_Request* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LobbyMatchmakingLegacy_GetLobbyStatus_Request, version_num_)
      + sizeof(LobbyMatchmakingLegacy_GetLobbyStatus_Request::version_num_)
      - PROTOBUF_FIELD_OFFSET(LobbyMatchmakingLegacy_GetLobbyStatus_Request, steamid_lobby_)>(
          reinterpret_cast<char*>(&steamid_lobby_),
          reinterpret_cast<char*>(&other->steamid_lobby_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LobbyMatchmakingLegacy_GetLobbyStatus_Request::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_getter, &descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_once,
      file_level_metadata_steammessages_5flobbymatchmaking_2esteamclient_2eproto[0]);
}

// ===================================================================

class LobbyMatchmakingLegacy_GetLobbyStatus_Response::_Internal {
 public:
  using HasBits = decltype(std::declval<LobbyMatchmakingLegacy_GetLobbyStatus_Response>()._has_bits_);
  static void set_has_app_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_steamid_lobby(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_lobby_status(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

LobbyMatchmakingLegacy_GetLobbyStatus_Response::LobbyMatchmakingLegacy_GetLobbyStatus_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
}
LobbyMatchmakingLegacy_GetLobbyStatus_Response::LobbyMatchmakingLegacy_GetLobbyStatus_Response(const LobbyMatchmakingLegacy_GetLobbyStatus_Response& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&steamid_lobby_, &from.steamid_lobby_,
    static_cast<size_t>(reinterpret_cast<char*>(&lobby_status_) -
    reinterpret_cast<char*>(&steamid_lobby_)) + sizeof(lobby_status_));
  // @@protoc_insertion_point(copy_constructor:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
}

inline void LobbyMatchmakingLegacy_GetLobbyStatus_Response::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&steamid_lobby_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&lobby_status_) -
    reinterpret_cast<char*>(&steamid_lobby_)) + sizeof(lobby_status_));
}

LobbyMatchmakingLegacy_GetLobbyStatus_Response::~LobbyMatchmakingLegacy_GetLobbyStatus_Response() {
  // @@protoc_insertion_point(destructor:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LobbyMatchmakingLegacy_GetLobbyStatus_Response::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Response::ArenaDtor(void* object) {
  LobbyMatchmakingLegacy_GetLobbyStatus_Response* _this = reinterpret_cast< LobbyMatchmakingLegacy_GetLobbyStatus_Response* >(object);
  (void)_this;
}
void LobbyMatchmakingLegacy_GetLobbyStatus_Response::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LobbyMatchmakingLegacy_GetLobbyStatus_Response::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Response::Clear() {
// @@protoc_insertion_point(message_clear_start:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&steamid_lobby_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&lobby_status_) -
        reinterpret_cast<char*>(&steamid_lobby_)) + sizeof(lobby_status_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LobbyMatchmakingLegacy_GetLobbyStatus_Response::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 app_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_app_id(&has_bits);
          app_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional fixed64 steamid_lobby = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _Internal::set_has_steamid_lobby(&has_bits);
          steamid_lobby_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint64_t>(ptr);
          ptr += sizeof(uint64_t);
        } else
          goto handle_unusual;
        continue;
      // optional .ELobbyStatus lobby_status = 3 [default = k_ELobbyStatusInvalid];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::ELobbyStatus_IsValid(val))) {
            _internal_set_lobby_status(static_cast<::ELobbyStatus>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LobbyMatchmakingLegacy_GetLobbyStatus_Response::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 app_id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_app_id(), target);
  }

  // optional fixed64 steamid_lobby = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed64ToArray(2, this->_internal_steamid_lobby(), target);
  }

  // optional .ELobbyStatus lobby_status = 3 [default = k_ELobbyStatusInvalid];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_lobby_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
  return target;
}

size_t LobbyMatchmakingLegacy_GetLobbyStatus_Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional fixed64 steamid_lobby = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional uint32 app_id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_app_id());
    }

    // optional .ELobbyStatus lobby_status = 3 [default = k_ELobbyStatusInvalid];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_lobby_status());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LobbyMatchmakingLegacy_GetLobbyStatus_Response::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LobbyMatchmakingLegacy_GetLobbyStatus_Response::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LobbyMatchmakingLegacy_GetLobbyStatus_Response::GetClassData() const { return &_class_data_; }

void LobbyMatchmakingLegacy_GetLobbyStatus_Response::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LobbyMatchmakingLegacy_GetLobbyStatus_Response *>(to)->MergeFrom(
      static_cast<const LobbyMatchmakingLegacy_GetLobbyStatus_Response &>(from));
}


void LobbyMatchmakingLegacy_GetLobbyStatus_Response::MergeFrom(const LobbyMatchmakingLegacy_GetLobbyStatus_Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      steamid_lobby_ = from.steamid_lobby_;
    }
    if (cached_has_bits & 0x00000002u) {
      app_id_ = from.app_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      lobby_status_ = from.lobby_status_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Response::CopyFrom(const LobbyMatchmakingLegacy_GetLobbyStatus_Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LobbyMatchmakingLegacy_GetLobbyStatus_Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LobbyMatchmakingLegacy_GetLobbyStatus_Response::IsInitialized() const {
  return true;
}

void LobbyMatchmakingLegacy_GetLobbyStatus_Response::InternalSwap(LobbyMatchmakingLegacy_GetLobbyStatus_Response* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LobbyMatchmakingLegacy_GetLobbyStatus_Response, lobby_status_)
      + sizeof(LobbyMatchmakingLegacy_GetLobbyStatus_Response::lobby_status_)
      - PROTOBUF_FIELD_OFFSET(LobbyMatchmakingLegacy_GetLobbyStatus_Response, steamid_lobby_)>(
          reinterpret_cast<char*>(&steamid_lobby_),
          reinterpret_cast<char*>(&other->steamid_lobby_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LobbyMatchmakingLegacy_GetLobbyStatus_Response::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_getter, &descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto_once,
      file_level_metadata_steammessages_5flobbymatchmaking_2esteamclient_2eproto[1]);
}

// ===================================================================

LobbyMatchmakingLegacy::~LobbyMatchmakingLegacy() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* LobbyMatchmakingLegacy::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_steammessages_5flobbymatchmaking_2esteamclient_2eproto);
  return file_level_service_descriptors_steammessages_5flobbymatchmaking_2esteamclient_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* LobbyMatchmakingLegacy::GetDescriptor() {
  return descriptor();
}

void LobbyMatchmakingLegacy::GetLobbyStatus(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::LobbyMatchmakingLegacy_GetLobbyStatus_Request*,
                         ::LobbyMatchmakingLegacy_GetLobbyStatus_Response*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetLobbyStatus() not implemented.");
  done->Run();
}

void LobbyMatchmakingLegacy::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_steammessages_5flobbymatchmaking_2esteamclient_2eproto[0]);
  switch(method->index()) {
    case 0:
      GetLobbyStatus(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::LobbyMatchmakingLegacy_GetLobbyStatus_Request*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::LobbyMatchmakingLegacy_GetLobbyStatus_Response*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& LobbyMatchmakingLegacy::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::LobbyMatchmakingLegacy_GetLobbyStatus_Request::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& LobbyMatchmakingLegacy::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::LobbyMatchmakingLegacy_GetLobbyStatus_Response::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

LobbyMatchmakingLegacy_Stub::LobbyMatchmakingLegacy_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
LobbyMatchmakingLegacy_Stub::LobbyMatchmakingLegacy_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
LobbyMatchmakingLegacy_Stub::~LobbyMatchmakingLegacy_Stub() {
  if (owns_channel_) delete channel_;
}

void LobbyMatchmakingLegacy_Stub::GetLobbyStatus(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::LobbyMatchmakingLegacy_GetLobbyStatus_Request* request,
                              ::LobbyMatchmakingLegacy_GetLobbyStatus_Response* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LobbyMatchmakingLegacy_GetLobbyStatus_Request* Arena::CreateMaybeMessage< ::LobbyMatchmakingLegacy_GetLobbyStatus_Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LobbyMatchmakingLegacy_GetLobbyStatus_Request >(arena);
}
template<> PROTOBUF_NOINLINE ::LobbyMatchmakingLegacy_GetLobbyStatus_Response* Arena::CreateMaybeMessage< ::LobbyMatchmakingLegacy_GetLobbyStatus_Response >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LobbyMatchmakingLegacy_GetLobbyStatus_Response >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
