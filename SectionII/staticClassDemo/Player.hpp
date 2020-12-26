#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
class Player
{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;

public:

    std::string get_name() const {return name;}
    int get_health() const {return health;}
    int get_xp() const {return xp;}
    // constructor
    Player(std::string name_val = "None", int h_val = 0, int xp_val = 0);
    // copy constructor
    Player(const Player &source);
    
    // destructor
    ~Player();
    
    static int get_num_players(); // only access to static
};

#endif // PLAYER_HPP
