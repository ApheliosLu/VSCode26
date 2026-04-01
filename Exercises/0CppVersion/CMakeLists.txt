cmake_minimum_required(VERSION 3.26)
project(CppVersion) # 项目名称

aux_source_directory(./src SRCS) # 添加当前目录(./src)下所有源文件，并命名为SRCS（相当于变量或宏，使用时会被./src中的源文件替换）

add_executable(${PROJECT_NAME} ${SRCS}) # 添加可执行文件即第一行的项目（名称），相当于add_executable(test ./src/hello.cpp ./src/test.cpp ./src/world.cpp)

# !!! cmake是一个构建工具，用于将目录下所有文件添加并链接为一个可执行文件
# !!! CMakeLists.txt告诉cmake把src目录下所有源文件编译成一个可执行文件test.exe

# 使用cmake进行多文件编译时，可以通过直接单击选择下方编译器环境，进行g++或MSVC编译器的选择，注意：改变环境前需要先删除之前的build文件夹