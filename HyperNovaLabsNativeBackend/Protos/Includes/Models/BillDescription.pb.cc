// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Models/BillDescription.proto

#include "Models/BillDescription.pb.h"

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
namespace HyperNovaLabs {
namespace Api {
namespace Protos {
namespace Models {
constexpr BillDescription::BillDescription(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : description_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , date_(nullptr)
  , price_(0)
  , total_(0)
  , quantity_(0){}
struct BillDescriptionDefaultTypeInternal {
  constexpr BillDescriptionDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~BillDescriptionDefaultTypeInternal() {}
  union {
    BillDescription _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT BillDescriptionDefaultTypeInternal _BillDescription_default_instance_;
}  // namespace Models
}  // namespace Protos
}  // namespace Api
}  // namespace HyperNovaLabs
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Models_2fBillDescription_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Models_2fBillDescription_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Models_2fBillDescription_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Models_2fBillDescription_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::HyperNovaLabs::Api::Protos::Models::BillDescription, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::HyperNovaLabs::Api::Protos::Models::BillDescription, date_),
  PROTOBUF_FIELD_OFFSET(::HyperNovaLabs::Api::Protos::Models::BillDescription, quantity_),
  PROTOBUF_FIELD_OFFSET(::HyperNovaLabs::Api::Protos::Models::BillDescription, price_),
  PROTOBUF_FIELD_OFFSET(::HyperNovaLabs::Api::Protos::Models::BillDescription, description_),
  PROTOBUF_FIELD_OFFSET(::HyperNovaLabs::Api::Protos::Models::BillDescription, total_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::HyperNovaLabs::Api::Protos::Models::BillDescription)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::HyperNovaLabs::Api::Protos::Models::_BillDescription_default_instance_),
};

const char descriptor_table_protodef_Models_2fBillDescription_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034Models/BillDescription.proto\022\037HyperNov"
  "aLabs.Api.Protos.Models\032\037google/protobuf"
  "/timestamp.proto\032\036google/protobuf/durati"
  "on.proto\"\200\001\n\017BillDescription\022(\n\004date\030\001 \001"
  "(\0132\032.google.protobuf.Timestamp\022\020\n\010quanti"
  "ty\030\002 \001(\005\022\r\n\005price\030\003 \001(\001\022\023\n\013description\030\004"
  " \001(\t\022\r\n\005total\030\005 \001(\001B\003\370\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Models_2fBillDescription_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Models_2fBillDescription_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Models_2fBillDescription_2eproto = {
  false, false, 272, descriptor_table_protodef_Models_2fBillDescription_2eproto, "Models/BillDescription.proto", 
  &descriptor_table_Models_2fBillDescription_2eproto_once, descriptor_table_Models_2fBillDescription_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_Models_2fBillDescription_2eproto::offsets,
  file_level_metadata_Models_2fBillDescription_2eproto, file_level_enum_descriptors_Models_2fBillDescription_2eproto, file_level_service_descriptors_Models_2fBillDescription_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_Models_2fBillDescription_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Models_2fBillDescription_2eproto);
  return descriptor_table_Models_2fBillDescription_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Models_2fBillDescription_2eproto(&descriptor_table_Models_2fBillDescription_2eproto);
namespace HyperNovaLabs {
namespace Api {
namespace Protos {
namespace Models {

// ===================================================================

class BillDescription::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& date(const BillDescription* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
BillDescription::_Internal::date(const BillDescription* msg) {
  return *msg->date_;
}
void BillDescription::clear_date() {
  if (GetArena() == nullptr && date_ != nullptr) {
    delete date_;
  }
  date_ = nullptr;
}
BillDescription::BillDescription(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:HyperNovaLabs.Api.Protos.Models.BillDescription)
}
BillDescription::BillDescription(const BillDescription& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_description().empty()) {
    description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_description(), 
      GetArena());
  }
  if (from._internal_has_date()) {
    date_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.date_);
  } else {
    date_ = nullptr;
  }
  ::memcpy(&price_, &from.price_,
    static_cast<size_t>(reinterpret_cast<char*>(&quantity_) -
    reinterpret_cast<char*>(&price_)) + sizeof(quantity_));
  // @@protoc_insertion_point(copy_constructor:HyperNovaLabs.Api.Protos.Models.BillDescription)
}

void BillDescription::SharedCtor() {
description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&date_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&quantity_) -
    reinterpret_cast<char*>(&date_)) + sizeof(quantity_));
}

