#ifndef SAVING_ACCOUNT_HPP
#define SAVING_ACCOUNT_HPP
#include "Account.hpp"

class Saving_Account:public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &sa);
private:
    static constexpr const char *def_name="Unnamed Saving Account";
    static constexpr const double def_balance =0.0;
    static constexpr const double def_int_rate=0.0;
protected:
    double int_rate;
public:
    Saving_Account(std::string name = def_name, double balance=def_balance, double int_rate=def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Saving_Account(){
        std::cout<<"Destructor for Saving Account: "<<name<<std::endl;
    }

};

#endif // SAVING_ACCOUNT_HPP
