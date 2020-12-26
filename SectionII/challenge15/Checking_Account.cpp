#include "Checking_Account.hpp"
#include <iostream>

Checking_Account::Checking_Account(std::string nm, double bln)
    :Account{nm, bln}{
}

bool Checking_Account::withdraw(double amount){
    std::cout<<"Checking Account withdraw"<<std::endl;
    if(amount>balance-1.5 || amount<0){
        return false;
    }else{
        balance -= 1.50;
        return Account::withdraw(amount);
    }
}

Checking_Account::~Checking_Account()
{
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &acc){
    std::cout<<"[Checking account: "<<acc.name<<"; "<<acc.balance<<" ]"<< std::endl;
    return os;
}

