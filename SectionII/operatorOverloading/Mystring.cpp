#include "Mystring.hpp"
#include <string>
#include <iostream>

Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str='\0';
}
Mystring::Mystring(const char*s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1]; // allocate space
            *str='\0';
        }else{
            str = new char[std::strlen(s)+1]; // allocate space
            std::strcpy(str, s);
        }
}
// copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
}

// move constructor
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
        source.str=nullptr;
        std::cout<<"Move constructor used."<<std::endl;
}


// assignment overloading
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"Assignment operator - deep copy"<<std::endl;
    if(this==&rhs){
        return *this;
    }
    delete [] str; // free the space
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    return *this;
}
// move - assignment overloading
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"Move Assignment operator - deep copy"<<std::endl;
    if(this==&rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str=nullptr;
    return *this;
}
// display
void Mystring::display() const{
    std::cout<<str<<" length: "<<get_length()<<std::endl;
}
// get_lenth
int Mystring::get_length() const{
    return strlen(str);
}
//string getter
const char *Mystring::get_str() const{
    return str;
}

//  non-member function
// equality
bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str,  rhs.str))==0;
}

Mystring operator-(const Mystring &obj){
    char *buff = new char[strlen(obj.str)+1];
    std::strcpy(buff, obj.str);
    for(size_t i{0}; i<std::strlen(obj.str); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff}; // using constructor
    delete [] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1]; // allocate space
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff}; // using constructor
    delete [] buff; // free space
    return temp;
}

Mystring::~Mystring()
{
    delete [] str;
}

