#include <iostream>
#include "Account.hpp"
using namespace std;

int main(){
    Account frank_account;
    frank_account.set_balance(5000.0);
    frank_account.set_name("Frank's account");
    
    if(frank_account.deposit(1000.0)){
        cout<<frank_account.get_balance()<<endl;
    }
    
    if(frank_account.withdraw(8000.0)){
        cout<<frank_account.get_balance()<<endl;
    }else{
        cout<< "No enough amount."<<endl;
    }
    
	return 0;
}
