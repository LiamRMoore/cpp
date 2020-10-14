#include <iostream>

using namespace std;

int main() {

    unsigned int cents{};
    cout << "Enter no. cents: " << endl;
    cin >> cents;

    unsigned int dollars{}, quarters{}, dimes{}, nickels{}, pennies{}, balance{};

    dollars = cents / 100;
    balance = cents % 100;
    quarters = balance / 25;    
    balance %= quarters;
    dimes = balance / 10;
    balance %= 10;
    nickels = balance / 5;
    balance %= 5;
    pennies = balance;

    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    return 0;
}