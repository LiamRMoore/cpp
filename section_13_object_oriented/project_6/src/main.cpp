#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    private:
        string name;
        int health;
        int xp;
    public:
        void set_name(string name_val) {
            name = name_val;
        }
        // Overloaded Constructors
        Player() {
            cout << "No args constructor called" << endl;
        }
        Player(string name) {
            cout << "String arg constructor" << endl;
        }
        Player(string name, int health, int xp) {
            cout << "Three arg constructor" << endl;
        }
        // destructor
        ~Player() {
            cout << "Destructor called for " << name << endl;
        }
};



int main() {

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;
    return 0;
}