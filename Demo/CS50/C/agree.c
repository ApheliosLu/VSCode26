#include "header.h"

int main03(int argc, char const *argv[])
{
    char c;
    printf("Do you agree? ");
    scanf_s("%c", &c);
    if (c == 'y' || c == 'Y') //Âß¼­»ò
    {
        printf("Agreed\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }

    system("pause");
    return 0;
}
