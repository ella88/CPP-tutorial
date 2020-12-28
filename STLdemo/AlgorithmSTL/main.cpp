#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <list>

void square(int x){
    std::cout<<x*x<<" ";
}

class Person{
    std::string name;
    int age;
public:
    Person()=default;
    Person(std::string name, int age)
        :name(name), age(age){};
    bool operator<(const Person &rhs) const{
        return this->age<rhs.age;
    }
    bool operator==(const Person &rhs) const{
        return (this->age==rhs.age && this->name==rhs.name);
    }
};

void find_test1(){
    std::cout<<"\n================Test 1===================="<<std::endl;
    std::vector<int> vec{1,2,3,4,5};
    auto loc=std::find(std::begin(vec), std::end(vec), 1);
    if(loc!=std::end(vec)){
        std::cout<<"Found the number "<<*loc<<std::endl;
    }else{
        std::cout<<"Could not find the number "<<*loc<<std::endl;
    }
}

void find_test2(){
    std::cout<<"\n=================Test 2==================="<<std::endl;
    std::vector<Person> person;
    person.push_back(Person{"David",20});
    person.push_back(Person{"Dane", 28});
    person.push_back(Person{"Alice",25});
    person.push_back(Person{"Dana", 32});
    auto loc = std::find(std::begin(person), std::end(person), Person{"Alice",25});
    if(loc!=std::end(person)){
        std::cout<<"Found the person "<<std::endl;
    }else{
        std::cout<<"Could not find the person "<<std::endl;
    }
}

void count_test(){
    std::cout<<"\n================Count, Count_if Test===================="<<std::endl;
    std::vector<int> vec{1,2,36,4,5,1,3,18,7,3,24,5,3,21,2};
    int x{8};
    int num = std::count(vec.begin(), vec.end(),x);
    std::cout<<"The occurrence of "<<x<<" is "<<num<<std::endl;
    
    // count_if test, lambda function
    
    int even = std::count_if(vec.begin(), vec.end(), [] (int x){
        return x%2==0;});
    int odd = std::count_if(vec.begin(), vec.end(), [] (int x){
        return x%2!=0;});
    std::cout<<"The even number count is "<<even;
    std::cout<<"The number can be divided by 6 is "<<odd;
    
    // all_of, determine whether all elements meet some condition, if yes, ture
   
    bool yes = std::all_of(vec.begin(), vec.end(), [](int x){
        return x<20;});
    if(yes){
        std::cout<<"\nAll elements are smaller than 20."<<std::endl;
    }else{
        std::cout<<"\nAll elements are NOT smaller than 20."<<std::endl;
    }
}
    
void string_transform_test(){
    std::cout<<"\n================Transform===================="<<std::endl;
    std::string str1{"This is a string"};
    std::cout<<"Before transform"<<str1<<std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::cout<<"After transform"<<str1<<std::endl;
    
}

int main(){
//    std::vector<int> vec{1,2,3,4,5,6,7,8,9};
//    std::for_each(vec.begin(), vec.end(), [] (int x){
//        std::cout<<x*x<<" ";
//        });
//        
//    std::cout<<"\n===============Functor=============="<<std::endl;
//    std::for_each(vec.begin(), vec.end()-5, square);
//    

    //find_test2();
    //count_test();
    //count_test();
    string_transform_test();
    return 0;
}
