#include <iostream>
#include <vector>

using namespace std;
class Person{
    friend ostream &operator<<(ostream &os, const Person &p);
    string name;
    int age;
public:
    Person()=default;
    Person(string _name, int _age)
        :name{_name}, age{_age}{};
    bool operator==(const Person &rhs) const{
        return (this->name==rhs.name && this->age==rhs.age);
    }
    bool operator<(const Person &rhs) const{
        return this->age < rhs.age;
    }
};

ostream &operator<<(ostream &os, const Person &p){
    os<<"Name: "<<p.name <<"; Age: "<<p.age<<endl;
    return os;
}

template <typename T>
void display(const vector<T> &persons){
    for(T p:persons){
        cout<<p<<",";
    }
    cout<<endl;
}

void test9(){
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{10,20};
    
    // copy vec1 from begin to end to vec2
    copy(vec1.begin(), vec1.end(), back_inserter(vec2)); // cocpy vec1 to vec2, from the back
    //display(vec1);
    //display(vec2);
    
    // copy vec1 from begin to end to vec2 only if x in vec1 meets the condition
    copy_if(vec1.begin(), vec1.end(), back_inserter(vec2), [](int x){
        return x%2==0;});
    //display(vec1);
    //display(vec2);
    vector<int> vec3;
    transform(vec1.begin(), vec1.end(), vec2.begin(), back_inserter(vec3), [](int x, int y){
        return x*y;});
    // get element from vec1 and vec2, transform them in the rule defined in lambda function, and insert back to vec3
    display(vec3);
    
    auto it = find(vec1.begin(), vec1.end(), 3);
    if(it!=vec1.end()){
        vec1.insert(it, vec3.begin(), vec3.end()); // insert in middle is less efficient than insert at end
    }else{
        cout<<"5 can not be found in vec1."<<endl;
    }
    display(vec1);
}

int main(){
//    vector<string> stooges{
//        string{"Larry"}, "Moe", string{"Curly"}
//    };
//    vector<Person> vec;
//    Person p1{"Alice", 28};
//    vec.push_back(p1);   // add p1 into vec, need to copy p1
//    vec.pop_back();      // remove p1 from vec
//    //vec.emplace_back("Larry",18); // no copy, efficient
//    vector<string> names{"Dan", "Betty", "Jamie", "Cindy","Ellen"};
//    vector<int> ages{18,17,28,29,30};
//    
//	vector<int> vec1 {1,2,3,4,5};
//    vector<int> vec2 (10,100); // ten 100
//    auto it = find(vec1.begin(), vec1.end(),3);
//    for(auto x:vec1){
//        cout<<x<<" ";
//    }
//    cout<<"\n========================================="<<endl;
//    vec1.insert(it, 10); //add 10 into the position before it
//    it = find(vec1.begin(), vec1.end(), 4);
//    vec1.insert(it,vec2.begin(), vec2.end());
//    for(auto x:vec1){
//        cout<<x<<" ";
//    }
    test9();
    return 0;
}
