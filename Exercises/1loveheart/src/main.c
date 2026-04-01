#include <stdio.h>
#include <windows.h> //

int main(int argc, char const *argv[])
{
    system(" color 0C"); // 设置显式窗口的背景色和字体颜色，0黑色、C淡红色
    float x, y, a;
    for (y = 1.5f; y > -1; y -= 0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += .05f)
        {
            a = x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y < 0.0f ? '*' : ' '); //
        }
        Sleep(15);
        putchar('\n');
    }
    printf("\n\n\t\t\tProgrammers' rommance\n");
    system("pause");

    return 0;
}
