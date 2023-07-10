// Implement a program that finds the largest and smallest numbers in an array.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[5] = {1,2,45,23,9};
    int size = sizeof(num) / sizeof(num[0]); // finding out the size of the array to use the functions below
    // functions used to find max & min numbers in the following array
    int *maxElement = max_element(num, num + size); // using built in function algorithm library
    int *minElement = min_element(num, num + size);
    cout << "Largest Number: " << *maxElement << endl;
    cout << "Smallest Number: " << *minElement << endl;

    return 0;
}
