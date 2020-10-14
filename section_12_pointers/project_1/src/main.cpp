#include <iostream>
#include <vector>
using namespace std;


int main() {
    int *p;
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "Value of p: " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Size of p: " << sizeof p << endl;
    p = nullptr; // set p to point nowhere
    cout << "Value of p is: " << p << endl;

    // these are all the same size despite the vars they are pointing to being
    // different - just memory addresses!
    cout << sizeof p2 << sizeof p3 << sizeof p4 << sizeof p5 << endl;

    double high_temp {100.7}, low_temp {37.2};
    double *temp_ptr {nullptr};
    //temp_ptr = nullptr;
    temp_ptr = &high_temp;
    cout << temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << temp_ptr << endl;
    return 0;
}