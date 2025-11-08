#include <iostream>
#include <cmath>  // for pow() function
using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    // Calculate Simple Interest
    double simpleInterest = (principal * rate * time) / 100.0;

    // Calculate Compound Interest
    double amount = principal * pow((1 + rate / 100.0), time);
    double compoundInterest = amount - principal;

    cout << "\nSimple Interest = " << simpleInterest << endl;
    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}
