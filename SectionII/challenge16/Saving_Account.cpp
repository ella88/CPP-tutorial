#include "Saving_Account.hpp"
#include <iostream>

Saving_Account::Saving_Account(std::string name, double bl, double rate)
    :Account(name, bl), int_rate{rate}{
        // inititae Account first
}

bool Saving_Account::deposit(double amount){
    amount += amount * (int_rate/100);
    return Account::deposit(amount); // using Account method
}
bool Saving_Account::withdraw(double amount){
    std::cout<<"In Saving Account withdraw"<<std::endl;
    return Account::withdraw(amount);
}

void Saving_Account::print(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os<<"[Saving_account: "<<name<< "; "<<balance<<"; interest rate:"<<int_rate<<" ]"<<std::endl;
}

