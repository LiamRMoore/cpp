#pragma once
#include <iostream>
#include <string>
#include "Account.h"

// has name, balance and fee of $1.50 per withdrawal

class CheckingAccount : public Account {
    private:
        // 
    protected:
        static constexpr double withdrawal_fee {1.50};
    public:
        //CheckingAccount();
        CheckingAccount(std::string name = def_name, double balance = def_balance);
        virtual ~CheckingAccount() {}
        virtual bool withdraw(double amount) override;
        virtual bool deposit(double amount) override;
        virtual void print(std::ostream &os) const override;
};