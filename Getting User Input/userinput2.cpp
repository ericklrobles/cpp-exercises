// Develop a program that takes user input to generate a simple story or sentence using Mad Libs-style placeholders.
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// getting different inputs from user and storing and putting it in one story & storing it in variables
int main()
{
    string color, pluralNoun, celebrity;

    cout <<"Enter a color:";
    getline(cin,color);

    cout <<"Enter a plural noun: ";
    getline(cin,pluralNoun);

    cout << "Enter a celebrity: ";
    getline(cin,celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue"<< endl;
    cout << "I love " << celebrity << endl;



    return 0;
}