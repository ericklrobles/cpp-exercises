//Develop a program that calculates the sum of all numbers from 1 to a user-provided positive integer using a while loop.
#include <iostream>
using namespace std;

int main()
{
    int givenNum, sum = 0;
    cout << "Enter a positive integer number" << endl;
    cin >> givenNum;
    int originalNum = givenNum;// declaring another variable & storing it 

    //loop to find the sum of all numbers from 1 to the given number

    while (givenNum > 0){
        sum += givenNum; // equivalent to sum = sum + givenNum basically just adding the current value to sum
        givenNum -= 1; //decreasing value of integer by 1
    }
    cout << "The sum of all numbers from 1 to " << originalNum << " is " << sum << endl;





    return 0;
}