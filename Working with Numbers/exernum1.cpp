// Develop a simple calculator program that performs basic arithmetic operations (+, -, *, /) on two user-provided numbers.
#include <iostream>
using namespace std;


int main()
{
  double num1, num2;
  char op;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter operator +,-,*,/: ";
  cin >> op;

  cout << "Enter second number: ";
  cin >> num2;
  int result;// implementing if statements on what we are prompted from the user
  if(op == '+'){
    result = num1 + num2;
    cout << result;
  } else if(op == '-'){
    result = num1 - num2;
    cout << result;
  }else if(op == '*'){
    result = num1 * num2;
    cout << result;
  }else if(op == '/'){
    result = num1 / num2;
    cout << result;
  }else {
    cout<<"retry again please it is invalid";
  }

    return 0;
}