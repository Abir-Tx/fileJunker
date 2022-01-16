cmake_minimum_required(VERSION 3.22)
project(fileJunker VERSION 1.0.0)

message("Build system for fileJunker")
message("-----------------------------------")

add_subdirectory(libfj)
include_directories(libfj/include)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)
add_executable(fileJunker fileJunker.cpp)

target_link_libraries(fileJunker libfj)

