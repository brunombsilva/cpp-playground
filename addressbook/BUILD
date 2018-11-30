proto_library(
    name = "proto",
    srcs = glob(["*.proto"]),
    visibility= ["//webservice_contract:__pkg__"]
)

cc_proto_library(
    name = "models",
    deps = [":proto"],
    visibility= ["//sketch:__pkg__"]
)
