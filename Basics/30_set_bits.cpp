#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;
    while (num > 0)
    {
        if (num & 1) // check that the last bit is 1 or not
            count++;
        num >>= 1; // Right shift the number by 1 bit
    }

    cout << "Number of set bits: " << count << endl;
    return 0;
}
