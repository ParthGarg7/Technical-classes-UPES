#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int n1 = num;
    int sum = 0;
    while(n1 != 0)
    {
        int n2 = n1 % 10;
        sum = sum + n2;
        n1 = n1 / 10;
    }

    cout << "The sum of digits of " << num << " is " << sum;
    return 0;
}