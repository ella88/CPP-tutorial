#include "Saving_Account.hpp"
#include <iostream>

Saving_Account::Saving_Account(std::string name, double bl, double rate)
    :Account(name, bl), int_rate{rate}{
        // inititae Account first
}
// destructor
Saving_Account::~Saving_Account()
{
}
bool Saving_Account::deposit(double amount){
    amount += amount * (int_rate/100);
    return Account::deposit(amount); // using Account method
}
bool Saving_Account::withdraw(double amount){
    std::cout<<"In Saving Account withdraw"<<std::endl;
    return Account::withdraw(amount);
}
std::ostream &operator<<(std::ostream &os, const Saving_Account &sa){
    os<<"[Saving_account"<<sa.name<< "; "<<sa.balance<<"; "<<sa.int_rate<<" ]"<<std::endl;
    return os;
}
