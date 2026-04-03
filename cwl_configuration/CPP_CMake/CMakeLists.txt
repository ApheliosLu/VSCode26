cmake_minimum_required(VERSION 4.0) # 1.指定最低兼容版本

project(CPP_CMake LANGUAGES CXX) # 2.定义项目名称和使用的语言   // 新项目时修改

set(CMAKE_CXX_STANDARD 17) # 3.设置C++标准为C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 4.强制使用C++17标准
set(CMAKE_CXX_EXTENSIONS OFF) # 5.禁止使用编译器特定的扩展,确保代码的可移植性

set(PROJECT_SOURCES
    src/hello.cpp
    src/test.cpp
    src/world.cpp
) # 6.定义源代码目录    // 新项目时修改

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) # 7.让 exe 直接输出到项目根目录的 bin 文件夹
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES}) # 8.添加可执行文件,指定源文件路径