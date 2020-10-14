#include <iostream>

using namespace std;

int main() {

    int num {};
    const int lower {10};
    const int upper {20};

    cout << boolalpha;

    cout << "Enter int (" << lower << " - " << upper << ")" << endl;
    cin >> num;

    cout << num << " is between " << lower << " and " << upper << ": " 
    << (lower < num && num < upper) << endl;
    return 0;
}