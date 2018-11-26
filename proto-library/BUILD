cc_library(
    name="proto-library",
    deps= [':addressbook_cc_proto'],
    visibility= ["//visibility:public"]
)

proto_library(
    name = "addressbook_proto",
    srcs = ["addressbook.proto"]
)

cc_proto_library(
    name = "addressbook_cc_proto",
    deps = [":addressbook_proto"],
    visibility= ["//visibility:public"]
)