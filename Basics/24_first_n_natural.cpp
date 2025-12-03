#include <iostream>

using namespace std;

int main()
{
    cout << "how many natural numbers you want add? ";
    int count;
    cin >> count;

    int sum = count * (count + 1) / 2;

    cout << "The sum of " << count << " natural numbers are " << sum;
    return 0;
}