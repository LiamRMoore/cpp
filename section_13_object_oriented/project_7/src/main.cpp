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
        string get_name() {
            return name;
        }
        // constructors
        // default - no args
        Player() {
            name = "None";
            health = 100;
            xp = 3;
        }
        // custom 3 arg constructor - since this is defined compiler default 
        // generated no-arg constructor is gone
        Player(string name_val, int health_val, int xp_val) {
            name = name_val;
            health = health_val;
            xp = xp_val;
        }
};

int main() {
    Player hero;
    Player frank {"Frank", 100, 13};
    frank.set_name("Frank");
    cout << frank.get_name() << endl;
    return 0;
}