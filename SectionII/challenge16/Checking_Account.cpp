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
        balance -= amount;
        return true;
    }
}
bool Checking_Account::deposit(double amount){
    std::cout<<"Checking Account deposit"<<std::endl;
    return Account::deposit(amount);
    
}
void Checking_Account::print(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os<<"[Checking Account: "<<name<<"; "<<balance<<"]"<<std::endl;
}


