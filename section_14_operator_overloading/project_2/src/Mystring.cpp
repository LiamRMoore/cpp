#include <cstring>
#include <iostream>
#include "Mystring.h"

// no-args constructor
// reserve one character and set it to the null character
Mystring::Mystring() : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// normal constructor
Mystring::Mystring(const char *s)
    : str{nullptr} {
    std::cout << "overloaded constructor" << std::endl;
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s)+1];
        // make copy of char array to str attribute, including null char
        std::strcpy(str, s);
    }
}

// copy constructor
Mystring::Mystring(const Mystring &source) // Mystring{source.str} doesnt work ??
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

// destructor
Mystring::~Mystring() { 
    delete [] str;
}

// copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str, rhs.str);
    return *this;
}

// display fn
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return std::strlen(str); }

const char *Mystring::get_str() const {
    return str;
}

