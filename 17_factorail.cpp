#include <iostream>

using namespace std;

int factorial(int a)
{
    if (a == 1 || a == 0)
        return 1;
    else
        return a * factorial(a - 1);

    return a;
}

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    int fact = factorial(num);

    cout << "Factorial of " << num << " is " << fact;

    return 0;
}
