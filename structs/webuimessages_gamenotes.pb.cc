// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: webuimessages_gamenotes.proto

#include "webuimessages_gamenotes.pb.h"

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
constexpr CGameNotes_UploadImage_Request::CGameNotes_UploadImage_Request(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : file_prefix_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , mime_type_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct CGameNotes_UploadImage_RequestDefaultTypeInternal {
  constexpr CGameNotes_UploadImage_RequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CGameNotes_UploadImage_RequestDefaultTypeInternal() {}
  union {
    CGameNotes_UploadImage_Request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CGameNotes_UploadImage_RequestDefaultTypeInternal _CGameNotes_UploadImage_Request_default_instance_;
constexpr CGameNotes_UploadImage_Response::CGameNotes_UploadImage_Response(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : filename_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct CGameNotes_UploadImage_ResponseDefaultTypeInternal {
  constexpr CGameNotes_UploadImage_ResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CGameNotes_UploadImage_ResponseDefaultTypeInternal() {}
  union {
    CGameNotes_UploadImage_Response _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CGameNotes_UploadImage_ResponseDefaultTypeInternal _CGameNotes_UploadImage_Response_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_webuimessages_5fgamenotes_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_webuimessages_5fgamenotes_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_webuimessages_5fgamenotes_2eproto[1];

const uint32_t TableStruct_webuimessages_5fgamenotes_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Request, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Request, file_prefix_),
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Request, mime_type_),
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Request, data_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Response, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::CGameNotes_UploadImage_Response, filename_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::CGameNotes_UploadImage_Request)},
  { 12, 19, -1, sizeof(::CGameNotes_UploadImage_Response)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CGameNotes_UploadImage_Request_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CGameNotes_UploadImage_Response_default_instance_),
};

const char descriptor_table_protodef_webuimessages_5fgamenotes_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035webuimessages_gamenotes.proto\032\030steamme"
  "ssages_base.proto\032\030webuimessages_base.pr"
  "oto\"V\n\036CGameNotes_UploadImage_Request\022\023\n"
  "\013file_prefix\030\001 \001(\t\022\021\n\tmime_type\030\002 \001(\t\022\014\n"
  "\004data\030\003 \001(\014\"3\n\037CGameNotes_UploadImage_Re"
  "sponse\022\020\n\010filename\030\001 \001(\t2c\n\tGameNotes\022P\n"
  "\013UploadImage\022\037.CGameNotes_UploadImage_Re"
  "quest\032 .CGameNotes_UploadImage_Response\032"
  "\004\200\227\"\001B\005H\001\200\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_webuimessages_5fgamenotes_2eproto_deps[2] = {
  &::descriptor_table_steammessages_5fbase_2eproto,
  &::descriptor_table_webuimessages_5fbase_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_webuimessages_5fgamenotes_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_webuimessages_5fgamenotes_2eproto = {
  false, false, 332, descriptor_table_protodef_webuimessages_5fgamenotes_2eproto, "webuimessages_gamenotes.proto", 
  &descriptor_table_webuimessages_5fgamenotes_2eproto_once, descriptor_table_webuimessages_5fgamenotes_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_webuimessages_5fgamenotes_2eproto::offsets,
  file_level_metadata_webuimessages_5fgamenotes_2eproto, file_level_enum_descriptors_webuimessages_5fgamenotes_2eproto, file_level_service_descriptors_webuimessages_5fgamenotes_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_webuimessages_5fgamenotes_2eproto_getter() {
  return &descriptor_table_webuimessages_5fgamenotes_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_webuimessages_5fgamenotes_2eproto(&descriptor_table_webuimessages_5fgamenotes_2eproto);

// ===================================================================

class CGameNotes_UploadImage_Request::_Internal {
 public:
  using HasBits = decltype(std::declval<CGameNotes_UploadImage_Request>()._has_bits_);
  static void set_has_file_prefix(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_mime_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

CGameNotes_UploadImage_Request::CGameNotes_UploadImage_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:CGameNotes_UploadImage_Request)
}
CGameNotes_UploadImage_Request::CGameNotes_UploadImage_Request(const CGameNotes_UploadImage_Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  file_prefix_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    file_prefix_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_file_prefix()) {
    file_prefix_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_file_prefix(), 
      GetArenaForAllocation());
  }
  mime_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    mime_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_mime_type()) {
    mime_type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_mime_type(), 
      GetArenaForAllocation());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_data()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:CGameNotes_UploadImage_Request)
}

