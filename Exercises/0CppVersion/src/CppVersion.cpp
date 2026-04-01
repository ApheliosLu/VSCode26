#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = __cplusplus;
    cout << x << endl; // 返回的x表示cpp的版本；返回199711代表c++98
    system("pause");
    return 0;
}
