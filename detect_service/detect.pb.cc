// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: detect.proto

#include "detect.pb.h"

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
namespace Detect {
constexpr BoxRect::BoxRect(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : x_(0)
  , y_(0)
  , width_(0)
  , height_(0)
  , class_id_(int64_t{0}){}
struct BoxRectDefaultTypeInternal {
  constexpr BoxRectDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~BoxRectDefaultTypeInternal() {}
  union {
    BoxRect _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT BoxRectDefaultTypeInternal _BoxRect_default_instance_;
constexpr DetectRequest::DetectRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : status_(false){}
struct DetectRequestDefaultTypeInternal {
  constexpr DetectRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DetectRequestDefaultTypeInternal() {}
  union {
    DetectRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DetectRequestDefaultTypeInternal _DetectRequest_default_instance_;
constexpr DetectResponse::DetectResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : rect_()
  , status_(false){}
struct DetectResponseDefaultTypeInternal {
  constexpr DetectResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DetectResponseDefaultTypeInternal() {}
  union {
    DetectResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DetectResponseDefaultTypeInternal _DetectResponse_default_instance_;
}  // namespace Detect
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_detect_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_detect_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_detect_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_detect_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Detect::BoxRect, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Detect::BoxRect, x_),
  PROTOBUF_FIELD_OFFSET(::Detect::BoxRect, y_),
  PROTOBUF_FIELD_OFFSET(::Detect::BoxRect, width_),
  PROTOBUF_FIELD_OFFSET(::Detect::BoxRect, height_),
  PROTOBUF_FIELD_OFFSET(::Detect::BoxRect, class_id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Detect::DetectRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Detect::DetectRequest, status_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Detect::DetectResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Detect::DetectResponse, status_),
  PROTOBUF_FIELD_OFFSET(::Detect::DetectResponse, rect_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Detect::BoxRect)},
  { 10, -1, sizeof(::Detect::DetectRequest)},
  { 16, -1, sizeof(::Detect::DetectResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Detect::_BoxRect_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Detect::_DetectRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Detect::_DetectResponse_default_instance_),
};

const char descriptor_table_protodef_detect_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014detect.proto\022\006Detect\"P\n\007BoxRect\022\t\n\001x\030\001"
  " \001(\001\022\t\n\001y\030\002 \001(\001\022\r\n\005width\030\003 \001(\001\022\016\n\006height"
  "\030\004 \001(\001\022\020\n\010class_id\030\005 \001(\003\"\037\n\rDetectReques"
  "t\022\016\n\006status\030\001 \001(\010\"\?\n\016DetectResponse\022\016\n\006s"
  "tatus\030\001 \001(\010\022\035\n\004rect\030\002 \003(\0132\017.Detect.BoxRe"
  "ct2V\n\023DetectResultService\022\?\n\014DetectedRec"
  "t\022\025.Detect.DetectRequest\032\026.Detect.Detect"
  "Response\"\000B\030Z\026/detect_service;Detectb\006pr"
  "oto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_detect_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_detect_2eproto = {
  false, false, 324, descriptor_table_protodef_detect_2eproto, "detect.proto", 
  &descriptor_table_detect_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_detect_2eproto::offsets,
  file_level_metadata_detect_2eproto, file_level_enum_descriptors_detect_2eproto, file_level_service_descriptors_detect_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_detect_2eproto_getter() {
  return &descriptor_table_detect_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_detect_2eproto(&descriptor_table_detect_2eproto);
namespace Detect {

// ===================================================================

class BoxRect::_Internal {
 public:
};

BoxRect::BoxRect(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Detect.BoxRect)
}
BoxRect::BoxRect(const BoxRect& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&class_id_) -
    reinterpret_cast<char*>(&x_)) + sizeof(class_id_));
  // @@protoc_insertion_point(copy_constructor:Detect.BoxRect)
}

inline void BoxRect::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&x_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&class_id_) -
    reinterpret_cast<char*>(&x_)) + sizeof(class_id_));
}

BoxRect::~BoxRect() {
  // @@protoc_insertion_point(destructor:Detect.BoxRect)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void BoxRect::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void BoxRect::ArenaDtor(void* object) {
  BoxRect* _this = reinterpret_cast< BoxRect* >(object);
  (void)_this;
}
void BoxRect::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void BoxRect::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void BoxRect::Clear() {
// @@protoc_insertion_point(message_clear_start:Detect.BoxRect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&class_id_) -
      reinterpret_cast<char*>(&x_)) + sizeof(class_id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BoxRect::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double width = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double height = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // int64 class_id = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          class_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* BoxRect::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Detect.BoxRect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->_internal_x() <= 0 && this->_internal_x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_x(), target);
  }

  // double y = 2;
  if (!(this->_internal_y() <= 0 && this->_internal_y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_y(), target);
  }

  // double width = 3;
  if (!(this->_internal_width() <= 0 && this->_internal_width() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_width(), target);
  }

  // double height = 4;
  if (!(this->_internal_height() <= 0 && this->_internal_height() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_height(), target);
  }

  // int64 class_id = 5;
  if (this->_internal_class_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(5, this->_internal_class_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Detect.BoxRect)
  return target;
}

