cmake_minimum_required(VERSION 4.0) # 1.指定最低兼容版本

project(1loveheart LANGUAGES CXX) # 2.定义项目名称和使用的语言   // 新项目时修改

set(CMAKE_CXX_STANDARD 17) # 3.设置C++标准为C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 4.强制使用C++17标准
set(CMAKE_CXX_EXTENSIONS OFF) # 5.禁止使用编译器特定的扩展,确保代码的可移植性

# -------------------------- MSVC 专属兼容配置（新增） --------------------------
if(MSVC)
    # 1. 强制使用UTF-8编码，解决中文乱码（必加）
    add_compile_options(/utf-8)

    # 2. 关闭MSVC的"不安全函数"警告（比如scanf、strcpy等）
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)

    # 3. 关闭MSVC的非标准扩展警告
    add_compile_options(/wd4996)

    # 4. 运行库设置（可选，默认动态MD，如需静态MT可打开注释）
    # set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>") # 静态MT/MTd
    # set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL") # 动态MD/MDd（默认）
endif()

# -----------------------------------------------------------------------------
set(PROJECT_SOURCES
    src/main.cpp
) # 6.定义源代码目录    // 新项目时修改

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) # 7.让 exe 直接输出到项目根目录的 bin 文件夹
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES}) # 8.添加可执行文件,指定源文件路径