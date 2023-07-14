//Build a program that represents a basic game character using a class. Include attributes like name, health, and abilities, along with functions for character actions.
#include <iostream>
using namespace std;

class character{
    private:
          string name;
          int health;
          string abilities;
    
    public:
        character(const string characterName, int characterHealth, string characterAbilities)
        : name(characterName), health(characterHealth), abilities(characterAbilities){
               
        } 
        void swordAttack(){
            cout << name << " is performing a sword attack & saying HIYAH!" << endl;
        }

};



int main()
{
    character player("Link", 10, "Time & Weather Manipulation");
    player.swordAttack();


    return 0;
}