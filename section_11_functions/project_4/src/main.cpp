#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


// function prototypes
double calc_vol_cylinder(double radius, double length);
void volume_cylinder();
double calc_area_circle(double radius);
void area_circle ();

// constants
const double pi {3.1415926};

int main() {

    area_circle();
    volume_cylinder();
    return 0;
}




double calc_area_circle(double radius) {
    return pi*pow(radius, 2);
}

void area_circle () {
    double radius {};
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area (r=" << radius << ") is: " << calc_area_circle(radius) << endl;
}

double calc_vol_cylinder(double radius, double length) {
    double circle_area {calc_area_circle(radius)};
    return circle_area * length;
}

void volume_cylinder() {
    double radius {}, length {};
    cout << "Cylinder radius, length separated by space: ";
    cin >> radius >> length;
    cout << "volume (r=" << radius << ", l=" << length << ") is: " 
    << calc_vol_cylinder(radius, length) << endl;
}