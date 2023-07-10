// Develop a program that determines if a given number is even or odd using a function.
#include <iostream>
using namespace std;

int main()
{
    int givenNum, result;
    cout << "Enter a number to determine whether its odd or even" << endl;
    cin >> givenNum;
    result = givenNum % 2; // using modulus operator and using dividor of 2 to find any variables 
    if(result > 0){
        cout << givenNum << " is a odd number!" << endl;// odd number = remainder > 0
    }else{
        cout << givenNum << " is a even number!" << endl;// even number = no remainders
    }

    return 0;
}