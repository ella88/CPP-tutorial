#include "Mystring.hpp"
#include <iostream>

Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
}
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        }else{
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// copy constructor
Mystring::Mystring(const Mystring &source)
    :str(nullptr){
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
}

// move constructor
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
        source.str = nullptr;
}

// move asssignment
Mystring &Mystring::operator=(Mystring &&rhs){
    //std::cout<<"Move assignment operator"<<std::endl;
    if(this==&rhs){
        return *this;
    }else{
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;
    }
}

Mystring::~Mystring()
{
}

// overload insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os<<rhs.str;
    return os;
}
// overload extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000]; // allocate a large size of buffer
    in >> buff;
    rhs = Mystring(buff);
    delete [] buff;
    return in;
}
