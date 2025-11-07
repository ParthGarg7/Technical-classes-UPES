#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    int sum = 0;

    cout << "The divisors of " << num << " are " << endl;
    for(int i = 1 ; i<= num; i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }

    cout << endl;
    cout << "The sum of divisors is " << sum;
    return 0;
}