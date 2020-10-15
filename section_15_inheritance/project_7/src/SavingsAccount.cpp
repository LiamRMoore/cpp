#include <iostream>
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(std::string name, double balance, double int_rate) 
    : Account{name, balance}, int_rate{int_rate} {
    std::cout << "SavingsAccount overloaded 3 args constructor" << std::endl;
}

bool SavingsAccount::deposit(double amount) {
    amount += amount*int_rate/100; // calc interest
    // delegate
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &acc) {
    os << "Savings account: " << acc.name << " has balance: " << acc.balance
    << " and interest rate: " << acc.int_rate << std::endl;
    return os;
}