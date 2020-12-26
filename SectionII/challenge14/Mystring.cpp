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
    std::cout<<"Move assignment operator"<<std::endl;
    if(this==&rhs){
        return *this;
    }else{
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;
    }
}

// equality overloading
bool Mystring::operator==(const Mystring &rhs){
    return std::strcmp(str, rhs.str)==0;
}

// non-equality overloading
bool Mystring::operator!=(const Mystring &rhs){
    return std::strcmp(str, rhs.str)!=0;
}

// > overloading
bool Mystring::operator>(const Mystring &rhs){
    return std::strcmp(str, rhs.str)<0;
}

// < overloading
bool Mystring::operator<(const Mystring &rhs){
    return std::strcmp(str, rhs.str)>0;
}

// - overload to lowercase
Mystring Mystring::operator-(){
    for(size_t i{0}; i<std::strlen(str);i++){
        str[i] = std::tolower(str[i]);
    }
    return *this;
}

// overload +, s1+s2
Mystring Mystring::operator+(const Mystring &rhs){
    char *buff = new char[std::strlen(str)+std::strlen(rhs.str)+1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// overload +=, s1=s1+s2
Mystring &Mystring::operator+=(const Mystring &rhs){
    *this = *this+rhs;
    return *this;
}
// overload  *int, Mystring * 3, repeat str three times
Mystring Mystring::operator*(int n){
    char *buff=new char[std::strlen(str)*n+1];
    std::strcpy(buff, str);
    for(size_t i{1}; i<n; i++){
        std::strcat(buff, str);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// overload *=, repeat 3 times of self and reassign
Mystring &Mystring::operator*=(int n){
    *this = (*this)*n;
    return *this;
}

// overload ++, make to uppercase, pre-increment
Mystring &Mystring::operator++(){
    for(size_t i{0}; i<std::strlen(str); i++){
        str[i] = std::toupper(str[i]);
    }
    return *this;
}

// overload ++, make to uppercase, post-increment
Mystring Mystring::operator++(int){
    Mystring temp{*this}; // make a copy
    operator++();
    return temp;
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
