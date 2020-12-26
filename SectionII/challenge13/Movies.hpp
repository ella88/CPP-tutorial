#ifndef MOVIES_HPP
#define MOVIES_HPP
#include <string>
#include <vector>
#include "Movie.hpp"

using namespace std;
class Movies
{
private:
     static int num_of_movies;
     static vector<Movie> movies;
    
public:
    //method
    bool add_movie(string movie_name, string rating, int watched);
    bool increment_watched(string movie_name);
    bool check_movie(Movie movie_name);
    void display();
    static vector<Movie> get_movie(){return movies;}
    static int get_movies_num();
    // constructor
    Movies();
    ~Movies();

};

#endif // MOVIES_HPP
