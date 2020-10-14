#include <iostream>
#include "Mystring.h"


using namespace std;


int main() {

    Mystring empty; // no-arg constr.
    Mystring larry("Larry"); // normal constr.
    Mystring stooge {"Larry"}; // copy constr.

    empty.display();
    larry.display();
    stooge.display();
    return 0;
}