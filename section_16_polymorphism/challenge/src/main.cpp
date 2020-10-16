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
    //vector<Account> accounts;
    //accounts.push_back(Account{});
    //accounts.push_back(Account{"Larry"});
    //accounts.push_back(Account{"Moe",2000});
    //accounts.push_back(Account{"Curly", 5000});

    //display(accounts);
    //deposit(accounts, 1000);
    //withdraw(accounts, 2000);

    // Savings
    vector<Account*> sav_accounts;
    Account *sa1 = new SavingsAccount{};
    Account *sa2 = new SavingsAccount{"Superman"};
    Account *sa3 = new SavingsAccount{"Batman", 20'000'000'000};
    Account *sa4 = new SavingsAccount{"Wonderwoman", 5000, 5.0};

    sav_accounts.push_back(sa1);
    sav_accounts.push_back(sa2);
    sav_accounts.push_back(sa3);
    sav_accounts.push_back(sa4);

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking
    vector<Account*> chk_accounts;
    Account *ca1 = new CheckingAccount{};
    Account *ca2 = new CheckingAccount{"Superman", 1500};
    Account *ca3 = new CheckingAccount{"Batman", 20'000'000'000};
    chk_accounts.push_back(ca1);
    chk_accounts.push_back(ca2);
    chk_accounts.push_back(ca3);

    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);

    // Trust
    vector<Account*> trust_accounts;
    Account *ta1 = new TrustAccount{};
    Account *ta2 = new TrustAccount{"Superman"};
    Account *ta3 = new TrustAccount{"Wonderwoman", 5000, 5.0};
    trust_accounts.push_back(ta1);
    trust_accounts.push_back(ta2);
    trust_accounts.push_back(ta3);

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