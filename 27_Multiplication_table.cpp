#include <iostream>
int main()
{
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    for(int i = 1 ; i <= 10; i++)
    std::cout << num << " X " << i << " = " << num*i << std::endl;
    return 0;
}