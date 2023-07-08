//Write a program that counts the number of occurrences of a specific character in a given string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   string word = "character";
   int counting = count(word.begin(), word.end(), 'a'); // using count function to count the occurances of 'a'
   //The count() function takes three arguments: the beginning iterator of the range, the ending iterator of the range, and the value to count.
   cout << "Character A occurences: "<< counting << " times" <<endl; 


    return 0;
}