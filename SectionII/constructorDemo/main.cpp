#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string name; 
    int health;
    int xp;
public:
    void set_name(string name_val){
        name = name_val;
    }
    // overloaded constructor
    Player(){
        cout<<"No arguments constructor called"<<endl;
    }
    Player(string name){
        cout<<"String arg constructor called"<<endl;
    }
    Player(string name, int health, int xp){
        cout<<"Three args constructor called"<<endl;
    }
    // destructor
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};


int main(){
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank; // no arg
        frank.set_name("Frank");
        Player hero("Hero");// using 2nd constructor
        Player villian("Villian", 100, 12);
        villian.set_name("Enemy");
    }
    
    
	return 0;
}
