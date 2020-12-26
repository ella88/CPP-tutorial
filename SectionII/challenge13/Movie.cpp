#include "Movie.hpp"
#include <string>
#include <iostream>

using namespace std;

// constructor
Movie::Movie(string name_val, string rate, int watch_cnt)
{ name = new string;
  rating = new string;
  watch_count = new int;
  *name = name_val;
  *rating = rate;
  *watch_count = watch_cnt;
  cout<<"Constructor for "<<*name<<endl;
}

// copy
Movie::Movie(const Movie &source)
    :Movie(source.get_name(), source.get_rating(), source.get_watch_count()){
        cout<<"Copy - deep copy"<<endl;
}
// move
Movie::Movie(Movie &&source) noexcept
    :name{source.name}, rating{source.rating},watch_count{source.watch_count}{
        source.name = nullptr;
        source.rating = nullptr;
        source.watch_count = nullptr;
        cout<<"Move constructor"<<endl;
}

void Movie::display(){
    cout<<"Name: "<<*name<<"; Rating: "<<*rating<<"; watched count: "<<*watch_count<<endl;
}

Movie::~Movie()
{
    cout<<"Destructor for "<<*name<<endl;
}

