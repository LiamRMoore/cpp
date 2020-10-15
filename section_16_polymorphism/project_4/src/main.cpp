#include <iostream>

using namespace std;

// This class uses dynamic polymorphism for the withdraw method
class Base {
    public:
        virtual void say_hello() const {
            cout << "Hello Base" << endl;
        }
        virtual ~Base() {}
};

class Derived : public Base {
    public:
        // optional to put virtual kw here
        virtual void say_hello() const override {
            cout << "Hello Derived" << endl;
        }
        virtual ~Derived() {}
};

int main() {

    Base *p1 = new Base;
    Derived *p2 = new Derived;
    Base *p3 = new Derived;

    p1->say_hello();
    p2->say_hello();
    p3->say_hello();

    return 0;
}