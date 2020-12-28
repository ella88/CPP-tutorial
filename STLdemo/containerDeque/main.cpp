#include <iostream>
#include <deque>
#include <cstring>
#include <vector>

template <typename T>
void display(std::deque<T> &dq){
    for(T d: dq){
        std::cout<<d<<",";
    }
    std::cout<<std::endl;
}
void test1(){
    std::deque<int> d{1,2,3,4,5};
    std::deque<int> d1(10,100);  // initiate 10 integers, 100
    
    std::deque<std::string> stooges{
    std::string{"Larry"},
    "Moe",
    std::string{"Curly"}
    };
    
    d={2,4,6,8,10};
    d.push_back(12);
    d.push_front(20);
    display(d);
    d.pop_back();
    d.pop_front();
    display(d);
    d.emplace_front(25);
    d.emplace_back(35);
    display(d);
}
void test2(){
    std::vector<int>vec {1,2,3,4,5,6,7,8};
    std::deque<int> dq;
    for(const auto &elem:vec){
        elem%2==0?dq.push_back(elem):dq.push_front(elem);
    }
    display(dq);
}

void test3(){
    std::vector<int>vec {1,2,3,4,5,6,7,8};
    std::deque<int> dq;
    for(const auto &elem:vec){
        dq.push_front(elem);
    }
    display(dq);
    
    dq.clear();
    for(const auto &elem:vec){
        dq.push_back(elem);
    }
    display(dq);
}

void test4(){
     std::vector<int>vec {1,2,3,4,5,6,7,8};
    std::deque<int> dq;
    std::copy(vec.begin(), vec.end(), std::front_inserter(dq));
    display(dq);
    dq.clear();
    std::copy(vec.begin(), vec.end(), std::back_inserter(dq));
    display(dq);
}

int main(){
    //test1();
    //test2();
    //test3();
    test4();
	return 0;
}
