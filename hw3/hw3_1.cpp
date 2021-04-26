#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {

    cout << "Enter four integers separated by spaces: " << endl;


    string int_one; cin >> int_one;
    string int_two; cin >> int_two;
    string int_three; cin >> int_three;
    string int_four; cin >> int_four;


    if(int_one > int_two){
        swap(int_one, int_two);
    }

    if(int_three < int_one){
        swap(int_one, int_three);
        swap(int_two, int_three);

    }


    if(int_four < int_one){
        swap(int_one, int_four);
        swap(int_four, int_two);
        swap(int_four, int_three);
    }

    if(int_three > int_four){
        swap(int_three, int_four);
    }


    if(int_two > int_three){
        swap(int_two, int_three);
    }


    cout << endl;
    cout << int_one << " " << int_two << " " << int_three  << " " << int_four << endl;

    return 0;
}
