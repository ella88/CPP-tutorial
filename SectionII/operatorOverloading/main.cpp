#include <iostream>
#include "Mystring.hpp"

int main(){
    Mystring name{"David"};
    Mystring greeting{"Hello"};
    Mystring now;
    now=greeting+" "+name; // can only be used in this way. Mystring now; now=name+greeting compile error
    now.display();
    
	return 0;
}
