#include <iostream>
#include <list>
#include <string>

using namespace std;
class Song{
    friend std::ostream &operator<<(std::ostream &os, const Song &song);
    std::string title;
    int duration;
private:
    static constexpr const char *def_name="Unnamed Account";
    static constexpr int def_duration=0;
public:
    Song(std::string title = def_name, int duration=def_duration){};
};

std::ostream &operator<<(std::ostream &os, const Song &song){
    os<< song.title<<" - "<<song.duration<<std::endl;
    return os;
}

class Playlist{
    friend std::ostream &operator<<(std::ostream &os, const Playlist &plst);
    std::string name;
    std::list<Song> songs;
public:
    Playlist()=default;
    Playlist(list<Song> _songs)
        :songs{_songs}{};
    void play_first(){
        auto it = songs.begin();
    }
};
std::ostream &operator<<(std::ostream &os, const Playlist &plst){
    os<<"[ ";
    
}



int main(){
    std::cout << "My Template!" << std::endl;
	return 0;
}
