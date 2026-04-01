#include "header.h"

int get_size(void);
void print_grid(int size);

int main06(int argc, char const *argv[])
{
    // 1.Get size of grid
    int n = get_size();

    // 2.Print grid of bricks
    print_grid(n);

    system("pause");
    return 0;
}

int get_size(void)
{
    int n;
    do
    {
        printf("请输入一个大于等于1的整数\n");
        scanf_s("%d", &n);
    } while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}