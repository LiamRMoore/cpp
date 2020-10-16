#include <iostream>
#include <vector>
#include <memory>

#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

using namespace std;

class Test {
    private:
        int data;
    public:
        Test() : data{0} {cout << "Test constructor (" << data << ")" << endl;}
        Test(int data) : data{data} {
            cout << "Test constructor (" << data << ")" << endl;
        }
        int get_data() const {return data;}
        ~Test() {cout << "Test destructor (" << data << ")" << endl;}
};


int main() {

    Test t1 {1000};
    // with raw pointers
    Test *p_t1 {new Test {2000}};
    delete p_t1;
    // with unique pointer
    std::unique_ptr<Test> up_t1 {new Test{3000}};
    // with make_unique function
    std::unique_ptr<Test> up_t2 = std::make_unique<Test>(1000); 

    std::unique_ptr<Test> up_t3; 
    //up_t3 = up_t1; // compiler error - not allowed to assign
    up_t3 = std::move(up_t1); // CAN move

    if (!up_t1)
        cout << "up_t1 is nullptr" << endl;

    // smart pointers with dynamic polymorphism
    std::unique_ptr<Account> a1 = std::make_unique<CheckingAccount>("Liam", 5000.);
    cout << *a1 << endl;
    a1->deposit(5000.);

    // create vector of smart pointers
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(make_unique<CheckingAccount>("James", 1000));
    accounts.push_back(make_unique<SavingsAccount>("Billy", 4000, 5.2));
    accounts.push_back(make_unique<TrustAccount>("Bobby", 5000, 4.5));

    for (const auto &acc: accounts)
        cout << *acc << endl;
    return 0;
}