#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
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

        
};

#endif // _MYSTRING_H