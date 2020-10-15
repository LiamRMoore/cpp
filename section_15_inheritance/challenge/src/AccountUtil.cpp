#include <iostream>
#include "AccountUtil.h"

// display acct objs in vector
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ===" << std::endl;
    for (const auto &a: accounts)
        std::cout << a << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.deposit(amount))
            std::cout << a << " successful deposit" << std::endl;
        else
            std::cout << a << " FAILED deposit" << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.withdraw(amount))
            std::cout << a << " successful withdrawal" << std::endl;
        else
            std::cout << a << " FAILED withdrawal" << std::endl;
    }
}


// display savings acct objs in vector
void display(const std::vector<SavingsAccount> &accounts) {
    std::cout << "\n=== Savings Accounts ===" << std::endl;
    for (const auto &a: accounts)
        std::cout << a << std::endl;
}

void deposit(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "\n=== Depositing to savings accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.deposit(amount))
            std::cout << a << " successful deposit" << std::endl;
        else
            std::cout << a << " FAILED deposit" << std::endl;
    }
}

void withdraw(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from savings accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.withdraw(amount))
            std::cout << a << " successful withdrawal" << std::endl;
        else
            std::cout << a << " FAILED withdrawal" << std::endl;
    }
}

// for checking acct
void display(const std::vector<CheckingAccount> &accounts) {
    std::cout << "\n=== Checking Accounts ===" << std::endl;
    for (const auto &a: accounts)
        std::cout << a << std::endl;
}

void deposit(std::vector<CheckingAccount> &accounts, double amount) {
    std::cout << "\n=== Depositing to checking accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.deposit(amount))
            std::cout << a << " successful deposit" << std::endl;
        else
            std::cout << a << " FAILED deposit" << std::endl;
    }
}

void withdraw(std::vector<CheckingAccount> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from checking accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.withdraw(amount))
            std::cout << a << " successful withdrawal" << std::endl;
        else
            std::cout << a << " FAILED withdrawal" << std::endl;
    }
}


// for trust acct
void display(const std::vector<TrustAccount> &accounts) {
    std::cout << "\n=== Trust Accounts ===" << std::endl;
    for (const auto &a: accounts)
        std::cout << a << std::endl;
}

void deposit(std::vector<TrustAccount> &accounts, double amount) {
    std::cout << "\n=== Depositing to trust accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.deposit(amount))
            std::cout << a << " successful deposit" << std::endl;
        else
            std::cout << a << " FAILED deposit" << std::endl;
    }
}

void withdraw(std::vector<TrustAccount> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from trust accounts ===" << std::endl;
    for (auto &a: accounts) {
        if (a.withdraw(amount))
            std::cout << a << " successful withdrawal" << std::endl;
        else
            std::cout << a << " FAILED withdrawal" << std::endl;
    }
}