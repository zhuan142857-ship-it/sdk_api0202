cmake_minimum_required(VERSION 3.10)
project(sdk_api_example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

# 生成动态链接库
add_library(sdk_api_lib SHARED src/sdk.cpp)
target_compile_definitions(sdk_api_lib PRIVATE SDK_API_LIB_EXPORTS)

# 主程序链接动态链接库
add_executable(sdk_api_example src/main.cpp)
target_link_libraries(sdk_api_example PRIVATE sdk_api_lib)
