#ifndef TRUST_ACCOUNT_HPP
#define TRUST_ACCOUNT_HPP
#include "Saving_Account.hpp"

class Trust_Account:public Saving_Account
{
friend std::ostream &operator<<(std::ostream &os, const Trust_Account &acc);

private:
    int limit;
    static constexpr const int withdrawal_limit=3;
    static constexpr const char *def_name="Unnamed";
    static constexpr const double def_balance =0.0;
    static constexpr int max_withdrawls =3;
    static constexpr double bonus =50;
    static constexpr double max_withdrawl_percent=0.2;
    static constexpr const double rate =3.0;
protected:
    int withdrawl_cnt;
public:
    Trust_Account(std::string name = def_name, double balance=def_balance, double int_rate = rate);
    int get_limit() const{return limit;}
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual~Trust_Account(){
        std::cout<<"Destructor for Trust Account: "<<name<<std::endl;
    }

};

#endif // TRUST_ACCOUNT_HPP
