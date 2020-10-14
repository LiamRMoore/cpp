#include <iostream>
#include <string>
#include <vector>
#include "player.h"

using namespace std;


void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}



int main() {
    Player hero {"Hero", 150};
    display_active_players();
    const Player frank {"Frank", 100, 13};
    display_active_players();

    {
        Player frunk{"Frunk"};
        display_active_players();
    }

    display_active_players();
    Player *blork = new Player {"Blork" , 56, 14};
    display_active_players();
    //frank.set_name("Fronk!");
    delete blork;
    display_active_players();
    // defined with const
    return 0;
}