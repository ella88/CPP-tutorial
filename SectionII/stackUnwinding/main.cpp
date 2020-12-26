#include <iostream>
#include <string>

using namespace std;
void func_a();
void func_b();
void func_c();

void func_a(){
    cout<<"Calling function a"<<endl;
    func_b();
    cout<<"Ending function a"<<endl;
}

void func_b(){
    cout<<"Calling function b"<<endl;
    try{
        func_c();
    }catch(int &ex){
        cout<<"Catch an error in func_b."<<endl;
    }
    cout<<"Ending function b"<<endl;
}

void func_c(){
    cout<<"Calling function c"<<endl;
    throw 100;
    cout<<"Ending function c"<<endl;
}


//* define our own exception class*/
class DivideByZeroException{
};
class NegativeValueException{
};
double calculate_mpg(int miles, int gallon){
    if(gallon==0)
        throw DivideByZeroException();
    if(miles<0 || gallon<0)
        throw NegativeValueException();
    return static_cast<double>(miles)/gallon;
}


int main(){
    cout<<"Starting main."<<endl;
//    try{
//        func_a();
//    }catch(int &ex){
//        cout<<"Catch an error in main."<<endl;
//    }
    
    int miles{};
    int gallons{};
    double mpg{};
    cout<<"Enter the miles: ";
    cin>>miles;
    cout<<"Enter the gallons: ";
    cin>>gallons;
    try{
        mpg=calculate_mpg(miles, gallons);
    }catch(const DivideByZeroException &ex){
        cout<<1<<endl;
    }catch(const NegativeValueException &ex){
        cout<<-1<<endl;
    }
    
    cout<<"Ending main."<<endl;
	return 0;
}
