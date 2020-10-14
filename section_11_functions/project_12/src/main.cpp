#include <iostream>
#include <vector>
#include <string>

using namespace std;

unsigned long long factorial (unsigned long long n) {
    if (n==0)
        return 1;
    return n * factorial(n-1);
}

unsigned long long fib (unsigned long long n) {
    if (n<=1)
        return n;
    return fib(n-1) + fib(n-2); //recursion
}

int main() {
    cout << factorial(8) << endl;
    cout << fib(30) << endl;
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