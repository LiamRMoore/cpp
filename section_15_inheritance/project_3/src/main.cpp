#include <iostream>
//#include "Account.h"
//#include "SavingsAccount.h"

using namespace std;


class Base {
    private:
        int value;
    public:
        Base() : value{0} {cout << "Base no-args constructor" << endl;}
        Base(int x) : value{x} {cout << "Base (int) overloaded constructor" << endl;}
        ~Base() { cout << "Base destructor" << endl;}
};

class Derived : public Base {
        using Base::Base; // inherit non-special constructors from Base!
        // will not initialise derived part of objects though
    private:
        int doubled_value;
    public:
        Derived() : doubled_value{0} { cout << "Derived no-args constructor" << endl;}
        Derived(int x) : doubled_value{x*2} { cout << "Derived (int) overloaded constructor" << endl;}
        ~Derived() { cout << "Derived destructor " << endl;}
};


int main() {

    //Base b;
    //Base b{100};
    //Derived d;
    Derived d{1000}; // compiler error if no single-arg const given in derived! 
    // doesn't inherit special constructors
    // unless explicitly instructed, the derived will call the base no-arg ctr!

    return 0;
}