#include "header.h"

int main(void)
{
    char legend[100];
    printf("你好，召唤师！\n");

    printf("请输入你要选择的英雄:");
    scanf_s("%s", legend);
    printf("你选择的英雄是：%s\n", legend);

    system("pause");
    return 0;
}