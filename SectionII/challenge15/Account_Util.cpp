#include "Account_Util.hpp"
#include <iostream>

// display all Account
void display(const std::vector<Account> &accounts){
    std::cout<<"\n ========= Accounts ========= "<<std::endl;
    for(const auto &acc:accounts)
        std::cout<<acc<<std::endl;
}
// deposit amount to each Account in accounts
void deposit(std::vector<Account> &accounts, double amount){
    std::cout<<"\n ========= Deposting to Accounts ========="<<std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount)){
            std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
        }else{
            std::cout<<"Failed Deposit of "<<amount<<" to "<<acc<<std::endl;
        }
    }
}

// withdraw amount from each Account in accounts
void withdraw(std::vector<Account> &accounts, double amount){
    std::cout<<"\n ========= Withdrawing from Accounts ========="<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount)){
            std::cout<<"Withdrawing "<<amount<<" from "<<acc<<std::endl;
        }else{
            std::cout<<"Failed Withdrawl of "<<amount<<" from "<<acc<<std::endl;
        }
    }
}


// display all Saving_Account
void display(const std::vector<Saving_Account> &saving_accounts){
    std::cout<<"\n ========= Saving Accounts ========= "<<std::endl;
    for(const auto &acc:saving_accounts)
        std::cout<<acc<<std::endl;
}
// deposit amount to each Saving_Account in saving_accounts
void deposit(std::vector<Saving_Account> &saving_accounts, double amount){
    std::cout<<"\n ========= Deposit to Saving_Accounts =========";
    for(auto &acc:saving_accounts){
        if(acc.withdraw(amount)){
            std::cout<<"Depositing "<<amount<<" to "<<acc<<std::endl;
        }else{
            std::cout<<"Failed Deposit of "<<amount<<" to "<<acc<<std::endl;
        }
    }
}
// withdraw amount from each Saving_Account in saving_accounts
void withdraw(std::vector<Saving_Account> &saving_accounts, double amount){
    std::cout<<"\n ========= Withdrawing from Saving_Accounts =========";
    for(auto &acc:saving_accounts){
        if(acc.withdraw(amount)){
            std::cout<<"Withdrawing "<<amount<<" from "<<acc<<std::endl;
        }else{
            std::cout<<"Failed Withdrawl of "<<amount<<" from "<<acc<<std::endl;
        }
    }
}


