#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not prime";
            break;
        }
    }
    if (i == num)
        cout << num << " is a prime number";

    return 0;
}