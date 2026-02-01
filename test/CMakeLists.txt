cmake_minimum_required(VERSION 3.10)
project(test_sdk_api)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含API头文件目录
include_directories(../include)

# 链接静态库
add_executable(test_sdk_api test.cpp)
target_link_libraries(test_sdk_api PRIVATE ../../build/Release/sdk_api_lib)
