#ifndef SAVING_ACCOUNT_HPP
#define SAVING_ACCOUNT_HPP
#include "Account.hpp"

class Saving_Account:public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &sa);
protected:
    double int_rate;
public:
    Saving_Account();
    Saving_Account(double balance, double int_rate);
    ~Saving_Account();
    
    void deposit(double amount);
    

};

#endif // SAVING_ACCOUNT_HPP
