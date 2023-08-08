// Develop a program that determines if a given number is even or odd using a function.
#include <iostream>
#include <string>
bool isEven(int givenNum){
    return givenNum % 2 == 0;
}
int main()
{
    int givenNum;
    std::cout << "Enter a number to determine whether its odd or even\n";
    std::cin >> givenNum;
    isEven(givenNum);// using function to determine odd or even as shown above
    if(isEven(givenNum)){
        std::cout << givenNum << " is a even number\n";// odd number = remainder > 0
    }else{
        std::cout << givenNum << " is a odd number!\n";// even number = no remainders
    }

    return 0;
}