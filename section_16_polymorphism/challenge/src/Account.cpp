#include <iostream>
#include "Account.h"

std::ostream &operator<<(std::ostream &os, const IPrintable &obj) {
    obj.print(os);
    return os;   
}

Account::Account(std::string name, double balance)
    : name{name}, balance{balance} {
}

//Account::Account() {}

void Account::print(std::ostream &os) const {
    os << "Account print" << std::endl;
}

bool Account::deposit(double amount) {
    if (amount < 0)
        return false;
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    std::cout << "insufficient funds" << std::endl;
    return false;
}

double Account::get_balance() const {
    return balance;
}