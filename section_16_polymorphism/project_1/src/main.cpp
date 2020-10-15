#include <iostream>
#include <memory>
//#include "Account.h"
//#include "SavingsAccount.h"

using namespace std;

class Base {
    public:
        void say_hello() const {
            cout << "Hello from Base" << endl;
        }
};

class Derived : public Base {
    public:
        void say_hello() const {
            cout << "Hello from Derived" << endl;
        }
};

void greetings(const Base &obj) {
    cout << "Greetings." << endl;
    obj.say_hello();
}

int main() {

    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    // static binding - calls Base say_hello!
    greetings(d);

    Base *ptr = new Derived;
    ptr->say_hello();

    // even a smart pointer is statically bound!
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello();

    delete ptr;

    return 0;
}