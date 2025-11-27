#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   string s1;
   cout << "Enter a string" << endl;
   getline(cin, s1);

   cout << s1 << endl;

   reverse(s1.begin(), s1.end());

   return 0;
}