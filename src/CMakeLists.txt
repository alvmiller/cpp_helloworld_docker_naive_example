cmake_minimum_required(VERSION 3.10)
project(helloworld)

set(CMAKE_CXX_STANDARD 17)
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(helloworld main.cpp)
