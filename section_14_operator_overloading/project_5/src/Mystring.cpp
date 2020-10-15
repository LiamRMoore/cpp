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
// equality
// bool Mystring::operator==(const Mystring &rhs) const {
//     if (std::strcmp(str, rhs.str) == 0) {
//         return true;
//     }
//     return false;
// }

// unary -
// Mystring Mystring::operator-() {
//     size_t bfr_size = std::strlen(str) + 1;
//     char *bfr = new char[bfr_size];
//     for (size_t i{0}; i < bfr_size; ++i)
//         bfr[i] = std::tolower(str[i]);
//     Mystring temp {bfr};
//     delete [] bfr;
//     return temp;
// }

// addition
// Mystring Mystring::operator+(const Mystring &rhs) const {
//     size_t bfr_size = std::strlen(str) + std::strlen(rhs.str) + 1;
//     char *bfr = new char[bfr_size];
//     std::strcpy(bfr, str);
//     std::strcat(bfr, rhs.str);
//     Mystring temp {bfr};
//     delete [] bfr;
//     return temp;
// }

// display fn
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return std::strlen(str); }

const char *Mystring::get_str() const {
    return str;
}


// global operator functions
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    if (std::strcmp(lhs.str, rhs.str) == 0)
        return true;
    return false;
}

Mystring operator-(const Mystring &obj) {
    char *bfr = new char[std::strlen(obj.str) + 1];
    for (size_t i{0}; i < std::strlen(bfr); ++i)
        bfr[i] = std::tolower(obj.str[i]);
    Mystring temp {bfr};
    delete [] bfr;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    size_t bfr_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
    char *bfr = new char[bfr_size];
    std::strcpy(bfr, lhs.str);
    std::strcat(bfr, rhs.str);
    Mystring temp {bfr};
    delete [] bfr;
    return temp;
}
