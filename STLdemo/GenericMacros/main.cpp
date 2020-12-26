#include <iostream>
#include <string>
#define MAX(a,b) ((a>b)?a:b)
#define SQUARE(a) ((a)*(a)) //note the parenthesis
#define ADDTITION(a, b) ((a)+(b))

int main(){
    std::cout<<MAX(10,20)<<std::endl;
    std::cout<<MAX(10.5,20.5)<<std::endl;
    std::cout<<MAX('A','B')<<std::endl;
    
    int result = SQUARE(5);
    std::cout<<result<<std::endl;
    
    std::string s1{"Hello "};
    std::string s2{"World!"};
    std::string s3=ADDTITION(s1, s2);
    std::cout<< s3<<std:: endl;
    
    int a{10};
    int b{20};
    int c=ADDTITION(a,b);
    std::cout<<"Addition: "<<c<<std::endl;
	return 0;
}
