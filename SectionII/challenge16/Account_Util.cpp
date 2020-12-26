#include "Account_Util.hpp"
#include <iostream>

using namespace std;

void display(const std::vector<Account*> &accounts){
    std::cout<<"\n ========= Accounts ========= "<<std::endl;
    for(auto acc:accounts){
        cout<<*acc<<endl;
    }
}

// deposit amount to each Account in accounts
void deposit(std::vector<Account*> &accounts, double amount){
    std::cout<<"\n ========= Deposting to Accounts ========="<<std::endl;
    for(auto acc:accounts){
        acc->deposit(amount);
    }
}
// withdraw amount from each Account in accounts
void withdraw(std::vector<Account*> &accounts, double amount){
    std::cout<<"\n ========= Withdrawing from Accounts ========="<<std::endl;
    for(auto acc:accounts){
        acc->withdraw(amount);
    }
}
