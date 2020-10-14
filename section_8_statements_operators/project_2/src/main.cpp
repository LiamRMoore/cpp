#include <iostream>

using namespace std;

int main() {

    bool eq_result{false}, neq_result{false};
    int n1{}, n2{};
    cin >> n1 >> n2;
    eq_result = (n1 == n2);
    neq_result = (n1 != n2);
    cout << boolalpha;
    cout << eq_result << endl;
    cout << neq_result << endl;

    double d1{}, d2{};
    cin >> d1 >> d2;
    eq_result = (d1 == d2);
    neq_result = (d1 != d2);
    cout << boolalpha;
    cout << eq_result << endl;
    cout << neq_result << endl;

    return 0;
}