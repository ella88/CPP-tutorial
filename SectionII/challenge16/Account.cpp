#include "Account.hpp"
#include <iostream>
#include <string>
#include "IllegalBalanceExeption.hpp"
#include "InsufficientFundExeception.hpp"
// constructor
Account::Account(std::string name, double balance)
    :name{name},balance{balance}{
        if(balance<0)
            throw IllegalBalanceExeption();
}

bool Account::deposit(double amount){
    if(amount>=0){
        balance += amount;
        return true;
    }else{
        return false;
    }
    
    //std::cout<<"Account deposit called with "<<amount<<std::endl;
}
bool Account::withdraw(double amount){
    std::cout<<"In Account Withdrawl"<<std::endl;
    if(balance-amount>0){
        balance -= amount;
        return true;
        //std::cout<<"Account withdraw called with "<<amount<<std::endl;
    }else{
        //std::cout<<"Sorry, your account balance is less than "<<amount<<std::endl;
        throw InsufficientFundExeception();
    }
}

void Account::print(std::ostream &os) const{
    os<<"[Account: "<<name<<"; "<<balance<<"]"<< std::endl;
}



