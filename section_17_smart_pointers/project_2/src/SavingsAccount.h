#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include "Account.h"

class SavingsAccount : public Account {
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &acc);
    private:
        //static constexpr const char *def_name = "Unnamed Savings Account";
        //static constexpr double def_balance = 0.0;
    protected:
        static constexpr double def_int_rate = 0.0;
        double int_rate;
    public:
        SavingsAccount(
            std::string name = def_name,
            double balance = def_balance,
            double int_rate = def_int_rate
        );
        virtual ~SavingsAccount() {}
        virtual bool deposit(double amount) override;
        virtual bool withdraw(double amount) override;
        virtual void print(std::ostream &os) const override;
        //withdraw is inherited
};

#endif // _SAVINGSACCOUNT_H_