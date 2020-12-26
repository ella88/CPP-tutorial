#ifndef ACCOUNT_UTIL_HPP
#define ACCOUNT_UTIL_HPP
#include <vector>
#include "Account.hpp"
#include "Saving_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"

// display all Account
void display(const std::vector<Account> &accounts);
// deposit amount to each Account in accounts
void deposit(std::vector<Account> &accounts, double amount);
// withdraw amount from each Account in accounts
void withdraw(std::vector<Account> &accounts, double amount);


// display all Saving_Account
void display(const std::vector<Saving_Account> &saving_accounts);
// deposit amount to each Saving_Account in saving_accounts
void deposit(std::vector<Saving_Account> &saving_accounts, double amount);
// withdraw amount from each Saving_Account in saving_accounts
void withdraw(std::vector<Saving_Account> &saving_accounts, double amount);

// display all Checking_Account
void display(const std::vector<Checking_Account> &checking_accounts);
// deposit amount to each Checking_Account in checking_accounts
void deposit(std::vector<Checking_Account> &checking_accounts, double amount);
// withdraw amount from each Checking_Account in checking_accounts
void withdraw(std::vector<Checking_Account> &checking_accounts, double amount);

// display all Trust_Account
void display(const std::vector<Trust_Account> &trust_accounts);
// deposit amount to each Trust_Account in trust_accounts
void deposit(std::vector<Trust_Account> &trust_accounts, double amount);
// withdraw amount from each Trust_Account in trust_accounts
void withdraw(std::vector<Trust_Account> &trust_accounts, double amount);



#endif // ACCOUNT_UTIL_HPP
