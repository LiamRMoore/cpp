#include <iostream>
#include <string>
#include <vector>
#include "movies.h"
#include "movie.h"

using namespace std;


void increment_watched(Movies &movies, string movie_name) {
    if (movies.increment_watched(movie_name))
        cout << movie_name << " watch incremented." << endl;
    else
        cout << movie_name << " not found in movies." << endl; 
}


void add_movie(
    Movies &movies,
    string name,
    string rating,
    unsigned short watched
) {
    cout << "add_movie called for " << name << endl;
    if (movies.add_movie(name, rating, watched))
        cout << name << " added to movies." << endl;
    else
        cout << name << " already found in movies!" << endl;
}


int main() {
    
    Movies my_movies;

    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Cinderella", "PG", 7);

    my_movies.display(); // big, sw, cind

    add_movie(my_movies, "Cinderella", "PG", 7); // already exists
    add_movie(my_movies, "Ice Age", "PG", 12); // OK

    my_movies.display();

    increment_watched(my_movies, "Big");
    increment_watched(my_movies, "Ice Age");

    my_movies.display();

    increment_watched(my_movies, "YYY"); // YYY not found
    return 0;
}