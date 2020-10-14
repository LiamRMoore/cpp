#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "movie.h" // probably circular import issue

using namespace std;
// model collection of movies
// add movie, increment watched, display all
// if add movie already in collection, raise err
// otherwise if increment movie not in collection, also raise err

//class Movie;
class Movies {
    private:
        vector<Movie> movies;
    public:
        // add a constructor?
        bool add_movie(string name, string rating, unsigned short watched);
        bool increment_watched(string name);
        void display();
        // constructors
        Movies();
        // destructors
        ~Movies();
};