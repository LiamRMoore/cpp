#include <iostream>
#include "SavingsAccount.h"

std::ostream &operator<<(std::ostream &os, const SavingsAccount &acc) {
    os << "Savings account balance: " << acc.balance;
    return os;
}

SavingsAccount::SavingsAccount() : SavingsAccount{0.0, 0.0} {
    std::cout << "SavingsAccount no args constructor" << std::endl;
}

SavingsAccount::SavingsAccount(double balance, double int_rate) 
    : Account{balance}, int_rate{int_rate} {
    std::cout << "SavingsAccount overloaded two args constructor" << std::endl;
}

void SavingsAccount::deposit(double amount) {
    amount += amount*int_rate; // calc interest
    // delegate
    Account::deposit(amount);
}