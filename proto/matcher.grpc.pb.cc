// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: matcher.proto

#include "matcher.pb.h"
#include "matcher.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace proto {

static const char* MatcherProto_method_names[] = {
  "/proto.MatcherProto/GetOrderBook",
  "/proto.MatcherProto/GetBestBidPrice",
  "/proto.MatcherProto/GetBestAskPrice",
  "/proto.MatcherProto/GetSpread",
  "/proto.MatcherProto/Lookup",
  "/proto.MatcherProto/Execute",
  "/proto.MatcherProto/Cancel",
};

std::unique_ptr< MatcherProto::Stub> MatcherProto::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MatcherProto::Stub> stub(new MatcherProto::Stub(channel));
  return stub;
}

MatcherProto::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetOrderBook_(MatcherProto_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetBestBidPrice_(MatcherProto_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBestAskPrice_(MatcherProto_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSpread_(MatcherProto_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Lookup_(MatcherProto_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Execute_(MatcherProto_method_names[5], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Cancel_(MatcherProto_method_names[6], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::proto::OrderBookProto>* MatcherProto::Stub::GetOrderBookRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request) {
  return ::grpc::internal::ClientReaderFactory< ::proto::OrderBookProto>::Create(channel_.get(), rpcmethod_GetOrderBook_, context, request);
}

::grpc::ClientAsyncReader< ::proto::OrderBookProto>* MatcherProto::Stub::AsyncGetOrderBookRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::OrderBookProto>::Create(channel_.get(), cq, rpcmethod_GetOrderBook_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::proto::OrderBookProto>* MatcherProto::Stub::PrepareAsyncGetOrderBookRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::OrderBookProto>::Create(channel_.get(), cq, rpcmethod_GetOrderBook_, context, request, false, nullptr);
}

::grpc::Status MatcherProto::Stub::GetBestBidPrice(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::proto::PricePointProto* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBestBidPrice_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::proto::PricePointProto>* MatcherProto::Stub::AsyncGetBestBidPriceRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::PricePointProto>::Create(channel_.get(), cq, rpcmethod_GetBestBidPrice_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::proto::PricePointProto>* MatcherProto::Stub::PrepareAsyncGetBestBidPriceRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::PricePointProto>::Create(channel_.get(), cq, rpcmethod_GetBestBidPrice_, context, request, false);
}

::grpc::Status MatcherProto::Stub::GetBestAskPrice(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::proto::PricePointProto* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBestAskPrice_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::proto::PricePointProto>* MatcherProto::Stub::AsyncGetBestAskPriceRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::PricePointProto>::Create(channel_.get(), cq, rpcmethod_GetBestAskPrice_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::proto::PricePointProto>* MatcherProto::Stub::PrepareAsyncGetBestAskPriceRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::PricePointProto>::Create(channel_.get(), cq, rpcmethod_GetBestAskPrice_, context, request, false);
}

::grpc::Status MatcherProto::Stub::GetSpread(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::proto::SpreadProto* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSpread_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::proto::SpreadProto>* MatcherProto::Stub::AsyncGetSpreadRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::SpreadProto>::Create(channel_.get(), cq, rpcmethod_GetSpread_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::proto::SpreadProto>* MatcherProto::Stub::PrepareAsyncGetSpreadRaw(::grpc::ClientContext* context, const ::proto::MarketRequestProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::SpreadProto>::Create(channel_.get(), cq, rpcmethod_GetSpread_, context, request, false);
}

::grpc::Status MatcherProto::Stub::Lookup(::grpc::ClientContext* context, const ::proto::UUID& request, ::proto::OrderProto* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Lookup_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::proto::OrderProto>* MatcherProto::Stub::AsyncLookupRaw(::grpc::ClientContext* context, const ::proto::UUID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::OrderProto>::Create(channel_.get(), cq, rpcmethod_Lookup_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::proto::OrderProto>* MatcherProto::Stub::PrepareAsyncLookupRaw(::grpc::ClientContext* context, const ::proto::UUID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::proto::OrderProto>::Create(channel_.get(), cq, rpcmethod_Lookup_, context, request, false);
}

::grpc::ClientReader< ::proto::OrderProto>* MatcherProto::Stub::ExecuteRaw(::grpc::ClientContext* context, const ::proto::OrderProto& request) {
  return ::grpc::internal::ClientReaderFactory< ::proto::OrderProto>::Create(channel_.get(), rpcmethod_Execute_, context, request);
}

::grpc::ClientAsyncReader< ::proto::OrderProto>* MatcherProto::Stub::AsyncExecuteRaw(::grpc::ClientContext* context, const ::proto::OrderProto& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::OrderProto>::Create(channel_.get(), cq, rpcmethod_Execute_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::proto::OrderProto>* MatcherProto::Stub::PrepareAsyncExecuteRaw(::grpc::ClientContext* context, const ::proto::OrderProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::OrderProto>::Create(channel_.get(), cq, rpcmethod_Execute_, context, request, false, nullptr);
}

::grpc::ClientReader< ::proto::OrderProto>* MatcherProto::Stub::CancelRaw(::grpc::ClientContext* context, const ::proto::OrderProto& request) {
  return ::grpc::internal::ClientReaderFactory< ::proto::OrderProto>::Create(channel_.get(), rpcmethod_Cancel_, context, request);
}

::grpc::ClientAsyncReader< ::proto::OrderProto>* MatcherProto::Stub::AsyncCancelRaw(::grpc::ClientContext* context, const ::proto::OrderProto& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::OrderProto>::Create(channel_.get(), cq, rpcmethod_Cancel_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::proto::OrderProto>* MatcherProto::Stub::PrepareAsyncCancelRaw(::grpc::ClientContext* context, const ::proto::OrderProto& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::proto::OrderProto>::Create(channel_.get(), cq, rpcmethod_Cancel_, context, request, false, nullptr);
}

MatcherProto::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatcherProto_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MatcherProto::Service, ::proto::MarketRequestProto, ::proto::OrderBookProto>(
          std::mem_fn(&MatcherProto::Service::GetOrderBook), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatcherProto_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MatcherProto::Service, ::proto::MarketRequestProto, ::proto::PricePointProto>(
          std::mem_fn(&MatcherProto::Service::GetBestBidPrice), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatcherProto_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MatcherProto::Service, ::proto::MarketRequestProto, ::proto::PricePointProto>(
          std::mem_fn(&MatcherProto::Service::GetBestAskPrice), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatcherProto_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MatcherProto::Service, ::proto::MarketRequestProto, ::proto::SpreadProto>(
          std::mem_fn(&MatcherProto::Service::GetSpread), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatcherProto_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MatcherProto::Service, ::proto::UUID, ::proto::OrderProto>(
          std::mem_fn(&MatcherProto::Service::Lookup), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatcherProto_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MatcherProto::Service, ::proto::OrderProto, ::proto::OrderProto>(
          std::mem_fn(&MatcherProto::Service::Execute), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatcherProto_method_names[6],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MatcherProto::Service, ::proto::OrderProto, ::proto::OrderProto>(
          std::mem_fn(&MatcherProto::Service::Cancel), this)));
}

MatcherProto::Service::~Service() {
}

::grpc::Status MatcherProto::Service::GetOrderBook(::grpc::ServerContext* context, const ::proto::MarketRequestProto* request, ::grpc::ServerWriter< ::proto::OrderBookProto>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MatcherProto::Service::GetBestBidPrice(::grpc::ServerContext* context, const ::proto::MarketRequestProto* request, ::proto::PricePointProto* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MatcherProto::Service::GetBestAskPrice(::grpc::ServerContext* context, const ::proto::MarketRequestProto* request, ::proto::PricePointProto* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MatcherProto::Service::GetSpread(::grpc::ServerContext* context, const ::proto::MarketRequestProto* request, ::proto::SpreadProto* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MatcherProto::Service::Lookup(::grpc::ServerContext* context, const ::proto::UUID* request, ::proto::OrderProto* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MatcherProto::Service::Execute(::grpc::ServerContext* context, const ::proto::OrderProto* request, ::grpc::ServerWriter< ::proto::OrderProto>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MatcherProto::Service::Cancel(::grpc::ServerContext* context, const ::proto::OrderProto* request, ::grpc::ServerWriter< ::proto::OrderProto>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace proto
