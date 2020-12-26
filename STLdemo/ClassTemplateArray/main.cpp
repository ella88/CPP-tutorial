#include <iostream>
#include <string>

using namespace std;
template <typename T, int N>
class Array{
    int size{N};
    T values[N]; // the N needs to know when initiation
    
    friend std::ostream &operator<<(std::ostream &os, const Array &arr){
        os<<"[";
        for(const auto &val:arr.values){
            os<<val<<" ";
        }
        os<<"]"<<endl;
        return os;
    }
public:
    // constructor
    Array() = default;
    Array(T init_val){
        for(auto &item:values){
            item=init_val;
        }
    }
    void fill(T val){
        for(auto &item:values)
            item=val;
    }
    int get_size() const{
        return size;
    }
    
    T &operator[](int index){
        return values[index];
    }
};

int main(){
    Array<string, 5> words;
    cout<<"The size of the array is "<<words.get_size()<<endl;
    words.fill("hello");
    cout<<words;
	return 0;
}
