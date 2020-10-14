#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// prototypes
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr. ", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
   return base_cost += (base_cost * tax_rate) + shipping; 
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix << name << suffix << endl;
}

int main() {
    double cost{0};
    cout << fixed << setprecision(2);

    cost = calc_cost(100., 0.08, 4.25);
    cout << cost << endl;

    cost = calc_cost(100., 0.09);
    cout << cost << endl;

    cost = calc_cost(100.);
    cout << cost << endl;


    greeting("Glenn Jones", "Dr. ", " M.D.");
    greeting("Liam Moore", "Dr. ");
    greeting("Liam Moore");
    return 0;
}

