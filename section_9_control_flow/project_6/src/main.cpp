#include <iostream>
#include <vector>

using namespace std;

int main() {

    for (int i {1}; i <= 10; ++i)
        cout << i << endl;
    cout << "===" << endl;
    // 
    for (int i {1}; i <= 10; i+=2)
        cout << i << endl;
    cout << "===" << endl;
    // decrement
    for (int i {10}; i > 0; i--)
        cout << i << endl;
    cout << "Blastoff" << endl;
    // for if
    for (int i {10}; i <= 100; i+=10) {
        if (i % 15 == 0)
            cout << i << endl;
    }
    // comma expression
    for (int i{1}, j{5}; i <= 5; i++, j++)
        cout << "i: " << i << " j: " << j << endl;
    // conditional expr
    for (int i{1}; i < 100; i++) 
        cout << i << ((i%10 == 0)? "\n" : " ");
    // vector
    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;
    return 0;
}