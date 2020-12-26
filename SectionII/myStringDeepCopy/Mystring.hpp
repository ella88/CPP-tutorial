#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <cstring>
using namespace std;

class Mystring
{
private:
    char *str; // c-style string
public:
// constructor
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    // move constructor
    Mystring(Mystring &&source);
    
// destructor
    ~Mystring();
    
// overload the assignment operator
    Mystring &operator=(const Mystring &rhs); // overloading the equal operator with assignment operator
    
// move assignment operator
    Mystring &operator=(Mystring &&rhs); // no more constant since rhs.str will point to null
// overload operator - "-" to lowercase 
    Mystring operator-() const;
// overload operator + "+" to uppercase
    Mystring operator+() const;
// overload operator == 
    bool operator==(const Mystring &rhs); 
// overload concatenation + Mystring, to a new object
    Mystring operator+(const Mystring &rhs) const;

    int get_length() const;
    void display() const;
    const char *get_str() const;

};

#endif // MYSTRING_HPP
