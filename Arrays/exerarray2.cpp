// Create a program that reverses the elements in an array.
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
   const int size = 6;
   int array [size] = {1,2,3,4,5,6};
   reverse(begin(array),end(array));
   
   for(auto item:array){ // The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used. T
    cout << item << endl;
   }

    return 0;
}