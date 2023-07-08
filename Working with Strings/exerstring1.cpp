//Build a program that checks if a given word is a palindrome (reads the same forwards and backward).
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word = "level";
    string reversed(word);// creating a seperate variable & adding the value of the string word 
    reverse(reversed.begin(), reversed.end());// using built in functions from the algorithm library to reverse the string

   if(word == reversed){// comparing the two strings (original & reversed string)
    cout <<"The word is a palindrome"<< endl;
   }
   if(word != reversed){
    cout << "The word is not a palindrome"<< endl;
   }
   

    
    return 0;
}