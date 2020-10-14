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
        string get_name() { return name; }
        int get_health() { return health; }
        int get_xp() { return xp; }
        // constructor
        Player(
            string name_val = "None",
            int health_val = 0,
            int xp_val = 0
        );
        // copy constructor
        Player(const Player &source) 
            //: name{source.name}, health{source.health}, xp{source.xp} {
            : Player {source.name, source.health, source.xp} {
                cout << "In copy constructor for " << source.name << endl;
        }
        // destructor
        ~Player() { cout << "Destructor: " << name << endl;}
};

// constructor initialisation lists
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three args constructor" << endl;
}

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "HP: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}



int main() {
    Player empty;
    Player another {"Another"};
    Player hero {"Hero", 150};
    Player frank {"Frank", 100, 13};

    Player fronk {frank};
    cout << frank.get_health() << frank.get_xp() << frank.get_name() << endl;
    cout << fronk.get_health() << fronk.get_xp() << fronk.get_name() << endl;
    //frank.set_name("Frank");
    //cout << frank.get_name() << endl;
    display_player(empty);
    display_player(fronk);
    return 0;
}