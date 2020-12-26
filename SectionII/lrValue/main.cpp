#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Move{
private:
    int *data;
public:
    void set_date_value(int d){*data=d;}
    int get_data() const {return *data;}
    // constructor
    Move(int d);
    // copy constructor
    Move(const Move &source);
    // Move constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

Move::Move(int d){
    data = new int;
    *data = d;
    cout<<"Constructor for: "<<d<<endl;
}

//copy -deep
Move::Move(const Move &source)
    :Move(*source.data){
        cout<<"Copy constructor - deep copy for:"<<*data<<endl;
}

// Move 
Move::Move(Move &&source) noexcept
    :data{source.data}{
        source.data = nullptr;
        cout<<"Move constructor - moving resource "<<*data<<endl;
}

// destructor
Move::~Move(){
    if(data!=nullptr){
        cout<<"Destructor freeing data for "<<*data<<endl;
    }else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
}


int main(){
    
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    
	return 0;
}
