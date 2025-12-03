#include <iostream>

using namespace std;

int main()
{
    cout << "Enter any year: ";
    int year;
    cin >> year;

    if (year % 100)
        if (year % 4)
            cout << year << " is not a leap year ";
        else
            printf("%d is a leap year\n", year);
    else if (year % 4)
        cout << year << " is not a leap year ";
    else if (year % 100 || year % 400)
        cout << year << " is not a leap year ";
    else
        cout << year << " is a leap year ";

    return 0;
}