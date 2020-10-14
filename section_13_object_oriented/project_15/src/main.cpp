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
        string get_name() const { return name; } // need const here!
        int get_health() { return health; }
        int get_xp() { return xp; }
        void set_name(string);
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

void Player::set_name(string name_val) {
    name = name_val;
}

void display_player(const Player &p) {
    cout << "Name: " << p.get_name() << endl;
    //cout << "HP: " << p.get_health() << endl;
    //cout << "XP: " << p.get_xp() << endl;
}



int main() {
    Player hero {"Hero", 150};
    const Player frank {"Frank", 100, 13};

    //frank.set_name("Fronk!");
    cout << frank.get_name() << endl; // compiler errors if get_name not 
    // defined with const
    return 0;
}