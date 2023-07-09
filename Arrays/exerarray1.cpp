// Implement a program that finds the largest and smallest numbers in an array.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[5] = {5,4,32,6,9};
    int size = sizeof(num) / sizeof(num[0]);
    int *maxElement = max_element(num, num + size);
    int *minElement = min_element(num, num + size);
    cout << "Largest Number: " << *maxElement << endl;
    cout << "Smallest Number: " << *minElement << endl;

    return 0;
}
