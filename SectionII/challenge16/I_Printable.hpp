#ifndef I_PRINTABLE_HPP
#define I_PRINTABLE_HPP
#include <iostream>

class I_Printable
{
friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0; // pure virtual function
    // destructor
    virtual ~I_Printable() = default; 
};

#endif // I_PRINTABLE_HPP
