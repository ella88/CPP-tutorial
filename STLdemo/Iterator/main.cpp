#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;

void display(const std::vector<int> &vec){
    cout<<"[";
    for(auto const &i : vec){
        cout<<i<<"; ";
    }
    cout<<"]"<<endl;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const vector<T> &vec){
    os<<"[";
    for(auto num:vec){
        os<<num<<", ";
    }
    os<<"]";
    return os;
}

void test1(){
    cout<<"\n==========================================="<<endl;
    vector<int> nums1{1,2,3,4,5};
    auto it=nums1.begin(); // point to 1
    cout<< *it<<endl; // dereferrence
    
    it++; // point to 2
    cout<< *it<<endl;
    cout<<"\n==========================================="<<endl;
    while(it!=nums1.end()){
        cout<<*it<<endl;
        ++it;
    }
    
}

void test2(){
    cout<<"\n==========================================="<<endl;
    vector<int> nums1{1,2,3,4,5};
    cout<<nums1;
    auto it = nums1.begin();
    while(it!=nums1.end()){
        *it =0;
        ++it;
    }
    cout<<nums1;
}

void test3(){
    cout<<"\n==========================================="<<endl;
    vector<int> nums{1,2,3,4,5};
    auto it = nums.rbegin(); // reverse iterator, from end to start, ++ move backward
    // end is start, start is end
    while(it != nums.rend()){
        // reverse end
        cout<<*it<<", ";
        ++it;
    }
}

void test4(){
    // using a constant iterator
    cout<<"\n==========================================="<<endl;
    vector<int> nums{10,20,30,40,50};
    auto it = nums.crbegin(); // reverse constant iterator
    cout<<*it<<endl;
    it++;
    // *it=100; // compile error
    cout<<*it<<endl;
}

void test5(){
    map<string,string> favorites{
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James","NodeJS"}
    };
    auto it = favorites.begin();
    while(it!=favorites.end()){
        cout<<it->first<<": "<<it->second<<endl;
        ++it;
    }
}

void test6(){
    cout<<"\n==========================================="<<endl;
    vector<int> nums{1,2,3,4,5,6,7,8,9,10};
    auto start = nums.begin()+1;
    auto finish = nums.end()-3;
    while(start!=finish){
        cout<<*start<<endl;
        cout<<*finish<<endl;
        start++;
        finish--;
    }
}

int main(){
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
	return 0;
}
