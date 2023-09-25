// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: encrypted_app_ticket.proto

#include "encrypted_app_ticket.pb.h"

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
constexpr EncryptedAppTicket::EncryptedAppTicket(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : encrypted_ticket_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , ticket_version_no_(0u)
  , crc_encryptedticket_(0u)
  , cb_encrypteduserdata_(0u)
  , cb_encrypted_appownershipticket_(0u){}
struct EncryptedAppTicketDefaultTypeInternal {
  constexpr EncryptedAppTicketDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EncryptedAppTicketDefaultTypeInternal() {}
  union {
    EncryptedAppTicket _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EncryptedAppTicketDefaultTypeInternal _EncryptedAppTicket_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_encrypted_5fapp_5fticket_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_encrypted_5fapp_5fticket_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_encrypted_5fapp_5fticket_2eproto = nullptr;

const uint32_t TableStruct_encrypted_5fapp_5fticket_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::EncryptedAppTicket, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::EncryptedAppTicket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::EncryptedAppTicket, ticket_version_no_),
  PROTOBUF_FIELD_OFFSET(::EncryptedAppTicket, crc_encryptedticket_),
  PROTOBUF_FIELD_OFFSET(::EncryptedAppTicket, cb_encrypteduserdata_),
  PROTOBUF_FIELD_OFFSET(::EncryptedAppTicket, cb_encrypted_appownershipticket_),
  PROTOBUF_FIELD_OFFSET(::EncryptedAppTicket, encrypted_ticket_),
  1,
  2,
  3,
  4,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::EncryptedAppTicket)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_EncryptedAppTicket_default_instance_),
};

const char descriptor_table_protodef_encrypted_5fapp_5fticket_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032encrypted_app_ticket.proto\"\255\001\n\022Encrypt"
  "edAppTicket\022\031\n\021ticket_version_no\030\001 \001(\r\022\033"
  "\n\023crc_encryptedticket\030\002 \001(\r\022\034\n\024cb_encryp"
  "teduserdata\030\003 \001(\r\022\'\n\037cb_encrypted_appown"
  "ershipticket\030\004 \001(\r\022\030\n\020encrypted_ticket\030\005"
  " \001(\014B\005H\001\200\001\000"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_encrypted_5fapp_5fticket_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_encrypted_5fapp_5fticket_2eproto = {
  false, false, 211, descriptor_table_protodef_encrypted_5fapp_5fticket_2eproto, "encrypted_app_ticket.proto", 
  &descriptor_table_encrypted_5fapp_5fticket_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_encrypted_5fapp_5fticket_2eproto::offsets,
  file_level_metadata_encrypted_5fapp_5fticket_2eproto, file_level_enum_descriptors_encrypted_5fapp_5fticket_2eproto, file_level_service_descriptors_encrypted_5fapp_5fticket_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_encrypted_5fapp_5fticket_2eproto_getter() {
  return &descriptor_table_encrypted_5fapp_5fticket_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_encrypted_5fapp_5fticket_2eproto(&descriptor_table_encrypted_5fapp_5fticket_2eproto);

// ===================================================================

class EncryptedAppTicket::_Internal {
 public:
  using HasBits = decltype(std::declval<EncryptedAppTicket>()._has_bits_);
  static void set_has_ticket_version_no(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_crc_encryptedticket(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_cb_encrypteduserdata(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_cb_encrypted_appownershipticket(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_encrypted_ticket(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

EncryptedAppTicket::EncryptedAppTicket(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:EncryptedAppTicket)
}
EncryptedAppTicket::EncryptedAppTicket(const EncryptedAppTicket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  encrypted_ticket_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    encrypted_ticket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_encrypted_ticket()) {
    encrypted_ticket_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_encrypted_ticket(), 
      GetArenaForAllocation());
  }
  ::memcpy(&ticket_version_no_, &from.ticket_version_no_,
    static_cast<size_t>(reinterpret_cast<char*>(&cb_encrypted_appownershipticket_) -
    reinterpret_cast<char*>(&ticket_version_no_)) + sizeof(cb_encrypted_appownershipticket_));
  // @@protoc_insertion_point(copy_constructor:EncryptedAppTicket)
}

inline void EncryptedAppTicket::SharedCtor() {
encrypted_ticket_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  encrypted_ticket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&ticket_version_no_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&cb_encrypted_appownershipticket_) -
    reinterpret_cast<char*>(&ticket_version_no_)) + sizeof(cb_encrypted_appownershipticket_));
}

EncryptedAppTicket::~EncryptedAppTicket() {
  // @@protoc_insertion_point(destructor:EncryptedAppTicket)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void EncryptedAppTicket::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  encrypted_ticket_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EncryptedAppTicket::ArenaDtor(void* object) {
  EncryptedAppTicket* _this = reinterpret_cast< EncryptedAppTicket* >(object);
  (void)_this;
}
void EncryptedAppTicket::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EncryptedAppTicket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void EncryptedAppTicket::Clear() {
// @@protoc_insertion_point(message_clear_start:EncryptedAppTicket)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    encrypted_ticket_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000001eu) {
    ::memset(&ticket_version_no_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&cb_encrypted_appownershipticket_) -
        reinterpret_cast<char*>(&ticket_version_no_)) + sizeof(cb_encrypted_appownershipticket_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EncryptedAppTicket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 ticket_version_no = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_ticket_version_no(&has_bits);
          ticket_version_no_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 crc_encryptedticket = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_crc_encryptedticket(&has_bits);
          crc_encryptedticket_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 cb_encrypteduserdata = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_cb_encrypteduserdata(&has_bits);
          cb_encrypteduserdata_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 cb_encrypted_appownershipticket = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_cb_encrypted_appownershipticket(&has_bits);
          cb_encrypted_appownershipticket_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes encrypted_ticket = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_encrypted_ticket();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* EncryptedAppTicket::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:EncryptedAppTicket)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 ticket_version_no = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_ticket_version_no(), target);
  }

  // optional uint32 crc_encryptedticket = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_crc_encryptedticket(), target);
  }

  // optional uint32 cb_encrypteduserdata = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_cb_encrypteduserdata(), target);
  }

  // optional uint32 cb_encrypted_appownershipticket = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_cb_encrypted_appownershipticket(), target);
  }

  // optional bytes encrypted_ticket = 5;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_encrypted_ticket(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:EncryptedAppTicket)
  return target;
}

