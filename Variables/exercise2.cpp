//Write a program that converts temperature from Celsius to Fahrenheit or vice versa based on user input.
#include <iostream>
using namespace std;

double temp;
char choice;

int main()
{
  cout <<"which measure of weather unit would you like to use to convert to? (f,c)" << endl;
  cin >> choice;
  



  if(choice == 'c'|| 'C'){
    cout <<"Enter the temp in Celsius to convert to Fahrenheit";
    cin >> temp;
    double convTemp = temp * 9/5 + 32;
    cout << "Fahrenheit: "<<convTemp<<"°F";
  }


  if(choice == 'f' || 'F'){
    cout<<"Enter the temp in Fahrenheit to convert to Celsius";
    cin >> temp;
    double convTemp = (temp - 32) / 9/5;

    cout <<"Celsius: "<< (temp - 32) / 9/5;
  }


    return 0;
}