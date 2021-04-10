#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double num1;
    double num2;
    cout << "Enter the first integer: " << flush;
    cin >> num1;
    cout << "Enter the second integer: " << flush;
    cin >> num2;

    cout << "their sum is " << num1 + num2 << endl;
    cout << "their difference is " << num1 - num2 << endl;
    cout << "their product is " << num1 * num2 << endl;
    cout << "their average is " << (num1 + num2) / 2 << endl;
    cout << "their distance is " << abs(num1 - num2) << endl;
    cout << "their maximum is " << max(num1,num2) << endl;
    cout << "their minimum is " << min(num1, num2) << endl;
}

