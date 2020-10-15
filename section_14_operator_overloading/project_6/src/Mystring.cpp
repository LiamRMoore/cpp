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

// move constructor
Mystring::Mystring(Mystring &&rhs)
    : str{rhs.str} {
    rhs.str = nullptr;
    std::cout << "Move constructor" << std::endl;
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
    delete [] str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str, rhs.str);
    return *this;
}

// move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    // steal
    str = rhs.str;
    // null
    rhs.str = nullptr;
    return *this;
}

// overloaded operators

// extraction
std::istream &operator>>(std::istream &is, Mystring &rhs) {
    char *buffer = new char[1000];
    is >> buffer;
    rhs = Mystring{buffer};
    delete [] buffer;
    return is;
}

// insertion
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// challenge

// * (repeat n times str * 3)
// L-value version
Mystring Mystring::operator*(unsigned &n) const {
    char *new_str = new char[std::strlen(str) * n + 1];
    std::strcpy(new_str, str);
    for (size_t i{0}; i < n-1 ; ++i)
        std::strcat(new_str, str);
    Mystring tmp{new_str};
    delete [] new_str;
    return tmp;
}

// R-value version
Mystring Mystring::operator*(unsigned &&n) const {
    char *new_str = new char[std::strlen(str) * n + 1];
    std::strcpy(new_str, str);
    for (size_t i{0}; i < n-1 ; ++i)
        std::strcat(new_str, str);
    Mystring tmp{new_str};
    delete [] new_str;
    return tmp;
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



