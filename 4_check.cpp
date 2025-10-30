#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character" << endl;
    cin >> ch;

    if(('a' <= ch && ch >= 'z') || ('A' <= ch && ch >= 'Z'))
        cout << ch << " is an Alphabet." << endl;
    else if(ch >= '0' || ch <= '9')
        cout << ch << "is an number " << endl;
    else
        cout << ch << "is an special char" << endl;
    return 0;
}