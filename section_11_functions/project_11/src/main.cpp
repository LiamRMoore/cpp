#include <iostream>
#include <vector>
#include <string>

using namespace std;

void func2(int &x, int y, int z) {
    x+= y+z;
}

int func1(int a, int b) {
    int result {};
    result = a + b;
    func2(result, a , b);
    return result;
}

int main() {

    int x {10};
    int y {20};
    int z {};

    z = func1(x, y);
    cout << z << endl;

    return 0;
}

/*

stack example

main:
    push space for return value
    push space for parameters
    push return address
    transfer control to func1 (jmp)

func1:
    push address of previous activation record
    push register values that will need to be restored before returning to caller
    perform code in func1
    restore register values
    restore previous activation record (move the stack pointer)
    store any function result
    transfer control to return address (jmp)

main:
    pop the parameters
    pop the return value

*/