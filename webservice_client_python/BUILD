
load(
  "@io_bazel_rules_python//python:python.bzl",
  "py_binary", "py_library", "py_test",
)

load("@my_deps//:requirements.bzl", "requirement")

load("@build_stack_rules_proto//python:python_grpc_library.bzl", "python_grpc_library")

python_grpc_library(
    name = "grpc_python",
    deps = ["//webservice_contract:proto"],
    transitive = False,
    has_services = True
)

py_binary(
  name = "webservice_client_python",
  srcs = glob(["*.py"]),
  main = "client.py",
  deps = [
    ":grpc_python",
    requirement("grpcio-tools"),
    requirement("googleapis-common-protos"),
    ]
)