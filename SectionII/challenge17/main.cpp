#include <iostream>
#include <memory>
#include <vector>

using namespace std;

/**demo of custom deleter*/
class Test{
private:
    int data;
public:
    Test(): data{0} {cout<<"\tTest constructor ("<<data<<")"<<endl;}
    Test(int d)
        : data{d}{cout<<"\tTest constructor ("<<d<<")"<<endl;}
    int get_data() const{return data;}
    ~Test(){cout<<"\tTest destructor "<<data<<endl;}
};

void my_deleter(Test *ptr){
    cout<<"\tUsing my custom function deleter"<<endl;
}

// function prototypes
auto make(){
    return make_unique<vector<shared_ptr<Test>>>(); // creating the vector
}

void fill(vector<shared_ptr<Test>> &vec, int num){
    for(auto i{0}; i<num; ++i){
        cout<<"What data you want to enter ["<<i+1<<"] :";
        int data;
        cin>>data;
        shared_ptr<Test> ptr = make_shared<Test>(data);
        vec.push_back(ptr);
    }
}

void display(const vector<shared_ptr<Test>> &vec){
    cout<<"================ Displaying ptr ================ "<<endl;
    for(auto ptr:vec){
        cout<<"Data: "<<ptr->get_data()<<endl;
    }
}

int main(){
//    {
//        // using a function, when the ptr1 is deleted, it will call my_deleter
//        shared_ptr<Test> ptr1{new Test(100), my_deleter}; // must use new, cannot use make_shared
//        //shared_ptr<Test> ptr2=make_shared<Test>(100);
//    }
//    cout<<"================================="<<endl;
//    {
//        // using lambda
//        shared_ptr<Test> ptr3(new Test(200),
//            [] (Test *ptr){
//                cout<<"\tUsing my custom lamdba deleter"<<endl;
//                delete ptr;
//            });
//        
//    }
    std::unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout<<"How many data points you want to eneter: ";
    int num;
    std::cin>>num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
	return 0;
}
