#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // while loops
    int num {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;

    while (num > 0) { 
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;
    

    //int num2 {};
    cout << "Enter positive integer to count up to: " << endl;
    cin >> num;

    unsigned short i{1};
    while (i <= num) {
        cout << i << endl;
        i++;
    }

    cout << "Enter integer less than 100: ";
    cin >> num;

    while (num > 99) {
        cout << "Enter integer less than 100: ";
        cin >> num;
    }

    bool done {false};

    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> num;
        if (num < 2 || num > 4)
            cout << "Out of range, try again" << endl;
        else {
            cout << "Good" << endl;
            done = true;
        }
            
    }
    return 0;
}