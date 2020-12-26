#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
//    double high_temp{100.7};
//    double low_temp{30.7};
//    double *temp_ptr{&high_temp};
//    temp_ptr = &low_temp; // dereferene
//    cout<< *temp_ptr<<endl;
//    
//    string name{"Jami"};
//    string *str_ptr{&name};
//    
//    cout<<*str_ptr<<endl;
//    name = "Alice";
//    cout<<"name is "<<name<<endl;
//    cout<<*str_ptr<<endl;
//    
//    
//    
//    vector<int> nums{};
//    vector<int> *num_ptr{&nums};
//    for(size_t i{0}; i<5; i++) nums.push_back(i);
//    for(auto num:*num_ptr) cout<<num;
//    
    
    
    
    int temp{37};
    int *num_ptr{nullptr};
    num_ptr = &temp;
    *num_ptr = 45;
    cout<<temp<<"-----"<<*num_ptr<<endl;
    
    
    
    vector<int> nums{};
    vector<int> *nums_ptr{nullptr};
    nums_ptr=&nums;
    
    for(size_t i=0; i<105; i++) nums.push_back(i);
    vector<int> temp3{};
    for(auto n:nums) {
        if(n%2==0 && n%3==0) temp3.push_back(n);
    }
    nums=temp3;
    cout<<nums[1]<<" ---  "<< (*nums_ptr).at(1)<<endl;
    for(auto num:*nums_ptr) cout<<"----->"<<num<<endl;
    delete nums_ptr; // free the allocation
    
    int scores[] {100,95,99};
//    int *score_ptr{nullptr};
//    score_ptr = scores; 
    int *score_ptr{scores};
    cout<<scores<<endl;
    cout<<*scores<<endl;
    cout<<"------------------------------>"<<endl;
    
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;
    
    cout<<"------------------------------>"<<endl;
    
    cout<<score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;
    
    delete score_ptr; // free the storage
    
    int *arr_ptr{nullptr};
    int size{};
    cout<<"How big do you want the array? ->";
    cin>>size;
    arr_ptr = new int[size]; // allocate the array on the heap, dynamic memory allocation
    for(size_t i{0}; i<size; i++){
        int num{};
        cout<<"Please enter the integer you want to store:";
        cin>>num;
        arr_ptr[i]=num;
    }
    delete [] arr_ptr;
    
	return 0;
}
