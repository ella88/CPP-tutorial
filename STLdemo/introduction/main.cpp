#include <iostream>
#include <vector>

int main(){
    int sum{};
    int cnt{};
    std::vector<int> nums;
    
    std::cout<<"How many numbers you want to add to nums?";
    std::cin>>cnt;
    for(size_t i{0}; i<cnt; ++i){
        int curr{};
        std::cout<<"Enter the number: ";
        std::cin>>curr;
        nums.push_back(curr);
    }
    std::cout<<"====================Displaying=============="<<std::endl;
    for(auto num:nums){
        std::cout<<num<<"; ";
    }
    std::sort(nums.begin(),nums.end());
    std::cout<<"\n====================Displaying after sorting =============="<<std::endl;
    for(auto num:nums){
        std::cout<<num<<"; ";
    }
    std::reverse(nums.begin(),nums.end());
    std::cout<<"\n====================Displaying after reverse sorting=============="<<std::endl;
    for(auto num:nums){
        std::cout<<num<<"; ";
    }
    sum=std::accumulate(nums.begin(), nums.end(), 0);
    std::cout<<"Sum is: "<<sum<<std::endl;
    
    
	return 0;
}
