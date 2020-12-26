#include <iostream>
#include "Account.hpp"
#include "Saving_Account.hpp"
#include "Trust_Account.hpp"
#include "Checking_Account.hpp"
#include "Account_Util.hpp"
#include "IllegalBalanceExeption.hpp"
#include "InsufficientFundExeception.hpp"
#include <vector>

using namespace std;


/**demo for weak pointer*/
class B;
class A{
    shared_ptr<B> b_ptr;
public:
    void set_B(shared_ptr<B> &b){
        b_ptr = b;
    }
    A(){cout<<"A constructor"<<endl;}
    ~A(){cout<<"A destructor"<<endl;}
};

class B{
    weak_ptr<A> a_ptr; // make it to weak ptr to prevent strong circular reference
public:
    void set_A(shared_ptr<A> &a){
        a_ptr = a;
    }
    B(){cout<<"B constructor"<<endl;}
    ~B(){cout<<"B destructor"<<endl;}
};


int main(){
//    Account *p1 = new Saving_Account();
//    Account *p2 = new Trust_Account();
//    Account *p3 = new Checking_Account();
//    
////    std::cout<<*p1;
////    std::cout<<*p2;
////    std::cout<<*p3;
//    std::vector<Account*> ptrs {p1,p2,p3};
//    display(ptrs);
//    delete p1;
//    delete p2;
//    delete p3;
//    
//    std::unique_ptr<Trust_Account> t1{new Trust_Account()};
//    std::unique_ptr<Trust_Account> t2 = std::make_unique<Trust_Account>();
//    t1->deposit(1000);
//    t2->withdraw(50);
//    Account *t3 = new Trust_Account();
//    std::cout<<*t3;
    
//    std::vector<std::unique_ptr<Account>> accounts;
//    accounts.push_back(make_unique<Checking_Account>("James",2000));
//    accounts.push_back(make_unique<Saving_Account>("Alice", 1000, 3.25));
//    accounts.push_back(make_unique<Trust_Account>("Mary", 5000, 3.0));
//    for(const auto &acc:accounts){
//        std::cout<< *acc<<endl;
//    }
    
    
//    
//    std::unique_ptr<Trust_Account> t3;
//    t3 = std::move(t1); // move the ownership
//    t3->deposit(1000);
//    if(!t1){
//        std::cout<<"t1 is nullptr"<<std::endl;
//    }
//    std::cout<<"\n==========================================="<<std::endl;
//    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>("Larry", 10000, 3.1);
//    std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account>("Moe", 5000);
//    std::shared_ptr<Account> acc3 = std::make_shared<Saving_Account>("Curly", 6000);
//    
//    std::vector<std::shared_ptr<Account>> vec;
//    vec.push_back(acc1); // shared pointer can be copied and added to vector
//    vec.push_back(acc2);
//    vec.push_back(acc3);
//    
//    for(const auto &acc:vec){
//        std::cout<<*acc<<"\nUse count: "<<acc.use_count()<<std::endl;
//    }
//    shared_ptr<Account> backup{acc1};
//    cout<<*backup<<"\nUse count: "<<backup.use_count()<<endl;
//    cout<<*acc1<<"\nUse count: "<<acc1.use_count()<<endl;
//	shared_ptr<A> a = make_shared<A>();
//    shared_ptr<B> b =make_shared<B>();
//    a->set_B(b);
//    b->set_A(a);
    
    std::unique_ptr<Account> moes_account;
    std::unique_ptr<Account> larrys_account;
    try{
        larrys_account = std::make_unique<Saving_Account>("Larry",-2000);
        std::cout<<"Larry's account."<<std::endl;
    }catch(const IllegalBalanceExeption &ex){
        std::cerr<<ex.what()<<std::endl;
    }
    
    larrys_account = make_unique<Checking_Account>("Larry", 2000);
    return 0;
}
