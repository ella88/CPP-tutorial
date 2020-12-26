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


// non-member function


// equality overloading
bool operator==(const Mystring &lhs, const Mystring &rhs){
    return std::strcmp(lhs.str, rhs.str)==0;
}

// non-equality overloading
bool operator!=(const Mystring &lhs,const Mystring &rhs){
    return std::strcmp(lhs.str, rhs.str)!=0;
}

// > overloading
bool operator>(const Mystring &lhs,const Mystring &rhs){
    return std::strcmp(lhs.str, rhs.str)<0;
}

// < overloading
bool operator<(const Mystring &lhs,const Mystring &rhs){
    return std::strcmp(lhs.str, rhs.str)>0;
}

// - overload, to lowercase
Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff, obj.str);
    for(size_t i{0}; i<std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//+ -concatenation, return an object that concetenate the lhs and rhs, s1+s2
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//+= concatenation, concetenate the rhs to lhs, s1=s1+s2
Mystring operator+=(Mystring &lhs, const Mystring &rhs){
    Mystring updated = lhs+rhs;
    lhs.str = nullptr;
    lhs.str = updated.str;
    return lhs;
}

// ++, pre-increment, to uppercase
Mystring &operator++(Mystring &obj){
    for(size_t i{0}; i<std::strlen(obj.str); i++){
        obj.str[i] = std::toupper(obj.str[i]);
    }
    return obj;
}

// ++, post-increment, to uppercase
Mystring operator++(Mystring &obj, int){
    Mystring temp{obj}; //make a copy
    ++obj; // call pre-increment
    return temp;
}

// *n, repeat n times
Mystring operator*(const Mystring &obj, int n){
    char *buff = new char[std::strlen(obj.str)*n+1];
    std::strcpy(buff, obj.str);
    for(size_t i{1}; i<n; ++i){
        std::strcat(buff, obj.str);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// *=n, repeat n times, s1 = s1*n
Mystring &operator*=(Mystring &obj, int n){
    obj = obj *n;
    return obj;
}




Mystring::~Mystring()
{
    delete [] str;
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
