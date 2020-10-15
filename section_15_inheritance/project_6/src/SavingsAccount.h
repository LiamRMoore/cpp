#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include "Account.h"

class SavingsAccount : public Account {
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &acc);
    protected:
        double int_rate;
    public:
        SavingsAccount();
        SavingsAccount(double balance, double int_rate);
        void deposit(double amount);
        //withdraw is inherited
};

#endif // _SAVINGSACCOUNT_H_