size_t EncryptedAppTicket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:EncryptedAppTicket)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional bytes encrypted_ticket = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_encrypted_ticket());
    }

    // optional uint32 ticket_version_no = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_ticket_version_no());
    }

    // optional uint32 crc_encryptedticket = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_crc_encryptedticket());
    }

    // optional uint32 cb_encrypteduserdata = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_cb_encrypteduserdata());
    }

    // optional uint32 cb_encrypted_appownershipticket = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_cb_encrypted_appownershipticket());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EncryptedAppTicket::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    EncryptedAppTicket::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EncryptedAppTicket::GetClassData() const { return &_class_data_; }

void EncryptedAppTicket::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<EncryptedAppTicket *>(to)->MergeFrom(
      static_cast<const EncryptedAppTicket &>(from));
}


void EncryptedAppTicket::MergeFrom(const EncryptedAppTicket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:EncryptedAppTicket)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_encrypted_ticket(from._internal_encrypted_ticket());
    }
    if (cached_has_bits & 0x00000002u) {
      ticket_version_no_ = from.ticket_version_no_;
    }
    if (cached_has_bits & 0x00000004u) {
      crc_encryptedticket_ = from.crc_encryptedticket_;
    }
    if (cached_has_bits & 0x00000008u) {
      cb_encrypteduserdata_ = from.cb_encrypteduserdata_;
    }
    if (cached_has_bits & 0x00000010u) {
      cb_encrypted_appownershipticket_ = from.cb_encrypted_appownershipticket_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EncryptedAppTicket::CopyFrom(const EncryptedAppTicket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:EncryptedAppTicket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EncryptedAppTicket::IsInitialized() const {
  return true;
}

void EncryptedAppTicket::InternalSwap(EncryptedAppTicket* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &encrypted_ticket_, lhs_arena,
      &other->encrypted_ticket_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(EncryptedAppTicket, cb_encrypted_appownershipticket_)
      + sizeof(EncryptedAppTicket::cb_encrypted_appownershipticket_)
      - PROTOBUF_FIELD_OFFSET(EncryptedAppTicket, ticket_version_no_)>(
          reinterpret_cast<char*>(&ticket_version_no_),
          reinterpret_cast<char*>(&other->ticket_version_no_));
}

::PROTOBUF_NAMESPACE_ID::Metadata EncryptedAppTicket::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_encrypted_5fapp_5fticket_2eproto_getter, &descriptor_table_encrypted_5fapp_5fticket_2eproto_once,
      file_level_metadata_encrypted_5fapp_5fticket_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::EncryptedAppTicket* Arena::CreateMaybeMessage< ::EncryptedAppTicket >(Arena* arena) {
  return Arena::CreateMessageInternal< ::EncryptedAppTicket >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
