#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << "Before swapping the values are \n";
    cout << "Number 1 = " << n1 << " number 2 = " << n2 << endl;

    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;

    cout << "After swapping the values are \n";
    cout << "Number 1 = " << n1 << " number 2 = " << n2 << endl;
    return 0;
}
