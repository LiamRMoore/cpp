#pragma once
#include <iostream>
#include <string>
#include "Account.h"

// has name, balance and fee of $1.50 per withdrawal

class CheckingAccount : public Account {
    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &acc);
    private:
        // 
    protected:
        static constexpr double withdrawal_fee {1.50};
    public:
        //CheckingAccount();
        CheckingAccount(std::string name = def_name, double balance = def_balance);
        bool withdraw(double amount);
};