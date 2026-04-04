cmake_minimum_required(VERSION 4.0)
project(3CMakePractice LANGUAGES CXX) # ！！！新项目修改

# 1. 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 2. MSVC兼容配置（Windows下必加）
if(MSVC)
    add_compile_options(/utf-8)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

# 3. 定义源文件+头文件列表
set(PROJECT_SOURCES
    src/add.cpp
    src/subtract.cpp
    src/multiply.cpp
    src/divide.cpp
    src/main.cpp
    include/calculator.h
) # ！！！新项目修改，记得加上头文件（虽然不编译，但必须告诉CMake它存在）

# 4. 设置exe输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 5. 生成可执行文件（必须先有这行，才能加下面的头文件目录）
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

# 6. 告诉编译器：去include文件夹里找头文件
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)