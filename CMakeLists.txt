cmake_minimum_required(VERSION 3.12)

set(CXX_STANDARD 20)

project(quadcopter-simulator)

include_directories(
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/include 
)

file(GLOB all_SRCS
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
    "${PROJECT_SOURCE_DIR}/include/*.h"
)

add_executable(result ${all_SRCS})