// Homework #2
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Please enter an integer between 1 and 12: " << flush;
    int input; cin >> input;

    string months = "January   February  March     April     May       June      July      August    September October   November  December  ";

    cout << months.substr(((input-1)*10),10) << endl;
    
}
