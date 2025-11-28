#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int n1 = num;
    int count = 0;
    while (n1 != 0)
    {
        n1 /= 10;
        count += 1;
    }

    cout << num << " has " << count << " digits ";

    return 0;
}