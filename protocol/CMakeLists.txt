cmake_minimum_required(VERSION 3.27)

find_package(gRPC CONFIG REQUIRED)
find_package(Protobuf CONFIG REQUIRED)


# execute protoc on the service.proto file, and print result
set(PROTO_FILE "${CMAKE_CURRENT_SOURCE_DIR}/service.proto")
set(PROTO_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
set(Protobuf_GRPC_CPP_PLUGIN ${VCPKG_ROOT}/installed/x64-windows/tools/grpc/grpc_cpp_plugin.exe)

# if paths don't exist, create
if (NOT EXISTS "${PROTO_PATH}")
    file(MAKE_DIRECTORY "${PROTO_PATH}")
endif ()

set(GENERATED_PROTOBUF_PATH "${CMAKE_CURRENT_SOURCE_DIR}/generated")

if (NOT EXISTS "${GENERATED_PROTOBUF_PATH}")
    file(MAKE_DIRECTORY "${GENERATED_PROTOBUF_PATH}")
endif ()

set(GENERATED_PROTOBUF_FILES
        "${GENERATED_PROTOBUF_PATH}/service.pb.cc"
        "${GENERATED_PROTOBUF_PATH}/service.pb.h"
        "${GENERATED_PROTOBUF_PATH}/service.grpc.pb.cc"
        "${GENERATED_PROTOBUF_PATH}/service.grpc.pb.h")
message(STATUS "Running:
    ${Protobuf_PROTOC_EXECUTABLE}
        --cpp_out=${GENERATED_PROTOBUF_PATH}
        --grpc_out=${GENERATED_PROTOBUF_PATH}
        --plugin=protoc-gen-grpc=${Protobuf_GRPC_CPP_PLUGIN}
        -I ${PROTO_PATH} ${PROTO_FILE}")

execute_process(COMMAND ${Protobuf_PROTOC_EXECUTABLE}
        --cpp_out=${GENERATED_PROTOBUF_PATH} --grpc_out=${GENERATED_PROTOBUF_PATH} --plugin=protoc-gen-grpc=${Protobuf_GRPC_CPP_PLUGIN}
        -I ${PROTO_PATH} ${PROTO_FILE})
