#include <iostream>
#include "Mystring.hpp"

using namespace std;

int main(){
    Mystring alice{"Alice"};
    Mystring ben{"Ben"};
//    alice += ben;
//    alice.display();
//    Mystring name;
//    name = alice+ben;
//    name.display();
    
//    alice *= 3;
//    alice.display();
//    alice+=ben;
//    alice.display();
//    ++alice;
//    alice.display();
    
	
    int repeat_times;
    Mystring repeat_string;
    cout<<"Enter the string you want to repeat: ";
    cin>>repeat_string;
    cout<<endl;
    cout<<"Enter the times you want to repeat: ";
    cin>>repeat_times;
    repeat_string =repeat_string*repeat_times;
    cout<<"The resulting string is "<<repeat_string<<endl;
    
    cout<<(repeat_string*12)<<endl;
    
    return 0;
}
