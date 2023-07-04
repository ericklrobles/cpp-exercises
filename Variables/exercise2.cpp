//Write a program that converts temperature from Celsius to Fahrenheit or vice versa based on user input.
#include <iostream>
using namespace std;

double temp;
char choice;

int main()
{
  cout <<"which measure of weather unit would you like to use to convert to? (f,c)" << endl;
  cin >> choice;
  



  if(choice == 'c'|| choice == 'C'){
    cout <<"Enter the temp in Celsius";
    cin >> temp;
    double convTemp = temp * 9/5 + 32;
    cout << "Fahrenheit: "<<convTemp<<"°F" << endl;
  }


  if(choice == 'f' || choice == 'F'){
    cout<<"Enter the temp in Fahrenheit";
    cin >> temp;
    double convTemp = (temp - 32) * 5/9;
    cout <<"Celsius: "<< convTemp << "°C" << endl;
  }else{
    cout<< "invalid entry please enter c or f"<< endl;
  }


    return 0;
}