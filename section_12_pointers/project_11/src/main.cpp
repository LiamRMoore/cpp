#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    int num {100};
    int &ref {num};

    cout << num << endl;
    cout << ref << endl; 

    num = 200;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n--------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    // makes copies - unchanged
    for (auto str: stooges)
        str = "Funny";
    for (auto str: stooges)
        cout << str;
    
    cout << "\n---------------------" << endl;

    // reference
    for (auto &str: stooges)
        str = "Funny";
    for (auto const &str: stooges)
        cout << str;
    
    cout << endl;
    return 0;
}