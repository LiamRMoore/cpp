#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    private:
        char *str; // C-style string
    public:
        Mystring();
        Mystring(const char *s);
        Mystring(const Mystring &source);
        // move constructor 
        Mystring(Mystring &&source);
        ~Mystring();
        void display() const;
        int get_length() const;
        const char *get_str() const;
        // copy assignment 
        // returns Mystring obj by reference
        Mystring &operator=(const Mystring &rhs);  
        // move assignment
        Mystring &operator=(Mystring &&rhs);  
        // overloaded operators
        // equality
        bool operator==(const Mystring &rhs) const;
        // unary -
        Mystring operator-();
        // addition
        Mystring operator+(const Mystring &rhs) const;
};

#endif // _MYSTRING_H