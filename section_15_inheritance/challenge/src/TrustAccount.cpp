#include <iostream>
#include "Account.h"
#include "TrustAccount.h"
#include "SavingsAccount.h"

TrustAccount::TrustAccount(
    std::string name, double balance, double int_rate, int n_withdrawals
) : SavingsAccount{name, balance, int_rate}, n_withdrawals{n_withdrawals} {
}

bool TrustAccount::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount) {
    if (n_withdrawals > max_withdrawals) {
        std::cout << "failed - reached max withdrawals." << std::endl;
        return false;
    }
    else if (amount >= max_frac_per_withdrawal*balance) {
        std::cout << "failed - withdrawal amount exceeds 20% of total"
            << std::endl;
        return false;
    } 
    else if (SavingsAccount::withdraw(amount)) {
        ++n_withdrawals;
        std::cout << "Trust account withdrawals total: " << n_withdrawals
            << std::endl;
        return true;
    }
    return false;
        
}