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
// overload constructors
    
    Player(string name_val="None", int health_val=0, int xp_val=0);
};

//Player::Player()
//    :Player{"None", 0,0}{
//        cout<<"No arg constructor called"<<endl;
//}
//
//Player::Player(string n)
//    :Player{n, 0,0}{
//        cout<<"String arg constructor called"<<endl;
//}

Player::Player(string n, int h_val, int xp_val)
    :name{n}, health{h_val},xp{xp_val}{
        cout<<"All three args constructor called"<<endl;
}

int main(){
    Player frank;
    Player hero("Hero");
    Player queen("Queen", 200);
    Player monster("Enemy", 100, 10);
    
	return 0;
}
