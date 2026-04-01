#include "header.h"

int main01(void)
{
    // system("chcp 65001");

    char answer1[100];
    char answer2[100];
    printf("你好，召唤师！\n");

    printf("请输入你的姓:");
    scanf_s("%s", answer1);
    printf("请输入你的名:");
    scanf_s("%s", answer2);
    printf("你的名字是：%s%s\n", answer1, answer2);

    // printf("I got 100%%\n");    //输出百分比符号

    system("pause");
    return 0;
}