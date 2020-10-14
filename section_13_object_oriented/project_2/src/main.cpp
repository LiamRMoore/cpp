#include <iostream>
#include <string>
#include <vector>

//using namespace std;

class Player {
public:
    // attrs
    std::string name {"Player"};
    int health {100};
    int xp {3};
    // methods
    void talk(std::string text) {
        std::cout << name << " says: " << text << std::endl;
    };
    bool isdead();
};


class Account {
public:
    // attrs
    std::string name {"Account"};
    double balance {0.0};
    // methods
    bool deposit(double bal) {
        balance += bal;
        std::cout << "in deposit: add " << bal << std::endl;
        return true;
    };
    bool withdraw(double bal) {
        balance -= bal;
        std:: cout << "in withdraw: subtract " << bal << std::endl;
        return true;
    };
};


int main() {
    // create players on stack
    Player frank;
    frank.name = "Frank";
    frank.health = 200;
    frank.xp = 50'000;
    frank.talk("hi there");

    // with pointers
    Player *enemy = new Player;
    // explicit dereferencing syntax
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    // arrow operator
    enemy->xp = 15;
    enemy->talk("I will destroy you!");
    delete enemy;

    // Accts
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(300.0);
    return 0;
}