#include <string>
#include "account.h"

using namespace std;


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