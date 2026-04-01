#include "header.h"

/*
    Super Mario Bro
    1.Get size of grid
    int n = get_size();
    2.Print grid of bricks
    print_grid(n);
*/

int main05(int argc, char const *argv[])
{
    // printf("????\n");

    //天上的四个问号砖块
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("?");
    // }
    // printf("\n");

    //地上垒起来的三个砖块
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("#\n");
    // }

    // const int n = 3; //常量，不可在他处更改其值

    int n;
    do // do while
    {
        printf("请输入一个大于等于1的整数\n");
        scanf_s("%d", &n); // n*n的砖格网
    } while (n < 1);

    /*while循环
    printf("你想要多大的方格？\n");
    scanf_s("%d", &n);
    while (n < 1)
    {
        printf("请输入一个大于等于1的整数\n");
        scanf_s("%d", &n);
    }
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#"); //画出砖格网
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
