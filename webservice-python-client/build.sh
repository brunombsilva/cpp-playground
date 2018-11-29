#!/usr/bin/env bash

python -m grpc_tools.protoc \
    -I.. \
    --python_out=.  --grpc_python_out=. \
    ../webservice-contract/helloworld.proto \
    ../addressbook/*.proto