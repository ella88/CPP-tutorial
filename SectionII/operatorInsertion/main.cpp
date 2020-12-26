#include <iostream>
#include "Mystring.hpp"
using namespace std;

int main(){
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;
    cout<<"Enter the third stooge's first name: ";
    cin>>curly;
    
    cout<<"The three stooges are "<<larry<<" "<<moe<<" "<<curly<<endl;
    
    cout<<"Enter the three names for three stooges separated by space: "<<endl;
    cin>>larry>>moe>>curly;
    
    cout<<"The three stooges are "<<larry<<" "<<moe<<" "<<curly<<endl;
    
	return 0;
}
