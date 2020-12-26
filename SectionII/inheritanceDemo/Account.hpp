#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <string>
class Account
{
friend std::ostream &operator<<(std::ostream &os, const Account &account);
    
public:
    double balance;
    Account();
    Account(double money);
    void deposit(double amount);
    void withdraw(double amount);
    void display() const;
    ~Account();

};

#endif // ACCOUNT_HPP
