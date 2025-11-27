#include <iostream>

using namespace std;

int main()
{
    int n1 = 6;
    int n2 = 7;

    cout << "Value of n1 is " << n1 << endl;
    cout << "Value of n2 is " << n2 << endl;

    int var = 0;

    var = n1;
    n1 = n2;
    n2 = var;

    cout << "Value of n1 is " << n1 << endl;
    cout << "Value of n2 is " << n2 << endl;
}