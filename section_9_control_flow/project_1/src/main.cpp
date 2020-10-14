#include <iostream>

using namespace std;

int main() {

    int num {};
    const int min {10}, max {100};
    cout << "Enter a number between " << min << " and " << max << ":" << endl;
    cin >> num;

    if (num >= min) {
        cout << "\n================ If 1 ================" << endl;
        cout << num << " >= " << min << endl;
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max) {
        cout << "\n================ If 2 ================" << endl;
        cout << num << " <= " << max << endl;

        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    if (num >= min && num <= max) {
        cout << "\n================ If 3 ================" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statements 1 and 2 must also display" << endl;
    }

    if (num == min || num == max) {
        cout << "\n================ If 4 ================" << endl;
        cout << num << " is right on a boundary " << endl;
    }

    return 0;
}