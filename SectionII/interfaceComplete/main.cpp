#include <iostream>
#include <string>
#include <vector>

using namespace std;


// I_Printable is a abstract interface
class I_Printable{
    friend std::ostream &operator<<(std::ostream  &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os)const=0; // pure virtual function
};

// define a print function
void print(const I_Printable &obj){
    cout<<obj<<endl;
}


class Dog:public I_Printable{
public:
    virtual void print(std::ostream &os) const override{
        os<<"Woof, Woof"<<endl;
    }
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}

class Account:public I_Printable{
public: 
    Account(){
    }
    virtual void withdraw(double amount){
        cout<<"Account Withdrawl"<<endl;
        //balance -= amount;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Account Display"<<endl;
    }
    virtual ~Account(){
        }
};


class Checking:public Account{

public:
    virtual void withdraw(double amount) override{
        cout<< "Checking withdrawl"<<endl;
        //balance -= amount;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Checking Display"<<endl;
    }
    // destructor, class with virtual function must have virtual destructor
    virtual ~Checking(){
    }
};


class Trust:public Account{
public:
    virtual void withdraw(double amount) override{
        cout<<"Trust withdrawl"<<endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Trust Display"<<endl;
    }
    virtual ~Trust(){}
};

class Saving:public Account{
public:
    virtual void withdraw(double amount) override{
        cout<<"Saving withdrawl"<<endl;
    }
    virtual void print(std::ostream &os) const override{
        os<<"Saving Display"<<endl;
    }
    virtual ~Saving(){}
};


void do_withdraw(Account &acc, double amount){
        acc.withdraw(amount);
}


int main(){
//    Account *p1=new Account();
//    Account *p2 = new Checking();
//    Account *p3 = new Trust();
//    Account *p4 = new Saving();
//    cout<<"\n======Vector=========="<<endl;
//    vector<Account*> accounts {p1,p2,p3,p4};
//    for(auto acc_ptr:accounts)
//        acc_ptr->withdraw(1000);
//        
//    cout<<"\n======Array=========="<<endl;
//    Account *array[] = {p1,p2,p3,p4};
//    for(auto i=0; i<4; i++)
//        array[i]->withdraw(1000);
//    
//    cout<<"\n======Clean up=========="<<endl;
//    delete p1;
//    delete p2;
//    delete p3;
//    delete p4;
	
    Account a;
    Account &ref = a;
    
    
    Trust t;
    Account &ref1 =t;
    
    Account a1;
    Saving a2;
    Trust a3;
    Checking a4;
    
//    do_withdraw(a1, 100); 
//    do_withdraw(a2, 100);
//    do_withdraw(a3, 100);
//    do_withdraw(a4, 100);
    
//    cout<<a1;
//    cout<<a2;
//    cout<<a3;
//    cout<<a4;

    Dog *dog = new Dog();
    cout<<*dog<<endl;
    print(*dog);
    print(a1);
    return 0;
}
