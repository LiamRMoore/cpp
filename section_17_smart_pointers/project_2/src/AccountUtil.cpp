#include <iostream>
#include "AccountUtil.h"

// display acct objs in vector
void display(const std::vector<Account*> &accounts) {
    std::cout << "\n=== Accounts ===" << std::endl;
    for (const auto &a: accounts)
        std::cout << *a << std::endl;
}

void deposit(std::vector<Account*> &accounts, double amount) {
    std::cout << "\n=== Depositing to accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a->deposit(amount))
            std::cout << *a << " successful deposit" << std::endl;
        else
            std::cout << *a << " FAILED deposit" << std::endl;
    }
}

void withdraw(std::vector<Account*> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a->withdraw(amount))
            std::cout << *a << " successful withdrawal" << std::endl;
        else
            std::cout << *a << " FAILED withdrawal" << std::endl;
    }
}

