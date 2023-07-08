//Build a program that checks if a given word is a palindrome (reads the same forwards and backward).
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word = "radar";
    reverse(word.begin(), word.end());
    cout <<word;
    return 0;
}