#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <string>
#include <deque>

bool is_palindrome(const std::string &s){
    std::deque<char> dq;
    for(char c: s){
        if(std::isalpha(c))
            dq.push_back(std::toupper(c));
    }
    char c1{};
    char c2{};
    while(dq.size()>1){
        c1=dq.front();
        c2=dq.back();
        dq.pop_front();
        dq.pop_back();
        if(c1!=c2)
            return false;
    }
    return true;
}

int main(){
    bool is = is_palindrome("Ana is santa!");
    std::cout<<is;
    
	return 0;
}
