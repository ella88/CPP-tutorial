#include <iostream>
#include <string>

using namespace std;

class Shallow{
private:
    int *data;
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}
    
// constructor
    Shallow(int d);
    Shallow(const Shallow &source);
    
// desctructor
    ~Shallow();
};


Shallow::Shallow(int d){
    data = new int; // allocate the memory storage
    *data = d;
}
Shallow::~Shallow(){
    delete data;  // free storage
    cout<<"Destructor called to free data"<<endl;
}

// shallow copy
Shallow::Shallow(const Shallow &source)
    : data(source.data){
        cout<<"Copy constructor - shallow"<<endl;
}



// Deep copy demo
class Deep{
private:
    int *data;
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}
    
// constructor
    Deep(int d);
    Deep(const Deep &source);
    
// desctructor
    ~Deep();
};
Deep::Deep(int d){
    data=new int;
    *data = d;
}
Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}
// deep copy
//Deep::Deep(const Deep &source){
//    data = new int; // note the difference with shallow copy
//    *data = *source.data;
//    cout<<"Copy constructor - deep"<<endl;
//}

// delegate to Deep(int) and pass the int (*source.data) source is pointing to
Deep::Deep(const Deep &source)
    :Deep{*source.data}{
        cout<<"Copy constructor - deep copy"<<endl;
    }



void display(Deep s){
    cout<<s.get_data_value()<<endl;
}

int main(){
    Deep obj1{100};
    display(obj1);
    
	return 0;
}
