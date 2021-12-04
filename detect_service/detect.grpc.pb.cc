// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: detect.proto

#include "detect.pb.h"
#include "detect.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace Detect {

static const char* DetectResultService_method_names[] = {
  "/Detect.DetectResultService/DetectedRect",
};

std::unique_ptr< DetectResultService::Stub> DetectResultService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DetectResultService::Stub> stub(new DetectResultService::Stub(channel, options));
  return stub;
}

DetectResultService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_DetectedRect_(DetectResultService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DetectResultService::Stub::DetectedRect(::grpc::ClientContext* context, const ::Detect::DetectRequest& request, ::Detect::DetectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Detect::DetectRequest, ::Detect::DetectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DetectedRect_, context, request, response);
}

void DetectResultService::Stub::async::DetectedRect(::grpc::ClientContext* context, const ::Detect::DetectRequest* request, ::Detect::DetectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Detect::DetectRequest, ::Detect::DetectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DetectedRect_, context, request, response, std::move(f));
}

void DetectResultService::Stub::async::DetectedRect(::grpc::ClientContext* context, const ::Detect::DetectRequest* request, ::Detect::DetectResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DetectedRect_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Detect::DetectResponse>* DetectResultService::Stub::PrepareAsyncDetectedRectRaw(::grpc::ClientContext* context, const ::Detect::DetectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Detect::DetectResponse, ::Detect::DetectRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DetectedRect_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Detect::DetectResponse>* DetectResultService::Stub::AsyncDetectedRectRaw(::grpc::ClientContext* context, const ::Detect::DetectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDetectedRectRaw(context, request, cq);
  result->StartCall();
  return result;
}

DetectResultService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DetectResultService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DetectResultService::Service, ::Detect::DetectRequest, ::Detect::DetectResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](DetectResultService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Detect::DetectRequest* req,
             ::Detect::DetectResponse* resp) {
               return service->DetectedRect(ctx, req, resp);
             }, this)));
}

DetectResultService::Service::~Service() {
}

::grpc::Status DetectResultService::Service::DetectedRect(::grpc::ServerContext* context, const ::Detect::DetectRequest* request, ::Detect::DetectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Detect
