#include "calculator.h"
#include <iostream>

int main()
{
    int a = 10;
    int b = 3;

    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << subtract(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << divide(a, b) << std::endl;

    system("pause");
    return 0;
}