#include <iostream>

int main() {
    int num;
    // << insertion operator
    std::cout << "give number:" << std::endl;
    // >> extraction operator
    std::cin >> num;
    std::cout << "OK it was: " << num << std::endl;
    return 0;
}