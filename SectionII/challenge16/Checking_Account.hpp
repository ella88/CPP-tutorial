#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP
#include "Account.hpp"
#include <string>

class Checking_Account : public Account
{
private:
    static constexpr const char *def_name="Unnamed";
    static constexpr const double def_balance =0.0;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Checking_Account(){
        std::cout<<"Destructor for Checking Account: "<<name<<std::endl;
    };

};

#endif // CHECKING_ACCOUNT_HPP
