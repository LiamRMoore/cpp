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

bool SavingsAccount::withdraw(double amount) {
    return Account::withdraw(amount);
}

void SavingsAccount::print(std::ostream &os) const {
    os << "SavingsAccount print";
}