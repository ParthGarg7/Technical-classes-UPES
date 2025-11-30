#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the range to find prime numbers: ";
    int r1, r2;
    cin >> r1 >> r2;
    int i,j;

    for( i = r1 ; i <= r2; i++)
    {
        for( j = 2 ; j < i ; j++)
        {
            if(i % j == 0)
            break;
        }
        if(i == j)
        cout << i << " ";
    }

    return 0;
}