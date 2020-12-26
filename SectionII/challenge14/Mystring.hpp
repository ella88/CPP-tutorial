#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <string>
#include <iostream>

class Mystring
{
friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
friend std::istream &operator>>(std::istream &in, Mystring &obj);

private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);   // deep copy
    Mystring(Mystring &&source);  // move
    
    char* get_str(){ return str;}
    int get_length(){ return std::strlen(str);}
    void display(){
        std::cout<<str<<std::endl;
    }
    
    // overloading operator 
    // 1. assignment
    Mystring &operator=(Mystring &&rhs);
    
    // overload ==
    bool operator==(const Mystring &rhs);
    
    // overload !=
    bool operator!=(const Mystring &rhs);
    
    // overload >
    bool operator>(const Mystring &rhs);
    
    // overload <
    bool operator<(const Mystring &rhs);
    
    // overload -, to lowercase
    Mystring operator-();
    
    // overload +, s1+s2
    Mystring operator+(const Mystring &rhs);
    
    // overload +=, s1=s1+s2
    Mystring &operator+=(const Mystring &rhs);
    
    // overload  *int, Mystring * 3, repeat str three times
    Mystring operator*(int n);
    
    // overload *=, repeat 3 times of self and reassign
    Mystring &operator*=(int n);
    
    // overload ++, make to uppercase, pre-increment ++Mystring
    Mystring &operator++();
    
    // overload ++, make to uppercase, post-increment ++Mystring
    Mystring operator++(int);
    
    
    

    
    
    
    ~Mystring();

};

#endif // MYSTRING_HPP
