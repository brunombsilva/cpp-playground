proto_library(
    name = "proto",
    srcs = glob(["*.proto"]),
    deps = ["//addressbook:proto"]
)


load("@build_stack_rules_proto//cpp:cpp_grpc_library.bzl", "cpp_grpc_library")

cpp_grpc_library(
    name = "webservice-contract",
    deps = [":proto"],
    visibility= [
        "//webservice-server:__pkg__",
        "//webservice-client:__pkg__"
    ]
)