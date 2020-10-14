#pragma once
#include <string>

using namespace std;

class Account {
private:
    string name;
    double balance;
public:
    // declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    // will be declared outside class decl
    string get_name();
    void set_name(string n);
    bool deposit(double amount);
    bool withdraw(double amount);
};