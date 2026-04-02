# VSCode环境配置

## 环境变量

环境变量是操作系统维护的一套全局公共键值对配置，相当于系统给所有运行的程序(包括你写的 exe、微信、浏览器等)准备的「公共共享记事本」。
其中「键」是变量名，「值」是对应的配置内容，所有程序都能随时读取，部分场景下也可修改。
因此需要添加Python解释器和MinGW到环境变量中,以在VSCode中运行代码时可以找到解释器和编译器。

## VSCode安装

添加VSCode到环境变量中。

## 裸Python解释器搭建Python环境

运行和调试：
添加的launch.json是 VSCode 里 Python 调试器的「运行 / 调试配置文件」，相当于给调试器写了一份「怎么运行你的代码」的说明书，
让你能断点调试、看变量、单步执行，而不是只能直接跑脚本。
"program": "${workspaceFolder}/Python/test2.py" 运行 VSCode 打开的工作区根目录下的test2.py
"program": "${file}"    运行当前打开的文件

## Python个人喜好配置

跨文件夹导包：在 test.py 中导入 test1.py 的 print_hello 函数
1.首先在 test1.py 所在的 demo 文件夹中加入 __init__.py 文件使其成为一个可以导入的包
2.在 test2.py 文件中找到文件根目录即 sys.path.append(str(Path(__file__).parent.parent)) 后 from demo import test1

## 使用conda管理Python环境

## Gcc单文件配置

## C++多文件配置CMake

## C++MSVC环境配置

## 静态库与动态库

## Qt环境搭建
