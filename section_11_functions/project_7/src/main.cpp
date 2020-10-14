#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int num = 100);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Print int " << num << endl;
}


void print(double num) {
    cout << "Print double " << num << endl;
}

void print(string s) {
    cout << "Printing string " << s << endl;
}

void print(string s1, string s2) {
    cout << "Printing 2 strings: " << s1 << ", and " << s2 << endl;
}

void print(vector<string> vs) {
    cout << "Printing vector" << endl;
    for (auto e: vs)
        cout << e << endl;
    cout << endl;
}


int main() {
    print();
    print(100);
    print('A'); // char always promoted to int: 65 ASCII
    print(123.5);
    print(123.3F); // float is promoted to double
    print("C-style string"); // converted to C++ string
    string s {"C++ string"};
    print(s);

    vector<string> three_stooges {"AOJ", "AIHW", "JOG"};
    print(three_stooges);
    return 0;
}

