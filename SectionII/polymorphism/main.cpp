#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account{
friend std::ostream &operator<<(std::ostream  &os, const Account &acc);
public: 
    Account(){
    }
    virtual void withdraw(double amount){
        cout<<"Account Withdrawl"<<endl;
        //balance -= amount;
    }
    virtual ~Account(){
        }
};
std::ostream &operator<<(std::ostream  &os, const Account &acc){
    os<<"Account Display"<<endl;
    return os;
}

class Checking:public Account{
friend std::ostream &operator<<(std::ostream  &os, const Checking &acc);
public:
    virtual void withdraw(double amount) override{
        cout<< "Checking withdrawl"<<endl;
        //balance -= amount;
    }
    // destructor, class with virtual function must have virtual destructor
    virtual ~Checking(){
    }
};
std::ostream &operator<<(std::ostream  &os, const Checking &acc){
    os<<"Checking Display"<<endl;
    return os;
}

class Trust:public Account{
public:
    virtual void withdraw(double amount) override{
        cout<<"Trust withdrawl"<<endl;
    }
    virtual ~Trust(){}
};

class Saving:public Account{
friend std::ostream &operator<<(std::ostream  &os, const Saving &acc);
public:
    virtual void withdraw(double amount) override{
        cout<<"Saving withdrawl"<<endl;
    }
    virtual ~Saving(){}
};
std::ostream &operator<<(std::ostream  &os, const Saving &acc){
    os<<"Saving Display"<<endl;
    return os;
}

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
    cout<<a1;
    cout<<a2;
    
    
    return 0;
}
