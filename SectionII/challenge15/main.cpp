#include <iostream>
#include <vector>
#include "Account.hpp"
#include "Saving_Account.hpp"
#include "Account_Util.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"


using namespace std;

int main(){
    cout.precision(2);
    cout<<fixed;
    
    //Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
	Checking_Account acc;
    cout<<acc;
    acc.deposit(1000);
    acc.withdraw(500);
    cout<<acc;
    acc.withdraw(500);
    cout<<acc;
    Trust_Account tacc;
    cout<<tacc;
    tacc.deposit(6000);
    cout<<tacc;
    tacc.deposit(1000);
    cout<<tacc;
    tacc.withdraw(2000);
    cout<<tacc;
    tacc.withdraw(500);
    cout<<tacc;
    
    return 0;
}
