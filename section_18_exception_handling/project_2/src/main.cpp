#include <iostream>

using namespace std;

double calculate_mpg(int miles, int gallons) {
    if (gallons==0)
        throw 0;
    return static_cast<double>(miles)/gallons;
}


int main() {

    int miles{}, gallons{};
    double mpg{};

    cout << "Enter miles: ";
    cin >> miles;
    cout << "Enter gallons: ";
    cin >> gallons;


    // try block
    try {
        mpg = calculate_mpg(miles, gallons);
        cout << "Result: " << mpg << endl;
    }
    catch (int &ex) {
        cerr << "catch block: sorry can't divide by zero" << endl;
    }


    cout << "bye" << endl;

    return 0;
}