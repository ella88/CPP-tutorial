#include "Saving_Account.hpp"
#include <iostream>

Saving_Account::Saving_Account(double bl, double rate)
    :Account(bl), int_rate{rate}{
        // inititae Account first
}

Saving_Account::Saving_Account()
    :Saving_Account{0.0, 0.0}{
}

Saving_Account::~Saving_Account()
{
}
void Saving_Account::deposit(double amount){
    amount = amount + (amount * int_rate/100);
    std::cout<<"amount is: "<<amount;
    Account::deposit(amount); // using Account method
}

std::ostream &operator<<(std::ostream &os, const Saving_Account &sa){
    os<<"Saving account balance "<<sa.balance<<" interest rate: "<<sa.int_rate<<std::endl;
    return os;
}
