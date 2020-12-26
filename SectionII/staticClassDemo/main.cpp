#include <iostream>
#include "Player.hpp"

using namespace std;
void display_active_player(){
    cout<<"Active players: "<<Player::get_num_players()<<endl;
}

int main(){
    Player hero{"Hero", 100, 10};
    display_active_player();
    Player villian{"Villian", 200, 20};
    display_active_player();
	return 0;
}
