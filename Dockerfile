FROM debian:stable-slim as dependencies

ARG BAZEL_VERSION=0.19.2
ARG BAZEL_INSTALLER=bazel-$BAZEL_VERSION-installer-linux-x86_64.sh
ARG BAZEL_CHECKSUM=42ba631103011594cdf5591ef07658a9e9a5d73c5ee98a9f09651ac4ac535d8c

WORKDIR /tmp

RUN apt-get update && apt-get -y install wget unzip git g++ python
RUN wget https://github.com/bazelbuild/bazel/releases/download/$BAZEL_VERSION/$BAZEL_INSTALLER -O $BAZEL_INSTALLER && \
    echo "$BAZEL_CHECKSUM $BAZEL_INSTALLER" | sha256sum --check && \
    chmod +x $BAZEL_INSTALLER
RUN ./$BAZEL_INSTALLER

WORKDIR /workdir

ADD WORKSPACE .

# Building heavy dutty dependencies beforehand
RUN bazel build @com_github_grpc_grpc//:grpc++

ADD . .

ARG PROJECT=webservice_server

RUN bazel build $PROJECT
RUN cp -Lr /workdir/bazel-bin /build

FROM debian:stable-slim as runtime
ARG PROJECT=webservice_server
WORKDIR /app
COPY --from=dependencies /build/$PROJECT/ /app/
RUN ln -s $PROJECT run
CMD ["./run"]
