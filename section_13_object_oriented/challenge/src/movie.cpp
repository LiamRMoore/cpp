#include <iostream>
#include <string>
#include "movie.h"

using namespace std;


string Movie::get_name() const {
    return *name;
}

string Movie::get_rating() const {
    return *rating;
}

unsigned short Movie::get_times_watched() const {
    return *times_watched;
}

void Movie::set_name(string name) {
    *this->name = name;
}

void Movie::set_rating(string rating) {
    *this->rating = rating;
}

void Movie::set_times_watched(unsigned short times_watched) {
    *this->times_watched = times_watched;
}

// constructors

// base
Movie::Movie(
    string name = "Untitled",
    string rating = "Unknown",
    unsigned short times_watched = 0
){
    //this->name = name;
    //this->rating = rating;
    //this->times_watched=times_watched;
    cout << "In constructor for " << name << endl;
    this->name = new string {name};
    this->rating = new string {rating};
    this->times_watched = new unsigned short {times_watched};
} 

// copy constructor
Movie::Movie(const Movie &movie) 
    : Movie{*movie.name, *movie.rating, *movie.times_watched} {
    // delegate to original constructor
    cout << "Calling Movie deep copy constructor for "<< *movie.name  << endl;
} 

// move constructor
Movie::Movie(Movie &&movie) noexcept
    : name{movie.name}, rating{movie.rating}, times_watched{movie.times_watched} 
{   // just steal the pointers from the R-value and then null those out
    cout << "this is the move constructor stealing " << *movie.name << endl;
    movie.name = nullptr;
    movie.rating = nullptr;
    movie.times_watched = nullptr;

} 

// destructor
Movie::~Movie() {
    if (name == nullptr)
        cout << "Destructor freeing data for nullptr" << endl;
    else
        cout << "Deleting movie " << *name << endl;
    // free up memory
    delete name;
    delete rating;
    delete times_watched;
}