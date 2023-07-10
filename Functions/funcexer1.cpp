//Write a program that calculates the factorial of a given number using a recursive function.
// n! = n × (n - 1)!
#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
  int n;
  cout << "Enter a number to calculate factorial" << endl;
  cin >> n;
  cout << "Factorial of: " << n << " = " << factorial(n) << endl;
   
    

    return 0;
}
 int factorial(int n){// factorial function so it calculates the result & returns the result back to intial unfilled variable and prompting to user
        if (n == 1){
            return 1;
        }else{
        return n * factorial  (n- 1);
        }
    }