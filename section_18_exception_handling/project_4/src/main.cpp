#include <iostream>
#include <string>
using namespace std;

void func_b();
void func_c();

void func_a() {
    cout << "Start A" << endl;
    func_b();
    cout << "End A" << endl;
}

void func_b() {
    cout << "Start B" << endl;
    try {
        func_c();
    }
    catch (int &ex) {
        cout << "caught error in B" << endl;
    }
    
    cout << "End B" << endl;
}

void func_c() {
    cout << "Start C" << endl;
    throw 100;
    cout << "End C" << endl;
}

int main() {

    cout << "Start main" << endl;
    try {
        func_a();
    }
    catch (int &ex) {
        cout << "Caught exception in main" << endl;
    }
        
    cout << "End main" << endl;

    return 0;
}