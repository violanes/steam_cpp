// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enums_productinfo.proto

#include "enums_productinfo.pb.h"

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
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_enums_5fproductinfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_enums_5fproductinfo_2eproto = nullptr;
const uint32_t TableStruct_enums_5fproductinfo_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_enums_5fproductinfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027enums_productinfo.proto\032\030steammessages"
  "_base.proto*\205\002\n\024EContentDescriptorID\022.\n*"
  "k_EContentDescriptor_NudityOrSexualConte"
  "nt\020\001\022/\n+k_EContentDescriptor_FrequentVio"
  "lenceOrGore\020\002\022/\n+k_EContentDescriptor_Ad"
  "ultOnlySexualContent\020\003\0220\n,k_EContentDesc"
  "riptor_GratuitousSexualContent\020\004\022)\n%k_EC"
  "ontentDescriptor_AnyMatureContent\020\005B\tH\001\200"
  "\001\001\200\265\030\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_enums_5fproductinfo_2eproto_deps[1] = {
  &::descriptor_table_steammessages_5fbase_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_enums_5fproductinfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_enums_5fproductinfo_2eproto = {
  false, false, 326, descriptor_table_protodef_enums_5fproductinfo_2eproto, "enums_productinfo.proto", 
  &descriptor_table_enums_5fproductinfo_2eproto_once, descriptor_table_enums_5fproductinfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_enums_5fproductinfo_2eproto::offsets,
  nullptr, file_level_enum_descriptors_enums_5fproductinfo_2eproto, file_level_service_descriptors_enums_5fproductinfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_enums_5fproductinfo_2eproto_getter() {
  return &descriptor_table_enums_5fproductinfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_enums_5fproductinfo_2eproto(&descriptor_table_enums_5fproductinfo_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EContentDescriptorID_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_enums_5fproductinfo_2eproto);
  return file_level_enum_descriptors_enums_5fproductinfo_2eproto[0];
}
bool EContentDescriptorID_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
