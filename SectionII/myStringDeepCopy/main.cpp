#include <iostream>
#include "Mystring.hpp"

using namespace std;
int main(){
//    Mystring empty;
//    Mystring pass{"Pass!"};
//    Mystring getA{pass};
//    empty.display();
//    pass.display();
//    getA.display();
//	Mystring a{"Hello"};
//    Mystring b;
//    b=a;
//    b.display();
//    a.display();
//    b="this is a test!";
//    b.display();
//    a.display();
    
//    Mystring a{"Hello"};
//    a=Mystring{"Hola"};
//    a = "Bonjour";
//    Mystring name{"harry"};
//    name.display();
//    Mystring yourName;
//    yourName = +name;
//    name.display();
//    yourName.display();
//    if(name==yourName){
//        cout<<"Hello!"<<endl;}
//    else{
//        cout<<"Goodbye!"<<endl;}
    Mystring greeting{" How do you do?"};
    Mystring name{"David"};
    Mystring say;
    say = name + " hello" + greeting;
    say.display();
    return 0;
}
