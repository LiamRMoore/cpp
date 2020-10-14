/*
Arrays
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <char> vowels {'a','e','i','o','u'};
    vector <int> test_scores {100, 98, 89};
    // vector <int> test_scores (3); // all initialised to 0 (2nd arg defaults)
    //vector <double> hi_temperatures (365, 80.0); // constructor: (size, default)

    // array syntax
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    // vector syntax
    cout << test_scores.at(0) << endl;
    cout << test_scores.size() << " scores in vector" << endl;

    int score_to_add {0};
    cout << "element to add: " << endl;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "score is: " << endl;
    cout << test_scores.at(3) << endl;

    // will cause exception
    //cout << test_scores.at(10) << endl;

    // 2D vector
    vector <vector <int>> movie_ratings {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << "Movie ratings for reviewer 1 " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    return 0;
}