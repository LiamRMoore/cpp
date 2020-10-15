#include <iostream>
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount() : int_rate{0.03} {}

SavingsAccount::~SavingsAccount() {}

void SavingsAccount::deposit(double amount) {
    std::cout << "SavingsAccount deposit called with " << amount << std::endl;
}


void SavingsAccount::withdraw(double amount) {
    std::cout << "SavingsAccount withdraw called with " << amount << std::endl;
}