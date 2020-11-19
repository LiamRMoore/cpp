#include <iostream>

using namespace std;



int main() {

    int miles{}, gallons{};
    double mpg{};

    cout << "Enter miles: ";
    cin >> miles;
    cout << "Enter gallons: ";
    cin >> gallons;

    //mpg = miles / gallons; // integer div: flp exception
    // normal version
    if (gallons!=0) {
        mpg = static_cast<double>(miles) / gallons; // double div: inf (or nan 0/0)
        cout << "Result: " << mpg << endl;
    } else {
        cerr << "Sorry can't divide by zero" << endl;
    }

    // try block
    try {
        if (gallons == 0)
            throw 0;
        mpg = static_cast<double>(miles) / gallons; // double div: inf (or nan 0/0)
        cout << "Result: " << mpg << endl;        
    }
    catch (int &ex) {
        cerr << "catch block: sorry can't divide by zero" << endl;
    }


    cout << "bye" << endl;

    return 0;
}