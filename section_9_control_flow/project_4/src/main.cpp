#include <iostream>

using namespace std;

int main() {

    enum Direction {
        left, right, up, down
    };

    Direction heading {left};
    
    switch (heading) {
        case left:
            cout << "Going left!" << endl;
            break;
        case right:
            cout << "Going right!" << endl;
            break;
        //case up:
        //    cout << "Going left!" << endl;
        //    break;
        //case down:
        //    cout << "Going left!" << endl;
        //    break;
        default:
            cout << "Ok" << endl;
    }
    return 0;
}