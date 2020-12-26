#include <iostream>
#define MAX(a,b) ((a>b)?a:b)

int main(){
    std::cout<<MAX(10,20)<<std::endl;
    std::cout<<MAX(10.5,20.5)<<std::endl;
    std::cout<<MAX('A','B')<<std::endl;
	return 0;
}
