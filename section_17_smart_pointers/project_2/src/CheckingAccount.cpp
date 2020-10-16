#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"

//CheckingAccount::CheckingAccount() : Account::Account{} {
//    std::cout << "no args checking acct constructor" << std::endl;
//}

CheckingAccount::CheckingAccount(std::string name, double balance) 
    : Account{name, balance} {
    std::cout << "two args checking account constructor" << std::endl;
}

void CheckingAccount::print(std::ostream &os) const {
    os << "CheckingAccount print" << std::endl;
}

bool CheckingAccount::withdraw(double amount) {
    std::cout << "Checking account withdrawal for " << amount << std::endl;
    return Account::withdraw(amount+1.50);
}


bool CheckingAccount::deposit(double amount) {
    return Account::deposit(amount);
}