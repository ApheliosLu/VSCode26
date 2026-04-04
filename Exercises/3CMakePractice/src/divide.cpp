#include "calculator.h"

double divide(int a, int b)
{
    if (b == 0)
    {
        return 0; // 简单处理除零错误
    }
    return static_cast<double>(a) / b;
}