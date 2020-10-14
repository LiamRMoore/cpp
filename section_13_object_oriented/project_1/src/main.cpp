#include <iostream>
#include <string>
#include <vector>

//using namespace std;

class Player {
    // attrs
    std::string name {"Player"};
    int health {100};
    int xp {3};
    // methods
    void talk(std::string);
    bool isdead();
};


class Account {
    // attrs
    std::string name {"Account"};
    double balance {0.0};
    // methods
    bool deposit(double);
    bool withdraw(double);
};


int main() {
    // create on stack
    Player frank;
    Player hero;
    Account frank_account;
    Account jim_account;

    Player players[] {frank, hero};
    std::vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    // create on heap
    Player *enemy {nullptr};
    enemy = new Player;
    delete enemy;
    return 0;
}