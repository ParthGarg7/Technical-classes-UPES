#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    long long int num, rev = 0, n3 = 0;
    cin >> num;
    long long int n1 = num;
    int i = 10;
    while (n1 != 0)
    {
        n3 = n1 % 10;
        rev = (rev * i) + n3;
        n1 = n1 / 10;
    }
    if(num == rev)
    cout << num << " is a palindrome";
    else
    cout << num << " is not a palindrome";  
    return 0;
}