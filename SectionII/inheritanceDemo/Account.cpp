#include "Account.hpp"
#include <iostream>
#include <string>

Account::Account()
    :balance{0.0}{
}
Account::Account(double money)
    :balance{money}{
}

void Account::deposit(double amount){
    balance += amount;
    //std::cout<<"Account deposit called with "<<amount<<std::endl;
}
void Account::withdraw(double amount){
    if(balance-amount>0){
        balance -= amount;
        //std::cout<<"Account withdraw called with "<<amount<<std::endl;
    }else{
        std::cout<<"Sorry, your account balance is less than "<<amount<<std::endl;
    }
}
void Account::display() const{
    std::cout<<"Balance: "<<balance<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"Account balance: "<<account.balance<<std::endl;
    return os;
}


Account::~Account()
{
}


