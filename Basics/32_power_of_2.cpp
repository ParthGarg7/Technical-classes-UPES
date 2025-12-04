#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int n1 = num, count = 0;

    // to find set bits in the given input
    while (n1 > 0)
    {
        // to check the last bit of the n1 is 1 (true) or not
        if (n1 & 1)
            count += 1;

        n1 >>= 1;
    }

    // Only the power of 2 have 1 set bit in the binary form
    if(count == 1)
    cout << "YES the " << num << " is a power of 2";
    else
    cout << "NO the " << num << " is not a power of 2";
    return 0;
}