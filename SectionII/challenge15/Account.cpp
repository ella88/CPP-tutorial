#include "Account.hpp"
#include <iostream>
#include <string>

// constructor
Account::Account(std::string name, double balance)
    :name{name},balance{balance}{
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
        return false;
    }
}

double Account::get_balance() const{
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"[Account: "<<account.name<<"; "<<account.balance<<"]"<<std::endl;
    return os;
}

Account::~Account()
{
}


