// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: service.proto
#ifndef GRPC_service_2eproto__INCLUDED
#define GRPC_service_2eproto__INCLUDED

#include "service.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace cgs {

class Point_set_service final {
 public:
  static constexpr char const* service_full_name() {
    return "cgs.Point_set_service";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::cgs::Point_set* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_set>> AsyncGetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_set>>(AsyncGetPointSetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_set>> PrepareAsyncGetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_set>>(PrepareAsyncGetPointSetRaw(context, request, cq));
    }
    virtual ::grpc::Status GetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::cgs::Point_attribute* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_attribute>> AsyncGetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_attribute>>(AsyncGetPointAttributeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_attribute>> PrepareAsyncGetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_attribute>>(PrepareAsyncGetPointAttributeRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void GetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query* request, ::cgs::Point_set* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query* request, ::cgs::Point_set* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void GetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query* request, ::cgs::Point_attribute* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query* request, ::cgs::Point_attribute* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_set>* AsyncGetPointSetRaw(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_set>* PrepareAsyncGetPointSetRaw(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_attribute>* AsyncGetPointAttributeRaw(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cgs::Point_attribute>* PrepareAsyncGetPointAttributeRaw(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::cgs::Point_set* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_set>> AsyncGetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_set>>(AsyncGetPointSetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_set>> PrepareAsyncGetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_set>>(PrepareAsyncGetPointSetRaw(context, request, cq));
    }
    ::grpc::Status GetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::cgs::Point_attribute* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_attribute>> AsyncGetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_attribute>>(AsyncGetPointAttributeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_attribute>> PrepareAsyncGetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cgs::Point_attribute>>(PrepareAsyncGetPointAttributeRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query* request, ::cgs::Point_set* response, std::function<void(::grpc::Status)>) override;
      void GetPointSet(::grpc::ClientContext* context, const ::cgs::Point_set_query* request, ::cgs::Point_set* response, ::grpc::ClientUnaryReactor* reactor) override;
      void GetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query* request, ::cgs::Point_attribute* response, std::function<void(::grpc::Status)>) override;
      void GetPointAttribute(::grpc::ClientContext* context, const ::cgs::Point_attribute_query* request, ::cgs::Point_attribute* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::cgs::Point_set>* AsyncGetPointSetRaw(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::cgs::Point_set>* PrepareAsyncGetPointSetRaw(::grpc::ClientContext* context, const ::cgs::Point_set_query& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::cgs::Point_attribute>* AsyncGetPointAttributeRaw(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::cgs::Point_attribute>* PrepareAsyncGetPointAttributeRaw(::grpc::ClientContext* context, const ::cgs::Point_attribute_query& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetPointSet_;
    const ::grpc::internal::RpcMethod rpcmethod_GetPointAttribute_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetPointSet(::grpc::ServerContext* context, const ::cgs::Point_set_query* request, ::cgs::Point_set* response);
    virtual ::grpc::Status GetPointAttribute(::grpc::ServerContext* context, const ::cgs::Point_attribute_query* request, ::cgs::Point_attribute* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetPointSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetPointSet() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetPointSet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointSet(::grpc::ServerContext* /*context*/, const ::cgs::Point_set_query* /*request*/, ::cgs::Point_set* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetPointSet(::grpc::ServerContext* context, ::cgs::Point_set_query* request, ::grpc::ServerAsyncResponseWriter< ::cgs::Point_set>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetPointAttribute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetPointAttribute() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetPointAttribute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointAttribute(::grpc::ServerContext* /*context*/, const ::cgs::Point_attribute_query* /*request*/, ::cgs::Point_attribute* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetPointAttribute(::grpc::ServerContext* context, ::cgs::Point_attribute_query* request, ::grpc::ServerAsyncResponseWriter< ::cgs::Point_attribute>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetPointSet<WithAsyncMethod_GetPointAttribute<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetPointSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetPointSet() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::cgs::Point_set_query, ::cgs::Point_set>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::cgs::Point_set_query* request, ::cgs::Point_set* response) { return this->GetPointSet(context, request, response); }));}
    void SetMessageAllocatorFor_GetPointSet(
        ::grpc::MessageAllocator< ::cgs::Point_set_query, ::cgs::Point_set>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::cgs::Point_set_query, ::cgs::Point_set>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetPointSet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointSet(::grpc::ServerContext* /*context*/, const ::cgs::Point_set_query* /*request*/, ::cgs::Point_set* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetPointSet(
      ::grpc::CallbackServerContext* /*context*/, const ::cgs::Point_set_query* /*request*/, ::cgs::Point_set* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_GetPointAttribute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetPointAttribute() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::cgs::Point_attribute_query, ::cgs::Point_attribute>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::cgs::Point_attribute_query* request, ::cgs::Point_attribute* response) { return this->GetPointAttribute(context, request, response); }));}
    void SetMessageAllocatorFor_GetPointAttribute(
        ::grpc::MessageAllocator< ::cgs::Point_attribute_query, ::cgs::Point_attribute>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::cgs::Point_attribute_query, ::cgs::Point_attribute>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetPointAttribute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointAttribute(::grpc::ServerContext* /*context*/, const ::cgs::Point_attribute_query* /*request*/, ::cgs::Point_attribute* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetPointAttribute(
      ::grpc::CallbackServerContext* /*context*/, const ::cgs::Point_attribute_query* /*request*/, ::cgs::Point_attribute* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetPointSet<WithCallbackMethod_GetPointAttribute<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetPointSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetPointSet() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetPointSet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointSet(::grpc::ServerContext* /*context*/, const ::cgs::Point_set_query* /*request*/, ::cgs::Point_set* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetPointAttribute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetPointAttribute() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetPointAttribute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointAttribute(::grpc::ServerContext* /*context*/, const ::cgs::Point_attribute_query* /*request*/, ::cgs::Point_attribute* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetPointSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetPointSet() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetPointSet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointSet(::grpc::ServerContext* /*context*/, const ::cgs::Point_set_query* /*request*/, ::cgs::Point_set* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetPointSet(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetPointAttribute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetPointAttribute() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetPointAttribute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointAttribute(::grpc::ServerContext* /*context*/, const ::cgs::Point_attribute_query* /*request*/, ::cgs::Point_attribute* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetPointAttribute(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetPointSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetPointSet() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetPointSet(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetPointSet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointSet(::grpc::ServerContext* /*context*/, const ::cgs::Point_set_query* /*request*/, ::cgs::Point_set* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetPointSet(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetPointAttribute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetPointAttribute() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetPointAttribute(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetPointAttribute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPointAttribute(::grpc::ServerContext* /*context*/, const ::cgs::Point_attribute_query* /*request*/, ::cgs::Point_attribute* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetPointAttribute(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetPointSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetPointSet() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::cgs::Point_set_query, ::cgs::Point_set>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::cgs::Point_set_query, ::cgs::Point_set>* streamer) {
                       return this->StreamedGetPointSet(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetPointSet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetPointSet(::grpc::ServerContext* /*context*/, const ::cgs::Point_set_query* /*request*/, ::cgs::Point_set* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetPointSet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::cgs::Point_set_query,::cgs::Point_set>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetPointAttribute : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetPointAttribute() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::cgs::Point_attribute_query, ::cgs::Point_attribute>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::cgs::Point_attribute_query, ::cgs::Point_attribute>* streamer) {
                       return this->StreamedGetPointAttribute(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetPointAttribute() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetPointAttribute(::grpc::ServerContext* /*context*/, const ::cgs::Point_attribute_query* /*request*/, ::cgs::Point_attribute* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetPointAttribute(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::cgs::Point_attribute_query,::cgs::Point_attribute>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetPointSet<WithStreamedUnaryMethod_GetPointAttribute<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetPointSet<WithStreamedUnaryMethod_GetPointAttribute<Service > > StreamedService;
};

}  // namespace cgs


#endif  // GRPC_service_2eproto__INCLUDED
