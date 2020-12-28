#include <iostream>
#include <array>
#include <numeric>

using namespace std;

void display(const array<int, 5> &arr){
    cout<<"\n[";
    for(auto num:arr){
        cout<<num<<", ";
    }
    cout<<"]\n";
}
void test1(){
    cout<<"\nTest1=============================="<<endl;
    array<int, 5> arr1 {1,2,3,4,5};
    array<int, 5> arr2{10,20,30,40,50};
    display(arr1);
    display(arr2);
    arr1.swap(arr2);
    cout<<"\nAfter swapping =============================="<<endl;
    display(arr1);
    display(arr2);
    
    arr1[0]=1000;
    arr1.at(1)=2000;
    display(arr1);
    
    cout<<"Front element of arr1 is "<<arr1.front()<<endl;
    cout<<"Back element of arr2 is "<<arr1.back()<<endl;
    
    cout<<"arr1 size is: "<<arr1.size()<<endl;
    cout<<"arr2 size is: "<<arr2.size()<<endl;
}

void test2(){
    cout<<"\nTest2=============================="<<endl;
    array<int, 5> arr1;
    for(size_t i{0}; i<arr1.size(); i++){
        cout<<"What number you want to add: ";
        int num{};
        cin>>num;
        arr1[i]=num;
    }
    display(arr1);
}

void test3(){
    cout<<"\nTest3=============================="<<endl;
    array<int, 5> arr1 {1,2,3,4,5};
    int *ptr = arr1.data();
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=1000;
    display(arr1);
    arr1.fill(100);
    display(arr1);
}

void test4(){
    cout<<"\nTest4=============================="<<endl;
    array<int, 5> arr1 {7,55,12,6,20};
    display(arr1);
    sort(arr1.begin(), arr1.end()-2); // sort start idx to end idx
    cout<<"\nAfter sorting==============================="<<endl;
    display(arr1);
}

void test5(){
    cout<<"\nTest5=============================="<<endl;
    array<int, 5> arr1 {7,55,12,6,20};
    auto max_num = max_element(arr1.begin(), arr1.end()); // address of max number
    auto min_num = min_element(arr1.begin(), arr1.end()); // address of min number
    cout<<"Min number is "<<*min_num<<"; max num is "<<*max_num<<endl;
}

void test6(){
    cout<<"\nTest6=============================="<<endl;
    array<int, 10> arr1 {7,92,13,12,12,12,20,30,30,41};
    auto adjacent = adjacent_find(arr1.begin(), arr1.end());
    if(adjacent!=arr1.end()){
        cout<<"Adjacent elements found with value: "<<*adjacent<<endl;
    }else{
        cout<<"Adjacent elements can not be found"<<endl;
    }
}

void test7(){
    cout<<"\nTest7=============================="<<endl;
    array<int, 10> arr1 {1,2,3,4,5,6,7,8,9,10};
    int sum1 = accumulate(arr1.begin(), arr1.end(), 0); // last parameter is accumulate from
    cout<<"The sum of arr1 is "<<sum1<<endl;
    int sum2 = accumulate(arr1.begin(), arr1.end(), 100); 
    cout<<"The new sum of arr1 is "<<sum2<<endl;
}

void test8(){
    cout<<"\nTest7=============================="<<endl;
    array<int, 10> arr1 {1,2,3,4,5,6,7,3,9,3};
    int num{3};
    int cnt = count(arr1.begin(), arr1.end(), num); // count the occurrence of element
    cout<<"The occurrence of "<<num<<" is "<<cnt<<endl;

    int cnt2=count_if(arr1.begin(), arr1.end(), [](int x){
        return x>5;
    });
    cout<<"The number larger than 5 is "<<cnt2<<endl;
    
    bool all = all_of(arr1.begin(), arr1.end(), [](int x){
        return x%2==0;});
    if(all){
        cout<<"All the elements are even"<<endl;
    }else{
        cout<<"NOT all the elements are even"<<endl;
    }
}

int main(){
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    //test7();
    test8();
	return 0;
}