inline void CGameNotes_UploadImage_Request::SharedCtor() {
file_prefix_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  file_prefix_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
mime_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  mime_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CGameNotes_UploadImage_Request::~CGameNotes_UploadImage_Request() {
  // @@protoc_insertion_point(destructor:CGameNotes_UploadImage_Request)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void CGameNotes_UploadImage_Request::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  file_prefix_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  mime_type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CGameNotes_UploadImage_Request::ArenaDtor(void* object) {
  CGameNotes_UploadImage_Request* _this = reinterpret_cast< CGameNotes_UploadImage_Request* >(object);
  (void)_this;
}
void CGameNotes_UploadImage_Request::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CGameNotes_UploadImage_Request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CGameNotes_UploadImage_Request::Clear() {
// @@protoc_insertion_point(message_clear_start:CGameNotes_UploadImage_Request)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      file_prefix_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      mime_type_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      data_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CGameNotes_UploadImage_Request::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string file_prefix = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_file_prefix();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "CGameNotes_UploadImage_Request.file_prefix");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string mime_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_mime_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "CGameNotes_UploadImage_Request.mime_type");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes data = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_data();
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

uint8_t* CGameNotes_UploadImage_Request::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CGameNotes_UploadImage_Request)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string file_prefix = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_file_prefix().data(), static_cast<int>(this->_internal_file_prefix().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "CGameNotes_UploadImage_Request.file_prefix");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_file_prefix(), target);
  }

  // optional string mime_type = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_mime_type().data(), static_cast<int>(this->_internal_mime_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "CGameNotes_UploadImage_Request.mime_type");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_mime_type(), target);
  }

  // optional bytes data = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CGameNotes_UploadImage_Request)
  return target;
}

size_t CGameNotes_UploadImage_Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CGameNotes_UploadImage_Request)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string file_prefix = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_file_prefix());
    }

    // optional string mime_type = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_mime_type());
    }

    // optional bytes data = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_data());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CGameNotes_UploadImage_Request::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    CGameNotes_UploadImage_Request::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CGameNotes_UploadImage_Request::GetClassData() const { return &_class_data_; }

void CGameNotes_UploadImage_Request::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<CGameNotes_UploadImage_Request *>(to)->MergeFrom(
      static_cast<const CGameNotes_UploadImage_Request &>(from));
}


void CGameNotes_UploadImage_Request::MergeFrom(const CGameNotes_UploadImage_Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CGameNotes_UploadImage_Request)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_file_prefix(from._internal_file_prefix());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_mime_type(from._internal_mime_type());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_data(from._internal_data());
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CGameNotes_UploadImage_Request::CopyFrom(const CGameNotes_UploadImage_Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CGameNotes_UploadImage_Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CGameNotes_UploadImage_Request::IsInitialized() const {
  return true;
}

void CGameNotes_UploadImage_Request::InternalSwap(CGameNotes_UploadImage_Request* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &file_prefix_, lhs_arena,
      &other->file_prefix_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &mime_type_, lhs_arena,
      &other->mime_type_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, lhs_arena,
      &other->data_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CGameNotes_UploadImage_Request::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_webuimessages_5fgamenotes_2eproto_getter, &descriptor_table_webuimessages_5fgamenotes_2eproto_once,
      file_level_metadata_webuimessages_5fgamenotes_2eproto[0]);
}

// ===================================================================

class CGameNotes_UploadImage_Response::_Internal {
 public:
  using HasBits = decltype(std::declval<CGameNotes_UploadImage_Response>()._has_bits_);
  static void set_has_filename(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

CGameNotes_UploadImage_Response::CGameNotes_UploadImage_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:CGameNotes_UploadImage_Response)
}
CGameNotes_UploadImage_Response::CGameNotes_UploadImage_Response(const CGameNotes_UploadImage_Response& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  filename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    filename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_filename()) {
    filename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_filename(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:CGameNotes_UploadImage_Response)
}

