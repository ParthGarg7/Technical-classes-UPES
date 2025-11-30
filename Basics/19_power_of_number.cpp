#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << "How much power you want to computer of " << num << ": ";
    int pow;
    cin >> pow;
    int n1 = 1;

    for (int i = 0; i < pow; i++)
        n1 = n1 * num;

    cout << "The power of " << num << " to " << pow << " is " << n1;

    return 0;
}