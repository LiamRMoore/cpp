#include <iostream>

using namespace std;

// This class uses dynamic polymorphism for the withdraw method
class Account {
    public:
        virtual void withdraw(double amount) {
            cout << "Account withdraw" << endl;
        }
        virtual ~Account() { cout << "Account destructor" << endl; }
};

class Savings : public Account {
    public:
        // optional to put virtual kw here
        virtual void withdraw(double amount) {
            cout << "Savings withdraw" << endl;
        }
        virtual ~Savings() { cout << "Savings destructor" << endl; }
};

class Checking : public Account {
    public:
        virtual void withdraw(double amount) {
            cout << "Checking withdraw" << endl;
        }
        virtual ~Checking() { cout << "Checking destructor" << endl; }
};

class Trust : public Account {
    public:
        virtual void withdraw(double amount) {
            cout << "Trust withdraw" << endl;
        }
        virtual ~Trust() { cout << "Trust destructor" << endl; }
};

int main() {

    cout << "\n === Pointers ===" << endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    cout << "withdrawing..." << endl;
    p1 -> withdraw(1000);
    p2 -> withdraw(1000);
    p3 -> withdraw(1000);
    p4 -> withdraw(1000);

    cout << "\n === Clean up ===" << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}