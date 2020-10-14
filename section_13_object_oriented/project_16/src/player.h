#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        // STATIC (i.e. class-level!)
        static int num_players;
        string name;
        int health;
        int xp;
    public:
        static int get_num_players();
        string get_name() const; // need const here!
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
        Player(const Player &source);
        // destructor
        ~Player();
};

#endif // _PLAYER_H_