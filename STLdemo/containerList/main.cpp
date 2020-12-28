#include <iostream>
#include <list>
#include <string>
#include <forward_list>

class Person{
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person()=default;
    Person(std::string _name, int _age)
        :name{_name}, age{_age}{}
    bool operator==(const Person &rhs) const{
        return this->name==rhs.name && this->age==rhs.age;
    }
    bool operator<(const Person &rhs) const{
        return this->age<rhs.age;
    }
    
    //destructor
    ~Person() = default;
};
std::ostream &operator<<(std::ostream &os, const Person &p){
    os<<p.name<<"-"<<p.age;
    return os;
}



template <typename T>
void display(std::list<T> &lst){
    for(T x:lst){
        std::cout<<x<<", ";
    }
    std::cout<<std::endl;
}

template <typename T>
void display(std::forward_list<T> &lst){
    for(T x: lst){
        std::cout<<x<<", ";
    }
    std::cout<<std::endl;
}

void test1(){
    std::list<int> lst{1,2,3,4,20};
    std::cout<<lst.size()<<std::endl;
    std::cout<<lst.max_size()<<std::endl;
    std::cout<<lst.front()<<std::endl;
    std::cout<<lst.back()<<std::endl;
    lst.push_back(30);
    lst.push_front(50);
    display(lst);
    lst.pop_front();
    lst.pop_back();
    display(lst);
    lst.emplace_back(100);
    lst.emplace_front(200);

    display(lst);
}
void test2(){
    std::list<int> lst{1,2,3,4,20};
    auto it = std::find(lst.begin(), lst.end(), 3);
    lst.insert(it, 300);
    display(lst);
    lst.erase(it);
    display(lst);
    lst.resize(4); // keep 4 elements
    display(lst);  
    lst.resize(2); // keep 2 elements
    display(lst);
    lst.resize(10); // keep 10 elements, if empty, then fill with 0
    display(lst);
}

void test3(){
    std::forward_list<int> lst{1,2,3,4,5,6};
    auto it = find(lst.begin(), lst.end(), 3);
    lst.insert_after(it, 10);
    display(lst);
    //lst.emplace_after(100);
    lst.erase_after(it);  // erase it
    display(lst);
    
    lst.resize(3);
    display(lst);
    lst.resize(10);
    display(lst);
}

void test4(){
    std::list<int> lst{1,2,3,4,5,6};
    auto it = find(lst.begin(), lst.end(), 3);
    if(it!=lst.end()){
        lst.insert(it, 100);
    }
    display(lst);
    
    std::list<int> lst2;
    lst2={100,200,300};
    lst.insert(it, lst2.begin(), lst2.end());
    display(lst);
    
    std::cout<<"======================================"<<std::endl;
    std::cout<<*it<<std::endl;
    std::advance(it, -4); //move iterator to rge left 4 position
    std::cout<<*it<<std::endl;
    std::cout<<"======================================"<<std::endl;
    lst.erase(it);
    display(lst);
}

void test5(){
    std::list<Person> stooges{
        {"Larry", 18},
        {"Moe", 29},
        {"Anne", 32}
    };
    display(stooges);
    std::string name{};
    int age{};
    std::cout<<"Enter the name: ";
    std::cin>>name;
    std::cout<<"Enter the age: ";
    std::cin>>age;
    stooges.emplace_back(name, age); // efficient than creating a Person and then insert
    display(stooges);
    
    // need override operator ==
    auto it = find(stooges.begin(), stooges.end(), Person{"Moe", 29});
    if(it!=stooges.end()){
        stooges.emplace(it, "Frank", 29);
    }
    display(stooges);
    
    // sort
    stooges.sort();
    display(stooges);
    
    
}

int main(){
    
    //test2();
    // test3();
    // test4();
    test5();
    
    
	return 0;
}
