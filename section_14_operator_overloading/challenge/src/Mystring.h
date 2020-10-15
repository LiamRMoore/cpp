#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
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
        // challenge - overload operators
        // * (repeat n times str * 3)
        // L-value version
        Mystring operator*(unsigned &n) const;
        // R-value version
        Mystring operator*(unsigned &&n) const;

        // *= (repeat lhs str n times and store back)

        // += (concatenate rhs to lhs and store in lhs)

    
};

#endif // _MYSTRING_H