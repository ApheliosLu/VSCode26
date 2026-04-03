#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("chcp 65001"); // 设置控制台输出编码为 UTF-8

    string name;
    cin >> name;
    cout << "Hello " << name << "!" << endl;

    /*
    命令行执行exe时，对main函数传递参数
    ./test.exe hello 123 world
    则输出结果如下
    参数个数为 argc = 4
    参数 0 的值为 argv[0] = D:\1\CCC\VSCode26\Demo\cwl_configuration\CPP\test.exe
    参数 1 的值为 argv[1] = hello
    参数 2 的值为 argv[2] = 123
    参数 3 的值为 argv[3] = world
    */
    cout << "参数个数为 argc = " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "参数 " << i << " 的值为 argv[" << i << "] = " << argv[i] << endl;
    }

    system("pause");
    return 0;
}
