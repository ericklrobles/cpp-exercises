//Build a program that represents a basic game character using a class. Include attributes like name, health, and abilities, along with functions for character actions.
#include <iostream>
using namespace std;

class character{
    private:
    string name;
    int health;
    string abilities;
    
    public:
    character(const string characterName, int characterHealth, string characterAbilities);


};




int main()
{
    character player("Link", 10, "Time & Weather Manipulation");
    
    



    return 0;
}