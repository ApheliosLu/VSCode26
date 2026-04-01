# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称和版本
project(BinaryTreeTraversal VERSION 1.0.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加可执行文件
add_executable(main
    src/main.cpp
    src/binary_tree.cpp
)

# 设置目标属性
set_target_properties(main PROPERTIES
    OUTPUT_NAME "binary_tree_traversal"
)

# 如果有测试，可以添加测试
# enable_testing()
# add_subdirectory(test)