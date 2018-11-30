import grpc
from webservice_contract.helloworld_pb2_grpc import GreeterStub
from webservice_contract.helloworld_pb2 import HelloRequest

channel = grpc.insecure_channel('localhost:50051')
with grpc.insecure_channel('localhost:50051') as channel:
    stub = GreeterStub(channel)
    request = HelloRequest(name="Python")
    response = stub.SayHello(request)
    print(response)