#include <iostream>
#include <string>
#include "movies.h"

using namespace std;


bool Movies::add_movie(string name, string rating, unsigned short watched) {
    for (auto &m: movies) {
        if (m.get_name() == name)
            return false;
    }
    movies.push_back(Movie{name, rating, watched});
    return true;
}

bool Movies::increment_watched(string name) {
    for (auto &m: movies) {
        if (m.get_name() == name) {
            m.set_times_watched(m.get_times_watched()+1);
            return true;
        }
    }
    return false;
}

void Movies::display() {
    for (auto &m: movies)
        cout << m.get_name() << " ";
    cout << endl;
}

// constructors
Movies::Movies() {
    cout << "Movies constructor" << endl;
}

// destructors
Movies::~Movies() {
    cout << "Movies destructor" << endl;
}