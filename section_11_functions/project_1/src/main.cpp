#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num {};
    cout << "Enter double: ";
    cin >> num;

    cout << "Sqrt: " << sqrt(num) << endl;
    cout << "Cbrt: " << cbrt(num) << endl;
    cout << "Sine: " << sin(num) << endl;
    cout << "Cosine: " << cos(num) << endl;
    cout << "Ceil: " << ceil(num) << endl;
    cout << "Floor: " << floor(num) << endl;
    cout << "Round: " << round(num) << endl;
    return 0;
}