#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include "Account.h"

class SavingsAccount : public Account {
    public:
        double int_rate;
        void deposit(double amount);
        void withdraw(double amount);
        SavingsAccount();
        ~SavingsAccount();
};

#endif // _SAVINGSACCOUNT_H_