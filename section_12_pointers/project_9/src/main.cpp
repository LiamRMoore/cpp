#include <iostream>
#include <vector>
#include <string>

using namespace std;


void display(const vector<string> *const v) {
    //(*v).at(0) = "Funny"; // compiler error!
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
    //v = nullptr; // compiler error!
}


// can't make const pointer here since increment pointer
void display(const int *array, int sentinel) {
    while (*array != sentinel) 
        cout << *array++ << " ";
    cout << endl;
}


int main() {

    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);

    cout << endl;
    return 0;
}