inline void CGameNotes_UploadImage_Response::SharedCtor() {
filename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  filename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CGameNotes_UploadImage_Response::~CGameNotes_UploadImage_Response() {
  // @@protoc_insertion_point(destructor:CGameNotes_UploadImage_Response)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void CGameNotes_UploadImage_Response::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  filename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CGameNotes_UploadImage_Response::ArenaDtor(void* object) {
  CGameNotes_UploadImage_Response* _this = reinterpret_cast< CGameNotes_UploadImage_Response* >(object);
  (void)_this;
}
void CGameNotes_UploadImage_Response::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CGameNotes_UploadImage_Response::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CGameNotes_UploadImage_Response::Clear() {
// @@protoc_insertion_point(message_clear_start:CGameNotes_UploadImage_Response)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    filename_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CGameNotes_UploadImage_Response::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string filename = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_filename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "CGameNotes_UploadImage_Response.filename");
          #endif  // !NDEBUG
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

uint8_t* CGameNotes_UploadImage_Response::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CGameNotes_UploadImage_Response)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string filename = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_filename().data(), static_cast<int>(this->_internal_filename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "CGameNotes_UploadImage_Response.filename");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_filename(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CGameNotes_UploadImage_Response)
  return target;
}

size_t CGameNotes_UploadImage_Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CGameNotes_UploadImage_Response)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string filename = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_filename());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CGameNotes_UploadImage_Response::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    CGameNotes_UploadImage_Response::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CGameNotes_UploadImage_Response::GetClassData() const { return &_class_data_; }

void CGameNotes_UploadImage_Response::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<CGameNotes_UploadImage_Response *>(to)->MergeFrom(
      static_cast<const CGameNotes_UploadImage_Response &>(from));
}


void CGameNotes_UploadImage_Response::MergeFrom(const CGameNotes_UploadImage_Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CGameNotes_UploadImage_Response)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_filename()) {
    _internal_set_filename(from._internal_filename());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CGameNotes_UploadImage_Response::CopyFrom(const CGameNotes_UploadImage_Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CGameNotes_UploadImage_Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CGameNotes_UploadImage_Response::IsInitialized() const {
  return true;
}

void CGameNotes_UploadImage_Response::InternalSwap(CGameNotes_UploadImage_Response* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &filename_, lhs_arena,
      &other->filename_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CGameNotes_UploadImage_Response::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_webuimessages_5fgamenotes_2eproto_getter, &descriptor_table_webuimessages_5fgamenotes_2eproto_once,
      file_level_metadata_webuimessages_5fgamenotes_2eproto[1]);
}

// ===================================================================

GameNotes::~GameNotes() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GameNotes::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_webuimessages_5fgamenotes_2eproto);
  return file_level_service_descriptors_webuimessages_5fgamenotes_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GameNotes::GetDescriptor() {
  return descriptor();
}

void GameNotes::UploadImage(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::CGameNotes_UploadImage_Request*,
                         ::CGameNotes_UploadImage_Response*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method UploadImage() not implemented.");
  done->Run();
}

void GameNotes::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_webuimessages_5fgamenotes_2eproto[0]);
  switch(method->index()) {
    case 0:
      UploadImage(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::CGameNotes_UploadImage_Request*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::CGameNotes_UploadImage_Response*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& GameNotes::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::CGameNotes_UploadImage_Request::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& GameNotes::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::CGameNotes_UploadImage_Response::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

GameNotes_Stub::GameNotes_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
GameNotes_Stub::GameNotes_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
GameNotes_Stub::~GameNotes_Stub() {
  if (owns_channel_) delete channel_;
}

void GameNotes_Stub::UploadImage(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::CGameNotes_UploadImage_Request* request,
                              ::CGameNotes_UploadImage_Response* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::CGameNotes_UploadImage_Request* Arena::CreateMaybeMessage< ::CGameNotes_UploadImage_Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CGameNotes_UploadImage_Request >(arena);
}
template<> PROTOBUF_NOINLINE ::CGameNotes_UploadImage_Response* Arena::CreateMaybeMessage< ::CGameNotes_UploadImage_Response >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CGameNotes_UploadImage_Response >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
