#include <iostream>

using namespace std;

void fibonacci(int);

int main()
{
    cout << "How many terms of fibonacci terms you want to print? ";
    int num;
    cin >> num;
    fibonacci(num);
    return 0;
}

void fibonacci(int a)
{
    int n1 = 0 , n2 = 1;

    cout << n1 << " " << n2 << " ";
    for (int i = 0; i < a; i++)
    {
        int num = n1 + n2;
        cout << num << " ";
        n1 = n2;
        n2 = num;
    }
}
