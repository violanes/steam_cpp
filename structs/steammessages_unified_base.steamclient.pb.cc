// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_unified_base.steamclient.proto

#include "steammessages_unified_base.steamclient.pb.h"

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
constexpr NoResponse::NoResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct NoResponseDefaultTypeInternal {
  constexpr NoResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NoResponseDefaultTypeInternal() {}
  union {
    NoResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NoResponseDefaultTypeInternal _NoResponse_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_steammessages_5funified_5fbase_2esteamclient_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_steammessages_5funified_5fbase_2esteamclient_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_steammessages_5funified_5fbase_2esteamclient_2eproto = nullptr;

const uint32_t TableStruct_steammessages_5funified_5fbase_2esteamclient_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::NoResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::NoResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_NoResponse_default_instance_),
};

const char descriptor_table_protodef_steammessages_5funified_5fbase_2esteamclient_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,steammessages_unified_base.steamclient"
  ".proto\032 google/protobuf/descriptor.proto"
  "\"\014\n\nNoResponse*]\n\023EProtoExecutionSite\022 \n"
  "\034k_EProtoExecutionSiteUnknown\020\000\022$\n k_EPr"
  "otoExecutionSiteSteamClient\020\002:4\n\013descrip"
  "tion\022\035.google.protobuf.FieldOptions\030\320\206\003 "
  "\001(\t:>\n\023service_description\022\037.google.prot"
  "obuf.ServiceOptions\030\320\206\003 \001(\t:u\n\026service_e"
  "xecution_site\022\037.google.protobuf.ServiceO"
  "ptions\030\330\206\003 \001(\0162\024.EProtoExecutionSite:\034k_"
  "EProtoExecutionSiteUnknown:<\n\022method_des"
  "cription\022\036.google.protobuf.MethodOptions"
  "\030\320\206\003 \001(\t:8\n\020enum_description\022\034.google.pr"
  "otobuf.EnumOptions\030\320\206\003 \001(\t:C\n\026enum_value"
  "_description\022!.google.protobuf.EnumValue"
  "Options\030\320\206\003 \001(\tB\005H\001\200\001\000"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto = {
  false, false, 622, descriptor_table_protodef_steammessages_5funified_5fbase_2esteamclient_2eproto, "steammessages_unified_base.steamclient.proto", 
  &descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto_once, descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_steammessages_5funified_5fbase_2esteamclient_2eproto::offsets,
  file_level_metadata_steammessages_5funified_5fbase_2esteamclient_2eproto, file_level_enum_descriptors_steammessages_5funified_5fbase_2esteamclient_2eproto, file_level_service_descriptors_steammessages_5funified_5fbase_2esteamclient_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto_getter() {
  return &descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_steammessages_5funified_5fbase_2esteamclient_2eproto(&descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EProtoExecutionSite_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto);
  return file_level_enum_descriptors_steammessages_5funified_5fbase_2esteamclient_2eproto[0];
}
bool EProtoExecutionSite_IsValid(int value) {
  switch (value) {
    case 0:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class NoResponse::_Internal {
 public:
};

NoResponse::NoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:NoResponse)
}
NoResponse::NoResponse(const NoResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:NoResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NoResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NoResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata NoResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto_getter, &descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto_once,
      file_level_metadata_steammessages_5funified_5fbase_2esteamclient_2eproto[0]);
}
const std::string description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  description(kDescriptionFieldNumber, description_default);
const std::string service_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  service_description(kServiceDescriptionFieldNumber, service_description_default);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::EProtoExecutionSite, ::EProtoExecutionSite_IsValid>, 14, false >
  service_execution_site(kServiceExecutionSiteFieldNumber, static_cast< ::EProtoExecutionSite >(0));
const std::string method_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  method_description(kMethodDescriptionFieldNumber, method_description_default);
const std::string enum_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enum_description(kEnumDescriptionFieldNumber, enum_description_default);
const std::string enum_value_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enum_value_description(kEnumValueDescriptionFieldNumber, enum_value_description_default);

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::NoResponse* Arena::CreateMaybeMessage< ::NoResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::NoResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
