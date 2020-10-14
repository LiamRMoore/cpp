#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    string name;
    double balance;
public:
    // declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    // will be declared outside class decl
    string get_name();
    void set_name(string n);
    bool deposit(double amount);
    bool withdraw(double amount);
};


string Account::get_name() {
    return name;
}

void Account::set_name(string n) {
    name = n;
}

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else
        return false;
}

int main() {

    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit failed!" << endl;

    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Withdrawal failed: insufficient funds!" << endl;

    if (frank_account.withdraw(1500))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Withdrawal failed: insufficient funds!" << endl;
    
    cout << endl;
    return 0;
}