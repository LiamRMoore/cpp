#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int random_number {};
    size_t count {10}; // number to generator
    int min {1}, max {6}; // lower, upper bounds (inclusive)

    // seed
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i{1}; i <= count; ++i) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }

    cout << endl;

    return 0;
}