#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <string>
#include <iostream>

class Mystring
{
friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
friend std::istream &operator>>(std::istream &in, Mystring &obj);
// overload -, to lowercase
friend Mystring operator-(const Mystring &source);

//+ concatenation, return an object that concetenate the lhs and rhs, s1+s2
friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    
//+= concatenation, concetenate the rhs to lhs, s1=s1+s2
friend Mystring operator+=(Mystring &lhs, const Mystring &rhs);

// == 
friend bool operator==(const Mystring &lhs, const Mystring &rhs);

//!=
friend bool operator!=(const Mystring &lhs, const Mystring &rhs);

// < 
friend bool operator<(const Mystring &lhs, const Mystring &rhs);

//>
friend bool operator>(const Mystring &lhs, const Mystring &rhs);

// ++, post-increment, to uppercase, obj++
friend Mystring operator++(Mystring &obj, int);

// ++, pre-increment, to uppercase, ++obj
friend Mystring &operator++(Mystring &obj);

// *n, repeat n times
friend Mystring operator*(const Mystring &obj, int n);

// *=n, repeat n times, s1 = s1*n
friend Mystring &operator*=(Mystring &obj, int n);


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
    

    
    ~Mystring();

};

#endif // MYSTRING_HPP
