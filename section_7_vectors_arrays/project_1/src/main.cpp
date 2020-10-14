/*
Arrays
*/
#include <iostream>

using namespace std;

int main() {
    
    char vowels [] {'a','e','i','o','u'};
    cout << "The first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;

    // cin >> vowels[5]; out of bounds!

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;
    cout << "The first high temp is now: " << hi_temps[0] << endl;

    int test_scores [5] {}; // initialise with zeros with list-style
    cout << "The first score is " << test_scores[0] << endl; 
    cout << "The second score is " << test_scores[1] << endl; 

    cout << "value of array name is: " << test_scores << endl;
    return 0;
}