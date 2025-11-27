#include <iostream>

using namespace std;

int main()
{
    int n1 = 10;
    int n2 = 20;

    cout << "Value of n1 is " << n1 << endl;
    cout << "Value of n2 is " << n2 << endl;

    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    

    cout << "Value of n1 is " << n1 << endl;
    cout << "Value of n2 is " << n2 << endl;
  
}