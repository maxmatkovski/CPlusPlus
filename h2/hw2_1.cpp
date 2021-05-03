// Homework #1
#include <iostream>
#include <string>
using namespace std;


int main() {

    cout << "Please enter an integer between 1,000 and 999,999: " << flush;
    string input; cin >> input;

    int length = 0;
    for (int i = 0; input[i]; i++){
        length = length + 1;
    }

    string newInput;
    for (int i =0; i < length - 4;i++){
        newInput = newInput + input[i];
    }

    for (int j = length - 3;j<length;j++){
        newInput = newInput + input[j];
    }

    cout << newInput << endl;
    
}

