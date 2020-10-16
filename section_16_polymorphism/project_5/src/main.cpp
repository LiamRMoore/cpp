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


void do_withdraw(Account &a, double amount) {
    a.withdraw(amount);
}

int main() {

    Account a;
    Account &ref_a = a;
    Savings s;
    Checking c;
    Trust t;
    Account &ref_t = t; // bound dynamically: Trust::withdraw

    ref_a.withdraw(1000);
    ref_t.withdraw(1000);

    do_withdraw(a, 1000);
    do_withdraw(s, 2000);
    do_withdraw(c, 3000);
    do_withdraw(t, 4000);

    return 0;
}