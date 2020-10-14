#include <iostream>
#include <vector>
#include <string>

using namespace std;

void local_example(int);
void global_example();
void static_local_example();

int num {300}; // global var

void global_example() {
    cout << "\nnum is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example(int x) {
    int num {1000};
    cout << "\nnum is " << num << " in local example - start" << endl;
    num = x;
    cout << "num is " << num << " in local example - end" << endl;
}

void static_local_example(){
    static int num {5000};
    cout << "\nLocal static num is: " << num << " in static_local - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local - end" << endl;
}


int main() {

    int num {100};
    int num1 {500}; // local to main

    cout << "Local num is: " << num << " in main" << endl;


    {// create a new level of scope
        int num {200};
        cout << "Local num is: " << num << " in main " << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num <<  " in main" << endl;

    local_example(num);
    local_example(num);
    global_example();
    global_example();
    static_local_example();
    static_local_example();
    return 0;
}

