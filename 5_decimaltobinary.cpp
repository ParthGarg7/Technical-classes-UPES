#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a decimal number: ";
    int n1;
    cin >> n1;

    int num = n1;
    int i = 1, n2 = 0;
    long long binary = 0;

    while (n1 > 0)
    {
        n2 = n1 % 2;
        binary += n2 * i;
        n1 = n1 / 2;
        i = i*10;
    }

    cout << "The binary of " << num << " is " << binary << endl;

    return 0;
}