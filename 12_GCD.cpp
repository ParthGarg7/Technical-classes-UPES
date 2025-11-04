#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers: ";
    int n1, n2;
    cin >> n1 >> n2;
    int GCD;
    int lowest = n1 < n2 ? n1 : n2;
    for (int i = lowest; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
            break;
        }
    }
    cout << "The GCD of " << n1 << " and " << n2 << " is " << GCD;

    return 0;
}