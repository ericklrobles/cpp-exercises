#include <iostream>
#include <string>
#include <vector>

int main()
{
   std::vector <int> container {1,2,3,4,5};
   std::cout << container.at(0) << "\n"; // .at is to grab a particular item from index
   std::cout << container.size() << "\n"; // .size function to grab size of the index


   return 0;
}