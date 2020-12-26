#include <iostream>
#include <memory>
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


int main(){
    {
        // using a function, when the ptr1 is deleted, it will call my_deleter
        shared_ptr<Test> ptr1{new Test(100), my_deleter}; // must use new, cannot use make_shared
        //shared_ptr<Test> ptr2=make_shared<Test>(100);
    }
    cout<<"================================="<<endl;
    {
        // using lambda
        shared_ptr<Test> ptr3(new Test(200),
            [] (Test *ptr){
                cout<<"\tUsing my custom lamdba deleter"<<endl;
                delete ptr;
            });
        
    }
	return 0;
}
