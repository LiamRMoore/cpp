#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

class IPrintable {
    /**
     * Printable interface delegates << to derived print method 
    **/
    friend std::ostream &operator<<(std::ostream &os, const IPrintable &obj);
    public:
        virtual void print(std::ostream &os) const = 0;
        virtual ~IPrintable() = default;
};

class Account : public IPrintable {
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
        virtual ~Account() {}
        virtual bool deposit(double amount) = 0;
        virtual bool withdraw(double amount) = 0;
        virtual void print(std::ostream &os) const override;
        double get_balance() const;
};

#endif // _ACCOUNT_H_