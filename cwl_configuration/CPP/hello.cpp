#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("chcp 65001"); // 设置控制台输出编码为 UTF-8

    cout << "hello world!" << endl;

    system("pause");
    return 0;
}
