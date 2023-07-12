// Create a program that checks if a user-provided number is positive, negative, or zero using if-else statements.
#include <iostream>
using namespace std;

int main()
{
    int givenNum;
    cout << "Enter any number (neg,pos,zero)" << endl;
    cin >> givenNum;

    if (givenNum == 0){
        cout<< "Number is Zero" << endl;
    }
    if (givenNum > 0){
        cout <<"Number is a positive number"<< endl;
    }else if(givenNum < 0){
        cout <<"Number is a negative number" << endl;
    }

    return 0;
}