#include "Account.hpp"

void Account::set_name(std::string n){
    name=n;
}

std::string Account::get_name(){
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