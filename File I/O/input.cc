#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int main()
{

    std::ifstream file("class.txt"); // reading input from this given file inside
    std::string class_name{""};
    file >> class_name; // read input from the file
    
    std::cout << "You took " << class_name << " class today! \n";
    file.close();

    return 0;
}