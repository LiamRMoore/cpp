#include <iostream>

// import everything in std namespace
using namespace std;


int main() {
    char middle_initial {'R'};
    cout << "my middle initial is: " << middle_initial << endl;

    unsigned short exam_score {55};
    cout << "Exam score is: " << exam_score << endl;

    int countries_represented {65};
    cout << "there were " << countries_represented << " countries represented" 
    << endl;

    long people_in_florida {20'610'000};
    cout << "Ther are " << people_in_florida << " people in florida" << endl;

    // using list initialisation will catch overflow errors if, say, using long
    long long people_on_earth {7'800'000'000};
    cout << people_on_earth << " people on earth" << endl;

    // floating point types
    float car_payment {401.23};
    cout << car_payment << endl;

    double pi {3.1415926};
    cout << pi << endl;

    long double large_number {2.554e120};
    cout << large_number << endl;

    // boolean
    bool game_over {false};
    cout << "The value of game_over is: " << game_over << endl;

    // overflow example: narrowing conversion
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    // overflow - negative result!
    cout << "The product of values is " << product << endl;
    return 0;
}