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
    std::cout<<"Trust Account deposit"<<std::endl;
    if(amount >=5000){
        amount += bonus;
    }
    return Saving_Account::deposit(amount);
}

void Trust_Account::print(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os<<"[Trust Account: "<<name<<"; "<<balance<<"; total withdrawal : "<<withdrawl_cnt<<"]"<<std::endl;
}


