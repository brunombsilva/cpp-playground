proto_library(
    name = "models_proto",
    srcs = glob(["*.proto"])
)

cc_proto_library(
    name = "models",
    deps = [":models_proto"],
    visibility= ["//sketch:__pkg__"]
)