#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP
#include "Account.hpp"
#include <string>

class Checking_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &acc);
private:
    static constexpr const char *def_name="Unnamed";
    static constexpr const double def_balance =0.0;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
    ~Checking_Account();

};

#endif // CHECKING_ACCOUNT_HPP
