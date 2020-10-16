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

void func(std::shared_ptr<Test> p) {
    cout << "Use count: " << p.use_count() << endl;
}

int main() {

    // use_count - number of shared ptr obkects
    // managing the heap object

    std::shared_ptr<int> p1 {new int {100}};
    cout << "Use count: " << p1.use_count() << endl;

    std::shared_ptr<int> p2 {p1};
    cout << "Use count: " << p2.use_count() << endl;

    std::shared_ptr<int> p3;
    p3 = p1;
    cout << "Use count: " << p3.use_count() << endl;

    p1.reset();
    // this is now nulled, hence use_count is 0!
    cout << "Use count: " << p1.use_count() << endl;
    cout << "Use count: " << p2.use_count() << endl;

    cout << "\n ======== \n" << endl;

    std::shared_ptr<Test> ptr = make_shared<Test>(100);
    func(ptr);
    cout << "Use count " << ptr.use_count() << endl;
    {
        std::shared_ptr<Test> ptr1 = ptr;
        cout << "Use count: " << ptr.use_count() << endl;
        {
            std::shared_ptr<Test> ptr2 = ptr;
            cout << "Use count: " << ptr.use_count() << endl;
            ptr.reset();
        }
        cout << "Use count: " << ptr.use_count() << endl;
    }
    cout << "Use count: " << ptr.use_count() << endl;

    cout << "\n ======== \n" << endl;
    std::shared_ptr<Account> acc1 = std::make_shared<TrustAccount>("Larry", 10000, 3.1);
    std::shared_ptr<Account> acc2 = std::make_shared<CheckingAccount>("Moe", 4000);
    std::shared_ptr<Account> acc3 = std::make_shared<SavingsAccount>("Curly", 1000);

    std::vector<std::shared_ptr<Account>> accts;
    accts.push_back(acc1);
    accts.push_back(acc2);
    accts.push_back(acc3);

    for (const auto &acc: accts) {
        cout << *acc << endl;
        cout << "Use count: " << acc.use_count() << endl;
    }
    cout << endl;
    return 0;
}