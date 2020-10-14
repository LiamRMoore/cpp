#include <iostream>
#include <vector>
#include <string>

using namespace std;

// prototypes
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v); // 

// function bodies
void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear();
}

void print_vector(const vector<string> &v) {
    for (auto e: v)
        cout << e << " ";
    cout << endl;
}

int main() {

    int num{10}, another_num{20};
    
    cout << "num before 1" << endl;
    pass_by_ref1(num);
    cout << "now " << num << endl;

    return 0;
}

