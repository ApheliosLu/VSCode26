# VSCode环境配置

## 环境变量

环境变量（environment variables）是指在操作系统中用来指定操作系统运行环境的一些参数，如：临时文件夹位置和系统文件夹位置等。
环境变量是在操作系统中一个具有特定名字的对象，它包含了一个或者多个应用程序所将使用到的信息。
例如Windows和DOS操作系统中的path环境变量，当要求系统运行一个程序而没有告诉它程序所在的完整路径时，系统除了在当前目录下面寻找此程序外，还应到path中指定的路径去找。
因此需要添加Python解释器和MinGW到环境变量中,以在VSCode中运行代码时可以找到解释器和编译器。

## VSCode安装

添加VSCode到环境变量中。

## 裸Python解释器搭建Python环境

运行和调试时：
添加的launch.json是 VSCode 里 Python 调试器的「运行 / 调试配置文件」，相当于给调试器写了一份「怎么运行你的代码」的说明书，
让你能断点调试、看变量、单步执行，而不是只能直接跑脚本。
"program": "${workspaceFolder}/Python/test2.py" 运行 VSCode 打开的工作区根目录下的test2.py
"program": "${file}"    运行当前打开的文件

## Python个人喜好配置

跨文件夹导入模块：若要在demo2文件夹中的 test2.py 中导入demo文件夹中的 test1.py 的 print_hello 函数
1.首先在 test1.py 所在的 demo 文件夹中加入 __init__.py 文件使其成为一个可以导入的模块
2.在 test2.py 文件中找到文件根目录即 sys.path.append(str(Path(__file__).parent.parent)) 后 from demo import test1

## 使用conda管理Python环境

Miniforge ：底层包 / 环境管理器（命令行工具），负责安装、卸载、创建环境、解析依赖

## Gcc单文件配置

1.winlib.com 下载 mingw 并添加入环境变量
// 2.在cpp文件目录下启动 cmd 并输入 g++ test.cpp -o test.exe 直接生成exe可执行程序。在该窗口或终端中可直接使用可执行程序名执行，或直接双击exe运行

2.f5运行并选择配置  C/C++：g++.exe 构建和调试活动文件 生成task.json（负责编译）

3.自定义运行和调试文件 选择调试器C++(GDB/LLDB) 生成launch.json（负责运行和调试）

4.F5 → 编译 + 运行 + 调试       先跑 task 编译 → 再跑 launch 调试

## C++多文件配置CMake

在一个cpp文件中调用另一个cpp文件的函数时出现的问题，类似上面的python跨文件夹导入模块操作。
g++ test.cpp -o test.exe            ×   问题：仅编译test会找不到hello中的函数
g++ test.cpp hello.cpp -o test.exe  √   解决方法：将多个文件同时编译（或在task.json中进行多个文件同时编译）
本质原因：不同的.cpp文件会编译成不同的.o文件，最后链接为.exe文件

另一种解决方法：使用CMake构建
1.安装CMake并添加环境变量
2.项目文件夹内新建CMakeLists.txt 并编写，VSCode识别到CMakeLists.txt后会自动创建build文件夹
3.底部的生成按键：构建exe文件（即相当于g++ test.cpp -o test.exe）
底部的DeBug（F5）
底部的启动但不调试（相当于Ctrl+F5）

## C++MSVC环境配置

## 静态库与动态库

## Qt环境搭建
