#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <string>
#include "I_Printable.hpp"
class Account:public I_Printable
{
private:
    static constexpr const char *def_name="Unnamed Account";
    static constexpr double def_balance=0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance=def_balance);
    virtual bool deposit(double amount)=0;
    virtual bool withdraw(double amount)=0;
    virtual void print(std::ostream &os) const override;
    virtual ~Account(){
        std::cout<<"Destructor for Base Account: "<<name<<std::endl;
    };

};

#endif // ACCOUNT_HPP
