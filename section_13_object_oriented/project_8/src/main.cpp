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
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);
};

// constructor initialisation lists
Player::Player() 
    : name{"None"}, health{0}, xp{0} {
} 

Player::Player(string name_val)
    : name{name_val}, health{0}, xp{0} {
}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
}

int main() {
    Player hero;
    Player frank {"Frank", 100, 13};
    //frank.set_name("Frank");
    //cout << frank.get_name() << endl;
    return 0;
}