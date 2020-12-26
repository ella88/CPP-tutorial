#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>

using namespace std;

class Movie
{
private:
    string *name;
    string *rating;
    int *watch_count;
    
public:
    string get_name() const {return *name;}
    string get_rating() const {return *rating;}
    int get_watch_count() const {return *watch_count;}
    void watched(){ ++*watch_count;}
    void set_rating(string rate){*rating = rate;}
    void display();
    // constructor
    Movie(string name_val, string rate, int watch_cnt);
    
    // copy
    Movie(const Movie &source);
    
    // move
    Movie(Movie &&source) noexcept;
    // destructor
    ~Movie();

};

#endif // MOVIE_HPP
