#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    
    int num{10};
    cout << "Value of num is: " << num << endl;
    cout << "sizeof num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;

    int *p;
    cout << "Value of p is: " << p << endl; // garbage
    cout << "sizeof p is: " << sizeof p << endl;
    cout << "Address of p is: " << &p << endl;

    p = nullptr;
    cout << "Value of p is now: " << p << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "sizeof p1: " << sizeof p1 << endl;
    cout << "sizeof p2: " << sizeof p2 << endl;
    cout << "sizeof p3: " << sizeof p3 << endl;
    cout << "sizeof p4: " << sizeof p4 << endl;
    cout << "sizeof p5: " << sizeof p5 << endl;

    int score{10};
    double high_temp{100.7};
    int *score_ptr {nullptr};

    score_ptr = &score;
    cout << "value of score is: " << score << endl;
    cout << "address of score is: " << &score << endl;
    cout << "value of score_ptr is: " << score_ptr << endl;

    //score_ptr = &high_temp; // compiler error (type)
    return 0;
}