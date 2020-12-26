#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <string>

class Mystring
{
friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);   // deep copy
    Mystring(Mystring &&source);  // move
    
    char* get_str(){ return str;}
    int get_length(){ return std::strlen(str);}
    
    // overloading operator 
    // 1. assignment
    Mystring &operator=(Mystring &&rhs);
    
    ~Mystring();

};

#endif // MYSTRING_HPP
