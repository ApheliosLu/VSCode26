#include <stdio.h> //用于配置多项目管理和scanf输入；通过不同文件夹管理不同项目

int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);             // 终端输入10 20
    printf("%d*%d=%d\n", a, b, a * b); // 终端输出 10*20=200

    return 0;
}