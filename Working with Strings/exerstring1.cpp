//Build a program that checks if a given word is a palindrome (reads the same forwards and backward).
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word = "radar";
    string reversed(word);
   reverse(reversed.begin(), reversed.end());
   

    
    return 0;
}