#ifndef MYSTRING_HPP
#define MYSTRING_HPP

class Mystring
{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
private:
    char *str; // pointer to char[] that holds a C-style string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source); // move
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_HPP
