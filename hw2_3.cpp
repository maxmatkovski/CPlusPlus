// Homework 3
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string input = "1*x^2+0*x-1" ;
    cout << "This is what we're dealing with:\n" << input  << endl << endl;
    string first = "", second= "", third = "";

    //Grab the first number
    int pos1 = input.find("*x^2");
    first = input.substr(0, pos1); // from index 0, grab the length of position 1 to get the full string of num1

    //Now we cut off the first part, leave only the second and third
    string input2 = input.substr(pos1 + 4, input.length() - (pos1 + 4)); //+4 cuz "x^2" is 4 char
    int pos2 = input2.find("*x");
    second = input2.substr(0, pos2); // from index 0, grab the length of position 2 to get the full string of num2


    //Now we cut off the second part, leave only the third, it HAS to be what's left
    third = input2.substr(pos2 + 2, input2.length() - (pos2 + 2)); //+2 cuz "x" is 2 char


    
    double a = stod(first);
    double b = stod(second);
    double c = stod(third);
    
    double b_squared = b * b;
    double four_a_c = (4*a*c);
    double discriminant = b_squared - four_a_c;
    double rooted_discriminant = sqrt(discriminant);
    double plus_numerator = (-1*b) + rooted_discriminant;
    double minus_numerator = (-1*b) - rooted_discriminant;
    double denominator = (2*a);
    double positive_final = (plus_numerator)/(denominator);
    double negative_final = (minus_numerator)/(denominator);
    

    cout << "(-b plus the square root of the discriminant) / 2a is " << positive_final << endl;
    
    cout << "(-b minus the square root of the discriminant) / 2a is " << negative_final << endl;
    
    

    return 0;
}