BillDescription::~BillDescription() {
  // @@protoc_insertion_point(destructor:HyperNovaLabs.Api.Protos.Models.BillDescription)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void BillDescription::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete date_;
}

void BillDescription::ArenaDtor(void* object) {
  BillDescription* _this = reinterpret_cast< BillDescription* >(object);
  (void)_this;
}
void BillDescription::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void BillDescription::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void BillDescription::Clear() {
// @@protoc_insertion_point(message_clear_start:HyperNovaLabs.Api.Protos.Models.BillDescription)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  description_.ClearToEmpty();
  if (GetArena() == nullptr && date_ != nullptr) {
    delete date_;
  }
  date_ = nullptr;
  ::memset(&price_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&quantity_) -
      reinterpret_cast<char*>(&price_)) + sizeof(quantity_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BillDescription::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .google.protobuf.Timestamp date = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_date(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 quantity = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          quantity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double price = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // string description = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "HyperNovaLabs.Api.Protos.Models.BillDescription.description"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double total = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          total_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* BillDescription::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:HyperNovaLabs.Api.Protos.Models.BillDescription)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp date = 1;
  if (this->has_date()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::date(this), target, stream);
  }

  // int32 quantity = 2;
  if (this->quantity() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_quantity(), target);
  }

  // double price = 3;
  if (!(this->price() <= 0 && this->price() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_price(), target);
  }

  // string description = 4;
  if (this->description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "HyperNovaLabs.Api.Protos.Models.BillDescription.description");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_description(), target);
  }

  // double total = 5;
  if (!(this->total() <= 0 && this->total() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_total(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:HyperNovaLabs.Api.Protos.Models.BillDescription)
  return target;
}

size_t BillDescription::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:HyperNovaLabs.Api.Protos.Models.BillDescription)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string description = 4;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  // .google.protobuf.Timestamp date = 1;
  if (this->has_date()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *date_);
  }

  // double price = 3;
  if (!(this->price() <= 0 && this->price() >= 0)) {
    total_size += 1 + 8;
  }

  // double total = 5;
  if (!(this->total() <= 0 && this->total() >= 0)) {
    total_size += 1 + 8;
  }

  // int32 quantity = 2;
  if (this->quantity() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_quantity());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BillDescription::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:HyperNovaLabs.Api.Protos.Models.BillDescription)
  GOOGLE_DCHECK_NE(&from, this);
  const BillDescription* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<BillDescription>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:HyperNovaLabs.Api.Protos.Models.BillDescription)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:HyperNovaLabs.Api.Protos.Models.BillDescription)
    MergeFrom(*source);
  }
}

void BillDescription::MergeFrom(const BillDescription& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:HyperNovaLabs.Api.Protos.Models.BillDescription)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.description().size() > 0) {
    _internal_set_description(from._internal_description());
  }
  if (from.has_date()) {
    _internal_mutable_date()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_date());
  }
  if (!(from.price() <= 0 && from.price() >= 0)) {
    _internal_set_price(from._internal_price());
  }
  if (!(from.total() <= 0 && from.total() >= 0)) {
    _internal_set_total(from._internal_total());
  }
  if (from.quantity() != 0) {
    _internal_set_quantity(from._internal_quantity());
  }
}

void BillDescription::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:HyperNovaLabs.Api.Protos.Models.BillDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BillDescription::CopyFrom(const BillDescription& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:HyperNovaLabs.Api.Protos.Models.BillDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BillDescription::IsInitialized() const {
  return true;
}

void BillDescription::InternalSwap(BillDescription* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  description_.Swap(&other->description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BillDescription, quantity_)
      + sizeof(BillDescription::quantity_)
      - PROTOBUF_FIELD_OFFSET(BillDescription, date_)>(
          reinterpret_cast<char*>(&date_),
          reinterpret_cast<char*>(&other->date_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BillDescription::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Models
}  // namespace Protos
}  // namespace Api
}  // namespace HyperNovaLabs
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::HyperNovaLabs::Api::Protos::Models::BillDescription* Arena::CreateMaybeMessage< ::HyperNovaLabs::Api::Protos::Models::BillDescription >(Arena* arena) {
  return Arena::CreateMessageInternal< ::HyperNovaLabs::Api::Protos::Models::BillDescription >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
