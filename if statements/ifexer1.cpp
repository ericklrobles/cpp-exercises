//Build a program that determines if a user-provided year is a leap year or not.
#include <iostream>
using namespace std;

int main()
{
    int givenYear, result;
    cout << "Enter a year" << endl;
    cin >> givenYear;
    result = givenYear % 4; // using modulus operator and using divisor of 4
    // formula for finding out if it is a leap year or not
    
    if (result == 0){// only if remainder = 0 from the given formula
        cout << "The Year: " << givenYear << " is a leap year!" << endl;

    }else{ // remainder greater than 0
        cout << "The Year: " << givenYear << " is not a leap year..." << endl;
    }



    return 0;
}