//Write a program that asks the user to guess a randomly generated number and provides feedback based on their guesses.
#include <iostream>
#include <random>
using namespace std;

int main()
{
    int givenNum;
    int MaxAttempts = 5;
    int attempts = 0;

    // random number generator using random library
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1,9);
    int randomNum = dist(gen);
    cout << randomNum << endl;
    

    while (attempts < MaxAttempts){
    cout << "Guess a number" << endl;
    cin >> givenNum;
    if (givenNum == randomNum){
        cout << "Congrats you WON!!" << endl;
        break;
    }else{
        cout << "Incorrect try again buddy" << endl;
    }
    
    attempts++;

    }
    cout << "Game over the correct number is " << dist(rd);

    
    return 0;
}