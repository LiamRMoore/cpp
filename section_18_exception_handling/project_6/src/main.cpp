#include <iostream>
#include <string>
using namespace std;

class DivideByZeroException {};
class NegativeValueException {};

double calc_mpg(int m, int g) {
    if (m<0 || g<0)
        throw NegativeValueException{};
    if (g == 0)
        throw DivideByZeroException{};
    return static_cast<double>(m)/g;
}

int main() {

    int m{},g{};
    double mpg{};

    cout << "enter m space g: ";
    cin >> m >> g;
    try {
        mpg = calc_mpg(m,g);
        cout << "Result: " << mpg << endl;
    }
    catch (const NegativeValueException &ex) {
        cerr << "neg val" << endl;
    }
    catch (const DivideByZeroException &ex) {
        cerr << "div 0" << endl;
    }

    cout << "Bye" << endl;

    return 0;
}