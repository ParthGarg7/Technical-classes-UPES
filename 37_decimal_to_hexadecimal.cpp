#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    string hex = "";

    int temp = num;
    while (temp > 0)
    {
        int remainder = temp % 16;
        hex = hexDigits[remainder] + hex; 
        temp /= 16;
    }

    cout << "Hexadecimal value: " << hex << endl;
    return 0;
}
