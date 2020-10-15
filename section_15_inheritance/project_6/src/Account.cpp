#include <iostream>
#include "Account.h"


Account::Account() : Account{0.0} {}

Account::Account(double balance) : balance{balance} {}

Account::~Account() {}

std::ostream &operator<<(std::ostream &os, const Account &acc) {
    os << "Account balance: " << acc.balance;
    return os;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance - amount >= 0)
        balance -= amount;
    else
        std::cout << "insufficient funds" << std::endl;
}