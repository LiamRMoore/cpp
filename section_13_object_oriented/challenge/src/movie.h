# pragma once

#include <string>
//#include "movies.h"
using namespace std;

// model name, rating (G, PG, PG-13, R), watched (n_times)

class Movie {
    private:
        //friend class Movies;
        string *name;
        string *rating;
        unsigned short *times_watched;
    public:
        string get_name() const;
        string get_rating() const;
        unsigned short get_times_watched() const;
        void set_name(string);
        void set_rating(string);
        void set_times_watched(unsigned short);
        // constructors
        Movie(string name, string rating, unsigned short times_watched); // base
        Movie(const Movie &movie); // copy
        Movie(Movie &&movie) noexcept; // move
        // destructor
        ~Movie();
};