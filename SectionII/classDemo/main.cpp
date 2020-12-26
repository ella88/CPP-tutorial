#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
public:
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string text_to_say){
        cout<<name<<" says "<<text_to_say<<endl;
    };
    
    bool is_dead();
};

class Account
{
public:
    // attributes
    string name{"Acount"};
    double balance{0.0};
    
    // methods
    bool deposit(double bal){
        balance+=bal;
        cout<<"In deposit"<<endl;
        return true;
    };
    
    bool withdraw(double bal){
        balance -=bal;
        cout<< "In withdraw"<<endl;
        return true;
    };
    
};


int main(){
    Player frank;
    Player hero;
    frank.name = "Frank";
    frank.health = 98;
    frank.xp=12;
    
    frank.talk("Hi, There!");
    
    Player players[]{frank, hero};
    vector<Player> player_vec{frank};
    player_vec.push_back(hero);
    
    
    Account frank_account;
    Account kate_account;
    frank_account.name = "Frank's account";
    frank_account.balance=5000.0;
    frank_account.deposit(1000.0);
    cout<<frank_account.balance<<endl;
    
    
    
    Player *enemy = new Player;
    (*enemy).name = "Monster";
    enemy->health = 1000;
    enemy->xp = 10;
    enemy->talk("I will kill you!");
    delete enemy;
    
    
	return 0;
}
