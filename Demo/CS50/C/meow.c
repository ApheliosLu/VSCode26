#include "header.h"
// #define true 1

int main04(int argc, char const *argv[])
{
    int counter;
    for (counter = 0; counter < 3; counter++)
    {
        printf("meow\n");
    }

    int i = 0;
    while (i < 30)
    {
        printf("What does the fox say?\n");
        i += 1; // i = i + 1;
    }

    while (true)
    {
        printf("meow\n");
    }

    system("pause");
    return 0;
}
