#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"

using namespace std;


int main() {

    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe",2000});
    accounts.push_back(Account{"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings
    vector<SavingsAccount> sav_accounts;
    sav_accounts.push_back(SavingsAccount{});
    sav_accounts.push_back(SavingsAccount{"Superman"});
    sav_accounts.push_back(SavingsAccount{"Batman", 20'000'000'000});
    sav_accounts.push_back(SavingsAccount{"Wonderwoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking
    vector<CheckingAccount> chk_accounts;
    chk_accounts.push_back(CheckingAccount{});
    chk_accounts.push_back(CheckingAccount{"Superman", 1500});
    chk_accounts.push_back(CheckingAccount{"Batman", 20'000'000'000});

    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);

    // Trust
    vector<TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount{});
    trust_accounts.push_back(TrustAccount{"Superman"});
    trust_accounts.push_back(TrustAccount{"Wonderwoman", 5000, 5.0});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 2000);
    deposit(trust_accounts, 5200);
    withdraw(trust_accounts, 2000);
    withdraw(trust_accounts, 1000);
    withdraw(trust_accounts, 1000);
    withdraw(trust_accounts, 100.);
    withdraw(trust_accounts, 50.);
    return 0;
}