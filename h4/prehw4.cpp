#include <iostream>     // cout/cin
#include <algorithm>    // max/min
#include <cassert>      // assert
#include <string>       // string

using namespace std;


/**
 This function determines whether input is a leap year or not
 @param year input of user
 @return boolean if leap year or not
*/
bool leap_year(int year) {

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        return 1;
    }
    else {
        return 0;
    
        return 0;
}


/**
 This function performs a series of mathematical operations.
 @param i1 first integer
 @param i2 second integer
 @return function doesn't return anything
*/
void basic_arith(int i1, int i2) {
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


/**
 This function prints a series of  X Fibonacci numbers.
 @param N, number of Fibonacci to be printed
 @return Function doesn't return anything
*/
void fib(int N) {

        int n1=1,n2=1,n3,N,i;
        cout << "Type an integer bigger than or equal to 0: " << endl;
        cin >> N;
        cout << "The first " << N << " Fibonacci numbers are:" << endl;
        
        if (N == 1){
            cout << n1 << endl;
        } else if (N == 2){
            cout << n1 << " " << n2 << endl;
        } else if(N > 2){
            cout << n1 << " " << n2 << " ";
            for(i=2;i<N;i++){
                n3 = n1 + n2;
                cout << n3 << " ";
                n1 = n2; n2 = n3;
            }
            cout << endl;
        }
        return 0;
    }


/**
 Function prints prompt, reads and returns input
 @param prompt
 @return returns double that was read in.
*/
double get_double(string prompt) {

    cout << prompt << endl;
    double input; cin >> input;
    return input;
    
    if (cin.fail()) {
        cout << "cin fail, so 0 was returned." << endl;
        return 0;
    }

        return 0; // ...and/or correct this.
}


int main() {
    
    return 0;
}
