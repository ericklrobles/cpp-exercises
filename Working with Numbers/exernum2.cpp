//Create a program that determines whether a given number is prime or not.
#include <iostream>
using namespace std;


int main()
{

    int num;
    bool isPrime = true;
    cout << "Enter a number to determine whether it is prime or not (pos integer)" << endl;
    cin >> num;
    for(int i = 2; i <= num/2; i++){
    if (num % i == 0){
        isPrime = false;
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