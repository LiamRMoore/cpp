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
        Player(
            string name_val = "None",
            int health_val = 0,
            int xp_val = 0
        );
};

// constructor initialisation lists
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three args constructor" << endl;
}

int main() {
    Player empty;
    Player another {"Another"};
    Player hero {"Hero", 150};
    Player frank {"Frank", 100, 13};
    //frank.set_name("Frank");
    //cout << frank.get_name() << endl;
    return 0;
}