size_t BoxRect::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Detect.BoxRect)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->_internal_x() <= 0 && this->_internal_x() >= 0)) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (!(this->_internal_y() <= 0 && this->_internal_y() >= 0)) {
    total_size += 1 + 8;
  }

  // double width = 3;
  if (!(this->_internal_width() <= 0 && this->_internal_width() >= 0)) {
    total_size += 1 + 8;
  }

  // double height = 4;
  if (!(this->_internal_height() <= 0 && this->_internal_height() >= 0)) {
    total_size += 1 + 8;
  }

  // int64 class_id = 5;
  if (this->_internal_class_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_class_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BoxRect::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    BoxRect::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BoxRect::GetClassData() const { return &_class_data_; }

void BoxRect::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<BoxRect *>(to)->MergeFrom(
      static_cast<const BoxRect &>(from));
}


void BoxRect::MergeFrom(const BoxRect& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Detect.BoxRect)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from._internal_x() <= 0 && from._internal_x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from._internal_y() <= 0 && from._internal_y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
  if (!(from._internal_width() <= 0 && from._internal_width() >= 0)) {
    _internal_set_width(from._internal_width());
  }
  if (!(from._internal_height() <= 0 && from._internal_height() >= 0)) {
    _internal_set_height(from._internal_height());
  }
  if (from._internal_class_id() != 0) {
    _internal_set_class_id(from._internal_class_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BoxRect::CopyFrom(const BoxRect& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Detect.BoxRect)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoxRect::IsInitialized() const {
  return true;
}

void BoxRect::InternalSwap(BoxRect* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BoxRect, class_id_)
      + sizeof(BoxRect::class_id_)
      - PROTOBUF_FIELD_OFFSET(BoxRect, x_)>(
          reinterpret_cast<char*>(&x_),
          reinterpret_cast<char*>(&other->x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BoxRect::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_detect_2eproto_getter, &descriptor_table_detect_2eproto_once,
      file_level_metadata_detect_2eproto[0]);
}

// ===================================================================

class DetectRequest::_Internal {
 public:
};

DetectRequest::DetectRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Detect.DetectRequest)
}
DetectRequest::DetectRequest(const DetectRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:Detect.DetectRequest)
}

inline void DetectRequest::SharedCtor() {
status_ = false;
}

DetectRequest::~DetectRequest() {
  // @@protoc_insertion_point(destructor:Detect.DetectRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void DetectRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void DetectRequest::ArenaDtor(void* object) {
  DetectRequest* _this = reinterpret_cast< DetectRequest* >(object);
  (void)_this;
}
void DetectRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DetectRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DetectRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:Detect.DetectRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DetectRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* DetectRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Detect.DetectRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Detect.DetectRequest)
  return target;
}

size_t DetectRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Detect.DetectRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool status = 1;
  if (this->_internal_status() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DetectRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    DetectRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DetectRequest::GetClassData() const { return &_class_data_; }

void DetectRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<DetectRequest *>(to)->MergeFrom(
      static_cast<const DetectRequest &>(from));
}


void DetectRequest::MergeFrom(const DetectRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Detect.DetectRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_status() != 0) {
    _internal_set_status(from._internal_status());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DetectRequest::CopyFrom(const DetectRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Detect.DetectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectRequest::IsInitialized() const {
  return true;
}

void DetectRequest::InternalSwap(DetectRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DetectRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_detect_2eproto_getter, &descriptor_table_detect_2eproto_once,
      file_level_metadata_detect_2eproto[1]);
}

// ===================================================================

class DetectResponse::_Internal {
 public:
};

DetectResponse::DetectResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  rect_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Detect.DetectResponse)
}
DetectResponse::DetectResponse(const DetectResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      rect_(from.rect_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:Detect.DetectResponse)
}

inline void DetectResponse::SharedCtor() {
status_ = false;
}

DetectResponse::~DetectResponse() {
  // @@protoc_insertion_point(destructor:Detect.DetectResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void DetectResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void DetectResponse::ArenaDtor(void* object) {
  DetectResponse* _this = reinterpret_cast< DetectResponse* >(object);
  (void)_this;
}
void DetectResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DetectResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DetectResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:Detect.DetectResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rect_.Clear();
  status_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DetectResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Detect.BoxRect rect = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rect(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* DetectResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Detect.DetectResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_status(), target);
  }

  // repeated .Detect.BoxRect rect = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rect_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_rect(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Detect.DetectResponse)
  return target;
}

size_t DetectResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Detect.DetectResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Detect.BoxRect rect = 2;
  total_size += 1UL * this->_internal_rect_size();
  for (const auto& msg : this->rect_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // bool status = 1;
  if (this->_internal_status() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DetectResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    DetectResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DetectResponse::GetClassData() const { return &_class_data_; }

void DetectResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<DetectResponse *>(to)->MergeFrom(
      static_cast<const DetectResponse &>(from));
}


void DetectResponse::MergeFrom(const DetectResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Detect.DetectResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  rect_.MergeFrom(from.rect_);
  if (from._internal_status() != 0) {
    _internal_set_status(from._internal_status());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DetectResponse::CopyFrom(const DetectResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Detect.DetectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectResponse::IsInitialized() const {
  return true;
}

void DetectResponse::InternalSwap(DetectResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  rect_.InternalSwap(&other->rect_);
  swap(status_, other->status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DetectResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_detect_2eproto_getter, &descriptor_table_detect_2eproto_once,
      file_level_metadata_detect_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Detect
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Detect::BoxRect* Arena::CreateMaybeMessage< ::Detect::BoxRect >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Detect::BoxRect >(arena);
}
template<> PROTOBUF_NOINLINE ::Detect::DetectRequest* Arena::CreateMaybeMessage< ::Detect::DetectRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Detect::DetectRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::Detect::DetectResponse* Arena::CreateMaybeMessage< ::Detect::DetectResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Detect::DetectResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>