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

void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const { return std::strlen(str); }

const char *Mystring::get_str() const {
    return str;
}

