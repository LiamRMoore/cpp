#include <iostream>

// import everything in std namespace
using namespace std;


int main() {
    cout << "enter width: ";
    int room_width {0};
    cin >> room_width;

    cout << "enter length: ";
    int room_length {0};
    cin >> room_length;

    cout << "area is: " << room_width * room_length << "m^2" << endl;
    
    return 0;
}