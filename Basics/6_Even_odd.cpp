#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;

    if (num % 2 == 0)
        std::cout << num << " is even";
    else
        std::cout << num << " is odd";

    return 0;
}