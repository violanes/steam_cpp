// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: webuimessages_systemmanager.proto

#include "webuimessages_systemmanager.pb.h"

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
constexpr CSystemManager_Hibernate_Request::CSystemManager_Hibernate_Request(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct CSystemManager_Hibernate_RequestDefaultTypeInternal {
  constexpr CSystemManager_Hibernate_RequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CSystemManager_Hibernate_RequestDefaultTypeInternal() {}
  union {
    CSystemManager_Hibernate_Request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CSystemManager_Hibernate_RequestDefaultTypeInternal _CSystemManager_Hibernate_Request_default_instance_;
constexpr CSystemManager_Hibernate_Response::CSystemManager_Hibernate_Response(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct CSystemManager_Hibernate_ResponseDefaultTypeInternal {
  constexpr CSystemManager_Hibernate_ResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CSystemManager_Hibernate_ResponseDefaultTypeInternal() {}
  union {
    CSystemManager_Hibernate_Response _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CSystemManager_Hibernate_ResponseDefaultTypeInternal _CSystemManager_Hibernate_Response_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_webuimessages_5fsystemmanager_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_webuimessages_5fsystemmanager_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_webuimessages_5fsystemmanager_2eproto[1];

const uint32_t TableStruct_webuimessages_5fsystemmanager_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::CSystemManager_Hibernate_Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::CSystemManager_Hibernate_Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::CSystemManager_Hibernate_Request)},
  { 6, -1, -1, sizeof(::CSystemManager_Hibernate_Response)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CSystemManager_Hibernate_Request_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CSystemManager_Hibernate_Response_default_instance_),
};

const char descriptor_table_protodef_webuimessages_5fsystemmanager_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!webuimessages_systemmanager.proto\032\030ste"
  "ammessages_base.proto\032\030webuimessages_bas"
  "e.proto\"\"\n CSystemManager_Hibernate_Requ"
  "est\"#\n!CSystemManager_Hibernate_Response"
  "2i\n\rSystemManager\022R\n\tHibernate\022!.CSystem"
  "Manager_Hibernate_Request\032\".CSystemManag"
  "er_Hibernate_Response\032\004\200\227\"\002B\005H\001\200\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_webuimessages_5fsystemmanager_2eproto_deps[2] = {
  &::descriptor_table_steammessages_5fbase_2eproto,
  &::descriptor_table_webuimessages_5fbase_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_webuimessages_5fsystemmanager_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_webuimessages_5fsystemmanager_2eproto = {
  false, false, 274, descriptor_table_protodef_webuimessages_5fsystemmanager_2eproto, "webuimessages_systemmanager.proto", 
  &descriptor_table_webuimessages_5fsystemmanager_2eproto_once, descriptor_table_webuimessages_5fsystemmanager_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_webuimessages_5fsystemmanager_2eproto::offsets,
  file_level_metadata_webuimessages_5fsystemmanager_2eproto, file_level_enum_descriptors_webuimessages_5fsystemmanager_2eproto, file_level_service_descriptors_webuimessages_5fsystemmanager_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_webuimessages_5fsystemmanager_2eproto_getter() {
  return &descriptor_table_webuimessages_5fsystemmanager_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_webuimessages_5fsystemmanager_2eproto(&descriptor_table_webuimessages_5fsystemmanager_2eproto);

// ===================================================================

class CSystemManager_Hibernate_Request::_Internal {
 public:
};

CSystemManager_Hibernate_Request::CSystemManager_Hibernate_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:CSystemManager_Hibernate_Request)
}
CSystemManager_Hibernate_Request::CSystemManager_Hibernate_Request(const CSystemManager_Hibernate_Request& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:CSystemManager_Hibernate_Request)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CSystemManager_Hibernate_Request::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CSystemManager_Hibernate_Request::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata CSystemManager_Hibernate_Request::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_webuimessages_5fsystemmanager_2eproto_getter, &descriptor_table_webuimessages_5fsystemmanager_2eproto_once,
      file_level_metadata_webuimessages_5fsystemmanager_2eproto[0]);
}

// ===================================================================

class CSystemManager_Hibernate_Response::_Internal {
 public:
};

CSystemManager_Hibernate_Response::CSystemManager_Hibernate_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:CSystemManager_Hibernate_Response)
}
CSystemManager_Hibernate_Response::CSystemManager_Hibernate_Response(const CSystemManager_Hibernate_Response& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:CSystemManager_Hibernate_Response)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CSystemManager_Hibernate_Response::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CSystemManager_Hibernate_Response::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata CSystemManager_Hibernate_Response::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_webuimessages_5fsystemmanager_2eproto_getter, &descriptor_table_webuimessages_5fsystemmanager_2eproto_once,
      file_level_metadata_webuimessages_5fsystemmanager_2eproto[1]);
}

// ===================================================================

SystemManager::~SystemManager() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* SystemManager::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_webuimessages_5fsystemmanager_2eproto);
  return file_level_service_descriptors_webuimessages_5fsystemmanager_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* SystemManager::GetDescriptor() {
  return descriptor();
}

void SystemManager::Hibernate(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::CSystemManager_Hibernate_Request*,
                         ::CSystemManager_Hibernate_Response*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Hibernate() not implemented.");
  done->Run();
}

void SystemManager::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_webuimessages_5fsystemmanager_2eproto[0]);
  switch(method->index()) {
    case 0:
      Hibernate(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::CSystemManager_Hibernate_Request*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::CSystemManager_Hibernate_Response*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& SystemManager::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::CSystemManager_Hibernate_Request::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& SystemManager::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::CSystemManager_Hibernate_Response::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

SystemManager_Stub::SystemManager_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
SystemManager_Stub::SystemManager_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
SystemManager_Stub::~SystemManager_Stub() {
  if (owns_channel_) delete channel_;
}

void SystemManager_Stub::Hibernate(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::CSystemManager_Hibernate_Request* request,
                              ::CSystemManager_Hibernate_Response* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::CSystemManager_Hibernate_Request* Arena::CreateMaybeMessage< ::CSystemManager_Hibernate_Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CSystemManager_Hibernate_Request >(arena);
}
template<> PROTOBUF_NOINLINE ::CSystemManager_Hibernate_Response* Arena::CreateMaybeMessage< ::CSystemManager_Hibernate_Response >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CSystemManager_Hibernate_Response >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
