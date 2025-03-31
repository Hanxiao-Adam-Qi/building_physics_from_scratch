cmake_minimum_required(VERSION 3.10)
project(building_physics_from_scratch)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(include)

# 指定源文件
file(GLOB SOURCES "src/*.cpp")

# 添加可执行文件
add_executable(main ${SOURCES})
