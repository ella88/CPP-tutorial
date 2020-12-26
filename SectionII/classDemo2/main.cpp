#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account{
private:

    string name;
    double balance;
    
public: 
    void set_balance(double bal){
        balance = bal;
    }
    double get_balance(){
        return balance;
    }
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n){
    name=n;
}

string Account::get_name(){
    return name;
}

bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance -= amount;
    }else{
        return false;
    }
    return true;
}

bool Account::deposit(double amount){
    if(amount>=0){
        balance += amount;
    }else{
        return false;
    }
    return true;
}

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
