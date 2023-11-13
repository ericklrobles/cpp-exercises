#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Enter what class you took today: \n";
    std::string class_name{""};
    std::cin >> class_name;
    std::ofstream file("class.txt"); // wrties item into a file
    file << class_name;
    file.close();




    return 0;
}