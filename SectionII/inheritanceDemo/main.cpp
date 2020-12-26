#include <iostream>
#include "Account.hpp"
#include "Saving_Account.hpp"

using namespace std;

class Base
{
private:
    int value;
public:
    Base()
        :value{0}{
        cout<<"Base no-args constructor"<<endl;
    }
    Base(int x)
        :value{x}{
        cout<<"int Base constructor"<<endl;
    }
    Base(const Base &source)
        :value{source.value}{
            cout<<" Base copy constructor"<<endl;
    }
    // overload assignment
    Base &operator=(const Base &rhs){
        if(this!=&rhs){
            value = rhs.value; // assign
        }
        return *this;
    }
    ~Base(){
        cout<<"Base destructor for "<<value<<endl;
    };

};

class Derived:public Base
{
private:
    int double_value;
public:
    Derived() 
        :Base{}, double_value{0}{
        cout<<"Derived no-args constructor "<<endl;
    }
    Derived(int x)
        :Base{x}, double_value{x*2}{
        cout<< "int Derived constructor"<<endl;
    }
    Derived(const Derived &source)
        :double_value{source.double_value}{
            cout<<"Derived copy constructor"<<endl;
    }
    // assignment overloading
    Derived &operator=(const Derived &rhs){
        if(this!=&rhs){
            Base::operator=(rhs); // assign Base part
            double_value = rhs.double_value; // assign Derived part
        }
        return *this;
    }
    // destructor
    ~Derived(){
        cout<<"Derived destructor for "<<double_value<<endl;
    };

};


int main(){
    
    Account acc;
    acc.deposit(2000.0);
    acc.withdraw(1000.0);
    cout<<acc;
    
    Saving_Account s_acc{};
    s_acc.deposit(500);
    
    cout<<s_acc;
    
	//Base base1;
//    Base b1{100};
//    Base b2{b1};
//    Derived d1{200};
//    Derived d2{d1};
//    Derived d3=d2;
    
    return 0;
}
