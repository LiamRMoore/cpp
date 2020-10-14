#include <iostream>
#include "Mystring.h"
#include <vector>

using namespace std;


int main() {

    Mystring a {"hello"}; // overloaded constructor
    a = Mystring {"Hola"}; // overloaded constr + move assignment
    a = "Bonjour"; // Overloaded constr + move assignment
    
    Mystring empty; // no args constr
    Mystring larry{"Larry"}; // overloaded constr
    Mystring stooge{larry}; // copy constr
    Mystring stooges; // no args constr

    empty = stooge; // overloaded/copy assignment op

    empty.display(); // "Larry: 5"
    larry.display(); // "
    stooge.display(); // "
    
    stooges = "Larry, Moe and Curly";
    stooges.display();

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "Loop 1" << endl;
    for (const Mystring &s: stooges_vec)
        s.display();

    cout << "Loop 2" << endl;
    for (Mystring &s: stooges_vec)
        s = "changed";
    return 0;
}