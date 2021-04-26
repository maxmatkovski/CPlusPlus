#include <iostream>
#include <string>

using namespace std;

int decimal_to_binary(int);

int main() {
    cout << "Enter a strictly positive integer: " << endl;
    unsigned int x; cin >> x;
    
    if (x == 0){
        cout << "This number is not STRICTLY positive" << endl;
        return 0;
    }
    
    
    int binary = decimal_to_binary(x);
    
    cout <<  "The binary representation of " << x << " is given by " << binary << endl;
    
}

int decimal_to_binary(int number){
    int binary = 0;
    int i = 1;
    
    while(number > 0){
        binary += number%2*i;
        number = number / 2;
        i*=10;
    }
    return binary;
}
