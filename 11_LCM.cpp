#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int greater = n1 > n2 ? n1 : n2;
    int LCM;
    for (int i = greater; i <= n1 * n2; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            LCM = i;
            break;
        }
    }

    cout << "The LCM of " << n1 << " and " << n2 << " is " << LCM;

    return 0;
}