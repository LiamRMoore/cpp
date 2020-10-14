#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int scores [] {100, 90, 97};
    // range-based for loop
    for (auto score: scores)
        cout << score << endl;

    vector <double> temps {87.2, 77.1, 80.0, 72.5};

    double average_temp {};
    double running_sum {};

    for (auto temp: temps)
        running_sum += temp;

    if (temps.size() != 0)
        average_temp = running_sum / temps.size();
    else
        cout << "!!" << endl;
    // one decimal place
    cout << fixed << setprecision(1);
    cout << average_temp << endl;

    // chars in string
    for (auto c: "Frank")
        cout << c << endl;

    // collection
    for (auto val: {1,2,3,4,5})
        cout << val << endl;

    // chars in string
    for (auto c: "This is a test")
        if (c == ' ')
            cout << '\t';
        else
            cout << c;
    cout << endl;
    return 0;
}