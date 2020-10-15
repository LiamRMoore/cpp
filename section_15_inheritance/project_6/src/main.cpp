#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;


int main() {
    
    cout << "== account ==" << endl;
    Account a1{1000.0};
    cout << a1 << endl;

    a1.deposit(500.0);
    cout << a1 << endl;

    a1.withdraw(1000.0);
    cout << a1 << endl;

    a1.withdraw(5000.0);
    cout << a1 << endl;

    cout << "== savings account ==" << endl;
    SavingsAccount s1{1000.0, 0.03};
    cout << s1 << endl;

    s1.deposit(500.0);
    cout << s1 << endl;

    s1.withdraw(1000.0);
    cout << s1 << endl;

    s1.withdraw(5000.0);
    cout << s1 << endl;
    return 0;
}