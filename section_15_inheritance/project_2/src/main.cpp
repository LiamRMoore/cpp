#include <iostream>
//#include "Account.h"
//#include "SavingsAccount.h"

using namespace std;


class Base {
    public:
        int a{0};
        // member method has access to all
        void display() { cout << a << ", " << b << ", " << c << endl;}
    protected:
        int b{0};
    private:
        int c{0};
};

class Derived : public Base {
    public:
        void access_base_members() {
            // public inheritance:
            a = 100; // public -> public, OK
            b = 200; // protected -> protected, OK
            //c = 300; // not accessble from derived, compiler error
        }
};


int main() {

    cout << "=== Base member access from base objects ========= " << endl;
    Base base;
    base.a = 100;
    // base.b = 200; // compiler err - protected
    // base.c = 300; // compiler err - private
    // protected == private (for objects!)

    cout << "=== Base member access from derived objects ======= " << endl;
    Derived d;
    d.a = 100; // fine?
    //d.b = 200; // err priv
    //d.c = 300; // err prot
    return 0;
}