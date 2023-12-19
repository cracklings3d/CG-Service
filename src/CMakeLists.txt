cmake_minimum_required(VERSION 3.27)

add_executable(cg_service main.cpp
        Cgs_server.cpp
        Cgs_server.h)

find_package(gRPC CONFIG REQUIRED)
find_package(Protobuf CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE gRPC::grpc++_reflection gRPC::grpc++ protobuf::libprotobuf protobuf::libprotoc)
target_include_directories(${PROJECT_NAME} PRIVATE ${Protobuf_INCLUDE_DIRS})
