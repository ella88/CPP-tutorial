#include <iostream>
#include <utility>


template <typename T>
T max(T a, T b){
    return (a<b)?a:b;
}
template<typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout<<a<<" "<<b<<std::endl;
}

struct Person{
    std::string name;
    int age;
    bool operator<(const Person &rhs) const{
        return this->age<rhs.age;
    }
};

template<typename T>
void my_swap(T &a, T &b){
    T temp =a;
    a=b;
    b=temp;
}

std::ostream &operator<<(std::ostream &os, const Person &person){
    os<< "Name: "<<person.name<<"; age: "<<person.age<<std::endl;
    return os;
}

template <typename T1, typename T2>
struct My_Pair{
    T1 first;
    T2 second;
};

template <typename T>
struct Item{
    std::string name;
    T value;
    std::string get_name(){
         return name;
    }
    T get_value(){
        return value;
    }
};

int main(){
    double a{10.5};
    double b{20.5};
    double c=max<int>(a,b);
    std::cout<<"Max of "<<a<<" and "<<b<<" is "<<c<<std::endl;
    
    func<int, int>(20,30);
    func<char, double>('A', 10);
    
    Person p1{"Alice", 20};
    Person p2{"Dan", 25};
    Person p3=max(p1, p2);
    std::cout<<p3.name<<" is younger."<<std::endl;
    //func<Person, double>(p1, 12.5);
    
    std::cout<<p1<<p2<<std::endl;
    my_swap(p1,p2);
    std::cout<<"========== After Swapping==========="<<std::endl;
    std::cout<<p1<<p2<<std::endl;
    
    
    My_Pair<std::string, int> a1{"Frank", 25};
    My_Pair<std::string, double> a2{"Apple", 0.5};
    std::pair<std::string, int> pair1{"Betty", 29};
    std::cout<<pair1.first<<" "<<pair1.second<<std::endl;
    
    Item<int> item1{"David", 200};
    Item<Item<std::string>> instructor{"Frank", Item<std::string>{"C++", "Professor"}};
    std::cout<<instructor.get_name()<<"-->"<<instructor.get_value().get_name()<<" - "<<instructor.get_value().get_value()<<std::endl;
	return 0;
}
