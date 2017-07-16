// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: chatserver.proto
#ifndef GRPC_chatserver_2eproto__INCLUDED
#define GRPC_chatserver_2eproto__INCLUDED

#include "chatserver.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace chatserver {

class ChatServer GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status LogIn(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::chatserver::LogInReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::LogInReply>> AsyncLogIn(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::LogInReply>>(AsyncLogInRaw(context, request, cq));
    }
    virtual ::grpc::Status LogOut(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::chatserver::LogOutReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::LogOutReply>> AsyncLogOut(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::LogOutReply>>(AsyncLogOutRaw(context, request, cq));
    }
    virtual ::grpc::Status SendMessage(::grpc::ClientContext* context, const ::chatserver::SendMessageRequest& request, ::chatserver::SendMessageReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::SendMessageReply>> AsyncSendMessage(::grpc::ClientContext* context, const ::chatserver::SendMessageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::SendMessageReply>>(AsyncSendMessageRaw(context, request, cq));
    }
    virtual ::grpc::Status ReceiveMessage(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::chatserver::ReceiveMessageReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::ReceiveMessageReply>> AsyncReceiveMessage(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::ReceiveMessageReply>>(AsyncReceiveMessageRaw(context, request, cq));
    }
    virtual ::grpc::Status List(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::chatserver::ListReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::ListReply>> AsyncList(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::ListReply>>(AsyncListRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::chatserver::ChatMessage, ::chatserver::ChatMessage>> Chat(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::chatserver::ChatMessage, ::chatserver::ChatMessage>>(ChatRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::chatserver::ChatMessage, ::chatserver::ChatMessage>> AsyncChat(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::chatserver::ChatMessage, ::chatserver::ChatMessage>>(AsyncChatRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::LogInReply>* AsyncLogInRaw(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::LogOutReply>* AsyncLogOutRaw(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::SendMessageReply>* AsyncSendMessageRaw(::grpc::ClientContext* context, const ::chatserver::SendMessageRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::ReceiveMessageReply>* AsyncReceiveMessageRaw(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chatserver::ListReply>* AsyncListRaw(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* ChatRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* AsyncChatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status LogIn(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::chatserver::LogInReply* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::LogInReply>> AsyncLogIn(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::LogInReply>>(AsyncLogInRaw(context, request, cq));
    }
    ::grpc::Status LogOut(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::chatserver::LogOutReply* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::LogOutReply>> AsyncLogOut(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::LogOutReply>>(AsyncLogOutRaw(context, request, cq));
    }
    ::grpc::Status SendMessage(::grpc::ClientContext* context, const ::chatserver::SendMessageRequest& request, ::chatserver::SendMessageReply* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::SendMessageReply>> AsyncSendMessage(::grpc::ClientContext* context, const ::chatserver::SendMessageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::SendMessageReply>>(AsyncSendMessageRaw(context, request, cq));
    }
    ::grpc::Status ReceiveMessage(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::chatserver::ReceiveMessageReply* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::ReceiveMessageReply>> AsyncReceiveMessage(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::ReceiveMessageReply>>(AsyncReceiveMessageRaw(context, request, cq));
    }
    ::grpc::Status List(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::chatserver::ListReply* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::ListReply>> AsyncList(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chatserver::ListReply>>(AsyncListRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>> Chat(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>>(ChatRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>> AsyncChat(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>>(AsyncChatRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::chatserver::LogInReply>* AsyncLogInRaw(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::chatserver::LogOutReply>* AsyncLogOutRaw(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::chatserver::SendMessageReply>* AsyncSendMessageRaw(::grpc::ClientContext* context, const ::chatserver::SendMessageRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::chatserver::ReceiveMessageReply>* AsyncReceiveMessageRaw(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::chatserver::ListReply>* AsyncListRaw(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* ChatRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* AsyncChatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_LogIn_;
    const ::grpc::RpcMethod rpcmethod_LogOut_;
    const ::grpc::RpcMethod rpcmethod_SendMessage_;
    const ::grpc::RpcMethod rpcmethod_ReceiveMessage_;
    const ::grpc::RpcMethod rpcmethod_List_;
    const ::grpc::RpcMethod rpcmethod_Chat_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status LogIn(::grpc::ServerContext* context, const ::chatserver::LogInRequest* request, ::chatserver::LogInReply* response);
    virtual ::grpc::Status LogOut(::grpc::ServerContext* context, const ::chatserver::LogOutRequest* request, ::chatserver::LogOutReply* response);
    virtual ::grpc::Status SendMessage(::grpc::ServerContext* context, const ::chatserver::SendMessageRequest* request, ::chatserver::SendMessageReply* response);
    virtual ::grpc::Status ReceiveMessage(::grpc::ServerContext* context, const ::chatserver::ReceiveMessageRequest* request, ::chatserver::ReceiveMessageReply* response);
    virtual ::grpc::Status List(::grpc::ServerContext* context, const ::chatserver::ListRequest* request, ::chatserver::ListReply* response);
    virtual ::grpc::Status Chat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_LogIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_LogIn() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_LogIn() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LogIn(::grpc::ServerContext* context, const ::chatserver::LogInRequest* request, ::chatserver::LogInReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLogIn(::grpc::ServerContext* context, ::chatserver::LogInRequest* request, ::grpc::ServerAsyncResponseWriter< ::chatserver::LogInReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_LogOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_LogOut() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_LogOut() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LogOut(::grpc::ServerContext* context, const ::chatserver::LogOutRequest* request, ::chatserver::LogOutReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLogOut(::grpc::ServerContext* context, ::chatserver::LogOutRequest* request, ::grpc::ServerAsyncResponseWriter< ::chatserver::LogOutReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SendMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SendMessage() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_SendMessage() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendMessage(::grpc::ServerContext* context, const ::chatserver::SendMessageRequest* request, ::chatserver::SendMessageReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendMessage(::grpc::ServerContext* context, ::chatserver::SendMessageRequest* request, ::grpc::ServerAsyncResponseWriter< ::chatserver::SendMessageReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ReceiveMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReceiveMessage() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_ReceiveMessage() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReceiveMessage(::grpc::ServerContext* context, const ::chatserver::ReceiveMessageRequest* request, ::chatserver::ReceiveMessageReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReceiveMessage(::grpc::ServerContext* context, ::chatserver::ReceiveMessageRequest* request, ::grpc::ServerAsyncResponseWriter< ::chatserver::ReceiveMessageReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_List : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_List() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_List() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status List(::grpc::ServerContext* context, const ::chatserver::ListRequest* request, ::chatserver::ListReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestList(::grpc::ServerContext* context, ::chatserver::ListRequest* request, ::grpc::ServerAsyncResponseWriter< ::chatserver::ListReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Chat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Chat() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_Chat() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Chat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestChat(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(5, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_LogIn<WithAsyncMethod_LogOut<WithAsyncMethod_SendMessage<WithAsyncMethod_ReceiveMessage<WithAsyncMethod_List<WithAsyncMethod_Chat<Service > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_LogIn : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_LogIn() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_LogIn() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LogIn(::grpc::ServerContext* context, const ::chatserver::LogInRequest* request, ::chatserver::LogInReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_LogOut : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_LogOut() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_LogOut() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LogOut(::grpc::ServerContext* context, const ::chatserver::LogOutRequest* request, ::chatserver::LogOutReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SendMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SendMessage() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_SendMessage() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendMessage(::grpc::ServerContext* context, const ::chatserver::SendMessageRequest* request, ::chatserver::SendMessageReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ReceiveMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReceiveMessage() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_ReceiveMessage() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReceiveMessage(::grpc::ServerContext* context, const ::chatserver::ReceiveMessageRequest* request, ::chatserver::ReceiveMessageReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_List : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_List() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_List() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status List(::grpc::ServerContext* context, const ::chatserver::ListRequest* request, ::chatserver::ListReply* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Chat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Chat() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_Chat() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Chat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace chatserver


#endif  // GRPC_chatserver_2eproto__INCLUDED
