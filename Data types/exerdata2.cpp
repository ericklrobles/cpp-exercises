//Create a program that calculates the average of a list of numbers using an array or vector.
#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int nums[] = {2,4,6,8};
    int numElements = sizeof(nums) / sizeof(nums)[0]; // the amount of elements inside the array nums
    int sum = accumulate(begin(nums), end (nums), 0, plus<int>());// using accumulate function from the numeric library to add all elements within the array
    cout <<"Average: " << sum / numElements << endl; // finding the mean/avg and printing it out same time
    return 0;
}