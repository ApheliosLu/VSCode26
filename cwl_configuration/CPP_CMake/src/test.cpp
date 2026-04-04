#include <iostream>
using namespace std;

void PrintHello();
void PrintWorld();

int main(int argc, char const *argv[])
{
    system("chcp 65001>NUL"); // 设置控制台输出编码为UTF-8,并且不显示命令执行结果
    PrintHello();
    PrintWorld();
    system("pause");
    return 0;
}
