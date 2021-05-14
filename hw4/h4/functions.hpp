#include "functions.hpp"
using namespace std;

int main() {
//    // 1a
//    cout << boolalpha;
//    cout << "This should print false: " << leap_year(1999) << endl;
//    cout << "This should print false: " << leap_year(1900) << endl;
//    cout << "This should print true : " << leap_year(1996) << endl;
//    cout << "This should print true : " << leap_year(2000) << endl;
//    cout << endl;
//
//    // 1b
//    cout << "This should print 1 1 2 3 5 8 13 21: " << endl;
//    fib(8); cout << endl;
//
//    // 1c
//    cout << "This should prompt the user with  "  << endl;
//    cout << "\"What's your favourite number? \":" << endl;
//
//    double x = get_double("What's your favourite number?");
//
//    cout << "This should print your favorite number: ";
//    cout << x << endl;
//    cout << endl;

//    // 2
    vector<int> u = {1, 2, 3, 4, 5};
    vector<int> v = {81, 82, 83};
//    cout << "This should print 1 2 3 4 5:" << endl;
//    printMyVector(u); cout << endl;
//
    vector<int> w = concatenateMyVectors(u, v);
//    cout << "This should print 1 2 3 4 5 81 82 83:" << endl;
//    printMyVector(w); cout << endl;

//    // 3
//    cout << "This should print out 1 2 3 4 5 six times:" << endl;
//    int a, b, c, d, e;
//
//    a = 1; b = 2; c = 3; d = 4; e = 5;
//    sort5(a, b, c, d, e);
//    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
//
//    a = 3; b = 5; c = 2; d = 4; e = 1;
//    sort5(a, b, c, d, e);
//    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
//
//    a = 2; b = 5; c = 3; d = 4; e = 1;
//    sort5(a, b, c, d, e);
//    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
//
//    a = 4; b = 1; c = 2; d = 3; e = 5;
//    sort5(a, b, c, d, e);
//    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
//
//    a = 4; b = 3; c = 1; d = 2; e = 5;
//    sort5(a, b, c, d, e);
//    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
//
//    a = 3; b = 4; c = 2; d = 5; e = 1;
//    sort5(a, b, c, d, e);
//    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
//    cout << endl;

//    // 4
//    reverse(u);
//    cout << "This should print 5 4 3 2 1:" << endl;
//    printMyVector(u); cout << endl;
//
//    reverse(w);
//    cout << "This should print 83 82 81 5 4 3 2 1:" << endl;
//    printMyVector(w); cout << endl;

    // 5
    cout << noboolalpha;


    vector<bool> b1 = {0, 1, 1, 0, 0, 1, 1};
    vector<bool> b1copy = b1;
//
//
//    cout << "This should print 0110011   : ";
//    print(b1);
//
//    cout << "This should print 011001100 : ";
//    addZeros(b1copy, 2);
//    print(b1copy);
//
    vector<bool> b2 = {1, 0, 1, 0, 0, 1, 1, 1, 1};
    vector<bool> b3 = addition(b1, b2);
    vector<bool> b4 = addition(b2, b1);

    cout << "This should print 1101001001: ";
    print(b3);
    cout << endl;

    cout << "This should print 1101001001: ";
    print(b4);
    cout << endl;
//
//    cout << endl;
//    return 0;
}

