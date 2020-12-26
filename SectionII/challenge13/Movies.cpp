#include "Movies.hpp"
#include <string>
#include <vector>
using namespace std;

// constructor
Movies::Movies()
{
    
}

bool Movies::add_movie(string movie_name, string rating, int watched){
    for(const auto &movie:movies){
        if(movie.get_name()==movie_name){
            return false;
        }
    }
    movies.push_back(Movie{movie_name, rating, watched});
    return true;
}
Movies::~Movies()
{
}

