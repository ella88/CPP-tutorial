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
    string get_name(){ return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    // default constructor
    Player(string name="None", int health=0, int xp=0);
    // copy constructor
    Player(const Player &source);
    // destructor
    ~Player(){cout<<"Desctructor called for "<<name<<endl;}
};
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val},health{health_val},xp{xp_val}{
        cout<<"Three args constructor called for "<<name<<endl;
}
// copy constructor
Player::Player(const Player &source)
    :name{source.name}, health{source.health},xp{source.xp}{
    //:Player(source.name, source.health, source.xp){
        cout<<"Copy constructor - made copy of: "<<source.name<<endl;
}
// pass by value, a new copy of p is created
void display_player(Player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}


int main(){
    Player empty{"XXXXX", 100, 50};
    Player my_new_copy{empty};
    //display_player(my_new_copy);
    
//    Player frank("Frank");
//    Player hero("Hero", 100);
//    Player boss("Boss", 200, 20);
	return 0;
}
