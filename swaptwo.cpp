#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 10;

    b = a + b;
    a = b - a;
    b = b - a;

    cout << a << " " << b ;

    return 0;
}