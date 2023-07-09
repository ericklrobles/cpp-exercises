//Create a program that determines whether a given number is prime or not.
#include <iostream>
using namespace std;
// prime number has no remainders & can be multiplied once

int main()
{

    int num;
    bool isPrime = true;
    cout << "Enter a number to determine whether it is prime or not (pos integer)" << endl;
    cin >> num;

     // situations when user enters 0's and 1's and without this statement it counteracts with for loop & states a false statement
    if (num == 0 || num == 1){
        isPrime = false;
    }

    // to check if the user input given is a prime number 
    for(int i = 2; i <= num/2; i++){ // for loop 
    if (num % i == 0){ // modulas operator finding remainders
        isPrime = false;// changes the bool value to false only if the condition occurs
        break;
    }
    }


    if(isPrime == true){
        cout << "The number is a prime number";
    }else{
        cout <<"The number is not a prime number";
    }


    return 0;
}