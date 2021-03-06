// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: EmployeeService.proto

#include "EmployeeService.pb.h"
#include "EmployeeService.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>
namespace HyperNovaLabs {
namespace Api {
namespace Protos {
namespace Services {

class MockEmployeeServiceStub : public EmployeeService::StubInterface {
 public:
  MOCK_METHOD3(ListEmployee, ::grpc::Status(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::HyperNovaLabs::Api::Protos::Services::ListEmployeeResponse* response));
  MOCK_METHOD3(AsyncListEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::ListEmployeeResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncListEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::ListEmployeeResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetEmployee, ::grpc::Status(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::GetEmployeeRequest& request, ::HyperNovaLabs::Api::Protos::Models::Employee* response));
  MOCK_METHOD3(AsyncGetEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Models::Employee>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::GetEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Models::Employee>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::GetEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(CreateEmployee, ::grpc::Status(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::CreateEmployeeRequest& request, ::HyperNovaLabs::Api::Protos::Services::CreateEmployeeResponse* response));
  MOCK_METHOD3(AsyncCreateEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::CreateEmployeeResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::CreateEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::CreateEmployeeResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::CreateEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateEmployee, ::grpc::Status(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::UpdateEmployeeRequest& request, ::HyperNovaLabs::Api::Protos::Services::UpdateEmployeeResponse* response));
  MOCK_METHOD3(AsyncUpdateEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::UpdateEmployeeResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::UpdateEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::UpdateEmployeeResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::UpdateEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(DeleteEmployee, ::grpc::Status(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::DeleteEmployeeRequest& request, ::HyperNovaLabs::Api::Protos::Services::DeleteEmployeeResponse* response));
  MOCK_METHOD3(AsyncDeleteEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::DeleteEmployeeResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::DeleteEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncDeleteEmployeeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::DeleteEmployeeResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::DeleteEmployeeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(ListOfAnEmployeeBills, ::grpc::Status(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::ListOfAnEmployeesBillRequest& request, ::HyperNovaLabs::Api::Protos::Services::ListOfAnEmployeesBillResponse* response));
  MOCK_METHOD3(AsyncListOfAnEmployeeBillsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::ListOfAnEmployeesBillResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::ListOfAnEmployeesBillRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncListOfAnEmployeeBillsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::HyperNovaLabs::Api::Protos::Services::ListOfAnEmployeesBillResponse>*(::grpc::ClientContext* context, const ::HyperNovaLabs::Api::Protos::Services::ListOfAnEmployeesBillRequest& request, ::grpc::CompletionQueue* cq));
};

} // namespace HyperNovaLabs
} // namespace Api
} // namespace Protos
} // namespace Services

