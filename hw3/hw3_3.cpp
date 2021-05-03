#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    char response = 'y';

    int max, min, number;

    while (response == 'y')
    {
        max = -pow(2, 31);
        min = pow(2, 31) - 1;
        cout << "Enter a list of integers: " << endl;

        while (cin.peek() != '\n')
        {
            cin >> number;
            if (number < min)
            {
                min = number;
            }

            if (number > max)
            {
                max = number;
            }
        }

        cout << "The max of the integers you entered is " << max << endl;
        cout << "The min of the integers you entered is " << min << endl;

        cout << "Continue? (y/n)" << endl;
        cin >> response;
        cin.ignore();
    }
    return 0; 
}
