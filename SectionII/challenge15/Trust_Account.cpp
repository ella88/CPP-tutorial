#include "Trust_Account.hpp"
#include <iostream>

Trust_Account::Trust_Account(std::string nm, double bln, double rate)
    :Saving_Account{nm, bln,rate}, withdrawl_cnt{0}{
}
bool Trust_Account::withdraw(double amount){
    std::cout<<"Trust Account withdraw"<<std::endl;
    if(withdrawl_cnt<max_withdrawls && amount<balance*max_withdrawl_percent){
        ++withdrawl_cnt;
        return Saving_Account::withdraw(amount);
    }
    return false;
}

bool Trust_Account::deposit(double amount){
    if(amount >=5000){
        amount += bonus;
    }
    return Saving_Account::deposit(amount);
}


Trust_Account::~Trust_Account()
{
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &acc){
    std::cout<<"[ Trust Account: "<<acc.name<<"; "<<acc.balance<<"; total withdrawal : "<<acc.withdrawl_cnt<<"]"<<std::endl;
    return os;
}

