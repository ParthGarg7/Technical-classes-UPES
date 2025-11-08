#include <iostream>

using namespace std;

int main()
{
    cout << "The series is 1^2 + 2^2 + 3^2 + ... + N^2." << endl;
    cout << "How many terms you want to add? ";
    int count;
    cin >> count;
    int sum = 0;
    sum = ((count) * (count + 1) * (2 * count + 1)) / 6;
    cout << "The sum of " << count << " terms of series is " << sum;
    return 0;
}