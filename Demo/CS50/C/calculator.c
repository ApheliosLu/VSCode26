#include "header.h"

int main07(int argc, char const *argv[])
{
    long long x;
    printf("请输入第一个数： ");
    scanf_s("%lld", &x);
    long long y;
    printf("请输入第二个数： ");
    scanf_s("%lld", &y);

    // type casting 显式类型转换
    double z = (double)x / (double)y;
    printf("%.20f\n", z); //小数点后20位;floating-point imprecition;float7位，double16位

    system("pause");
    return 0;
}
