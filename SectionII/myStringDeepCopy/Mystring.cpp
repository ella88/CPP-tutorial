#include "Mystring.hpp"
#include <cstring>
#include <iostream>

// no arg constructor
Mystring::Mystring()
    :str{nullptr}{
        str=new char[1];
        *str = '\0';
        //cout<<"Constructor no arg called for " <<*str<<endl;
}

// string constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1]; // allocate space
            *str = '\0';
        }else{
            str = new char[std::strlen(s)+1]; // allocate space
            std::strcpy(str, s);
        }
        //cout<<"Constructor from str called for " <<*str<<endl;
}

int Mystring::get_length() const{
    return strlen(str);
}

void Mystring::display() const{
    cout<<str<<", length: "<<strlen(str)<<endl;
}

// Mystring deep copy
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str)+1]; // allocate space
        std::strcpy(str, source.str); // deep copy
        //cout<<"Constructor from copy of Mystring called for " <<source.str<<endl;
}
// move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str =nullptr;
        std::cout<<"Move constructor used"<<endl;
}

// destructor
Mystring::~Mystring()
{
    delete [] str;
}


// overloading copy assignment, requires copy constructor
Mystring &Mystring ::operator=(const Mystring &rhs){
    std::cout<<"Copy assignment"<<endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char[std::strlen(rhs.str)+1]; // deep copy
    std::strcpy(this->str, rhs.str);
    return *this;
}

// move assignment， requires move constructor
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"Move assignment operator"<<endl;
    if(this==&rhs){
        return *this;
    }
    delete [] str; // deallocate the current storage
    str = rhs.str;  // steal the pointer
    rhs.str = nullptr; // null out the rhs object, this is very important
    return *this;
}

// Mystring operator - make lowercase, unary operators
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff, str);
    for(size_t i=0; i<std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// Mystring operator + make uppercase
Mystring Mystring::operator+() const{
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff, str);
    for(size_t i{0}; i<std::strlen(buff); i++){
        buff[i] = std::toupper(buff[i]);
    }
    Mystring temp{buff}; // construct a Mystring
    delete [] buff; // free storage
    return temp;
}

// == compare string
bool Mystring::operator==(const Mystring &rhs){
    if(std::strcmp(str, rhs.str)==0)
        return true;
    else
        return false;
}

// concatenation
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff=new char[std::strlen(rhs.str)+std::strlen(str)+1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    
    Mystring temp{buff};
    delete[] buff; // very important to prevent memory leak
    return temp;
}





