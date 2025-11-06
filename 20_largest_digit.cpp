#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int n1 = num;

    int largest = 0;
    while (n1 != 0)
    {
        int n3 = n1 % 10;
        largest = largest > n3 ? largest : n3;
        n1 = n1 /10;
    }

    cout << "The largest digit in " << num << " is " << largest;
    return 0;
}