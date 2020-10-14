#include "player.h"

// static attributes
int Player::num_players {0};

int Player::get_num_players() {
    return num_players;
}

// constructor
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        ++num_players;
        cout << "Three args constructor" << endl;
}

// copy constructor
Player::Player(const Player &source) 
    : Player {source.name, source.health, source.xp} {
        cout << "In copy constructor for " << source.name << endl;
}

// destructor
Player::~Player() {
    --num_players;
}


void Player::set_name(string name_val) {
    name = name_val;
}

string Player::get_name() const {
    return name;
}

void display_player(const Player &p) {
    cout << "Name: " << p.get_name() << endl;
    //cout << "HP: " << p.get_health() << endl;
    //cout << "XP: " << p.get_xp() << endl;
}