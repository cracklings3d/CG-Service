cmake_minimum_required(VERSION 3.27)

# use generated proto files
set(PROTO_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../protocol/generated)

# find all proto files
file(GLOB_RECURSE PROTO_FILES ${PROTO_SRC_DIR}/*.h ${PROTO_SRC_DIR}/*.cc)

string(REPLACE ";" "\n    " PROTO_FILES_HUMAN "${PROTO_FILES}")
message(STATUS "PROTO_FILES:\n    ${PROTO_FILES_HUMAN}")


add_executable(cg_service main.cpp
        Cgs_server.cpp
        Cgs_server.h
        ${PROTO_FILES}
)

find_package(gRPC CONFIG REQUIRED)
find_package(Protobuf CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE gRPC::grpc++_reflection gRPC::grpc++ protobuf::libprotobuf protobuf::libprotoc)
target_include_directories(${PROJECT_NAME} PRIVATE ${Protobuf_INCLUDE_DIRS})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROTO_SRC_DIR})

