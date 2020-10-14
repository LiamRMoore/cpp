/*
Arrays
*/
#include <iostream>

using namespace std;

int main() {
    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols];

    cin >> movie_rating [1][2];
    cout << movie_rating [1][2] << endl;
    return 0;
}