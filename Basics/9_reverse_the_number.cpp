#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num, rev = 0, n3 = 0;
    cin >> num;
    int n1 = num;
    int i = 10;
    while (n1 != 0)
    {
        n3 = n1 % 10;
        rev = (rev * i) + n3;
        n1 = n1 / 10;
    }
    cout << "The reverse of " << num << " is " << rev;
    return 0;
}