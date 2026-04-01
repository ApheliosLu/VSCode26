#include "header.h"

int main02(int argc, char const *argv[])
{
    int x, y;
    printf("What's x? ");
    scanf_s("%d", &x);
    printf("What's y? ");
    scanf_s("%d", &y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }

    system("pause");
    return 0;
}
