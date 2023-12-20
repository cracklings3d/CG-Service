cmake_minimum_required(VERSION 3.27)

project(cg_service)

set(CMAKE_CXX_STANDARD 23)

# vcpkg integration
set(VCPKG_ROOT "E:/vcpkg" CACHE PATH "Vcpkg root directory")
set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
include(${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake)

add_subdirectory(src)
add_subdirectory(protocol)
