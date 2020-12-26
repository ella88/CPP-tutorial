#ifndef ACCOUNT_UTIL_HPP
#define ACCOUNT_UTIL_HPP
#include <vector>
#include "Account.hpp"
#include "Saving_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"

// display all Account
void display(const std::vector<Account*> &accounts);
// deposit amount to each Account in accounts
void deposit(std::vector<Account*> &accounts, double amount);
// withdraw amount from each Account in accounts
void withdraw(std::vector<Account*> &accounts, double amount);



#endif // ACCOUNT_UTIL_HPP
