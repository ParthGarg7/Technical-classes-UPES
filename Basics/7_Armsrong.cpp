#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0, sum = 0;
    int n1 = num;

    while (n1 != 0)
    {
        n1 /= 10;
        count += 1;
    }

    n1 = num;

    while (n1 != 0)
    {
        int rem = n1 % 10;
        sum += pow(rem, count);
        n1 /= 10;
    }

    if (num == sum)
        cout << num << " is a armstrong.";
    else
        cout << num << " is a not armstrong.";

    return 0;
}