#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d;
    int root1, root2;
    cout << "Enter the coefficient of the x square: ";
    cin >> a;
    cout << "Enter the coefficient of the x: ";
    cin >> b;
    cout << "Enter the constant: ";
    cin >> c;

    d = (b * b) - 4 * a * c;
    d = sqrt(d);

    if (d < 0)
    {
        cout << "The roots of this equation are imaginary " << endl;
        return 0;
    }
    else
    {
        root1 = (-b + d) / 2;
        root2 = (-b - d) / 2;
    }

    cout << "The roots of the equations are " << root1 << " " << root2 << endl;

    return 0;
}