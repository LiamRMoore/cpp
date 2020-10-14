#include <iostream>
#include <string>
#include <vector>


class Player {
private:
    std::string name {"Player"};
    int health;
    int xp;
public:
    void talk(std::string text_to_say) {
        std::cout << name << " says: " << text_to_say << std::endl;
    };
    bool is_dead();
};


int main() {
    Player frank;
    //frank.name = "Frank"; // compiler error - private
    frank.talk("hello there");
    return 0;
}