#include <iostream>
#include <vector>

using namespace std;


// print is virtual -> dynamic binding to derived objects
class IPrintable {
    friend std::ostream &operator<<(std::ostream &os, const IPrintable &obj);
    public:
        virtual void print(std::ostream &os) const = 0;
};

// base class ref to IPrintable
std::ostream &operator<<(std::ostream &os, const IPrintable &obj) {
    obj.print(os);
    return os;
}

class Account : public IPrintable {
    public:
        virtual void withdraw(double amount) {
            cout << "Account withdraw" << endl;
        }
        virtual void print(std::ostream &os) const override {
            os << "Account display";
        }
        virtual ~Account() {}
};

class Checking : public Account {
    public:
        virtual void withdraw(double amount) {
            cout << "Checking withdraw" << endl;
        }
        virtual void print(std::ostream &os) const override {
            os << "Checking display";
        }
        virtual ~Checking() {}
};

class Dog: public IPrintable {
    public:
        virtual void print(std::ostream &os) const override {
            os << "Woof woof motherfucker";
        }
};


void print(const IPrintable &obj) {
    cout << obj << endl;
}


int main() {

    Account a;
    cout << a << endl;

    Checking c;
    cout << c << endl;

    Account *p1 = new Account;
    cout << *p1 << endl;

    // dynamic polymorphism
    Account *p2 = new Checking;
    cout << *p2 << endl;

    Dog *dog = new Dog;
    cout << *dog;

    print(*dog);
    print(*p2);

    return 0;
}