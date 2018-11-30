proto_library(
    name = "proto",
    srcs = glob(["*.proto"]),
    deps = ["//addressbook:proto"],
    visibility = ["//visibility:public"]
)


load("@build_stack_rules_proto//cpp:cpp_grpc_library.bzl", "cpp_grpc_library")

cpp_grpc_library(
    name = "webservice_contract",
    deps = [":proto"],
    visibility= [
        "//webservice_server:__pkg__",
        "//webservice_client:__pkg__"
    ]
)
