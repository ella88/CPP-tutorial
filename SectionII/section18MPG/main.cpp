#include <iostream>
#include <string>

double calculate_mpg(int miles, int gallons){
        if(gallons==0)
            throw 0;
        if(gallons<0 || miles<0)
            throw std::string{"Negative value is not allowed"}; // thow an object
        
        return static_cast<double>(miles)/gallons;
}

int main(){
    int miles{};
    int gallons{};
    double mile_per_gallon{};
    
    std::cout<<"Enter the miles: ";
    std::cin>>miles;
    std::cout<<"Enter the gallons: ";
    std::cin>>gallons;
//    try{
//        if(gallons==0)
//            throw 0;
//        mile_per_gallon = static_cast<double>(miles)/gallons; // no exception handling
//        std::cout<<"Result: "<<mile_per_gallon<<std::endl;
//    }catch(int &ex){
//        std::cerr<<"Sorry you can not divide by zero"<<std::endl;        
//    }
//    
//    
    try{
        mile_per_gallon = calculate_mpg(miles, gallons);
        std::cout<<"Miles per gallon is: "<<mile_per_gallon<<std::endl;
    }catch(int &ex){
        std::cout<<"Can't divid by zero"<<std::endl;
    }catch(std::string &ex){
        std::cout<< ex;
    }
    
	return 0;
}
