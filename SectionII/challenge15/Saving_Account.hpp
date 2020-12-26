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
    bool deposit(double amount);
    ~Saving_Account();
    bool withdraw(double amount);

};

#endif // SAVING_ACCOUNT_HPP
