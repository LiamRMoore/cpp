#include <iostream>

using namespace std;

int main() {

    // int num {};

    // cout << "Enter integer: " << endl;
    // cin >> num;

    // if (num % 2 == 0)
    //     cout << "Even" << endl;
    // else
    //     cout << "Odd" << endl;

    // cout << ((num % 2 == 0) ? "Even" : "Odd") << endl;


    int num1{}, num2{};
    cout << "Enter two integeres separated by space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "Largest: " <<  ((num1 > num2) ? num1  : num2 ) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2 ) << endl;
    }
    else {
        cout << "same!" << endl;
    }

    return 0;
}