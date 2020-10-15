#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>


class Account {
        friend std::ostream &operator<<(std::ostream &os, const Account &acc);
    private:
        //  
    protected:
        static constexpr const char *def_name = "Unnamed account";
        static constexpr double def_balance = 0.0;
        std::string name;
        double balance;
    public:
        //Account();
        Account(std::string name = def_name, double balance = def_balance);
        bool deposit(double amount);
        bool withdraw(double amount);
        double get_balance() const;
};

#endif // _ACCOUNT_H_