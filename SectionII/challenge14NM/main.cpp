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

	alice =alice*3;
    alice.display();
    return 0;
}
