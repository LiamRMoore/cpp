#pragma once
#include <iostream>
#include <string>
#include "Account.h"
#include "SavingsAccount.h"

// has name, balance and interest rate
// deposit as with savings account - BUT: $5000. or more will receive $50. bonus
// only allows 3 withdrawals total and each must be less than 20% of balance

class TrustAccount : public SavingsAccount {
    private:
        static constexpr const char *def_name = "Unnamed Trust Account";
        static constexpr double bonus_threshold {5000};
        static constexpr double bonus_amount {50};
        static constexpr short max_withdrawals {3};
        static constexpr double max_frac_per_withdrawal {0.2};
        static constexpr int def_n_withdrawals {0};
        int n_withdrawals;
    protected:
        //
    public:
        TrustAccount(
            std::string name = def_name,
            double balance = def_balance,
            double int_rate = def_int_rate,
            int n_withdrawals = def_n_withdrawals
        );
        bool deposit(double amount);
        bool withdraw(double amount);
};