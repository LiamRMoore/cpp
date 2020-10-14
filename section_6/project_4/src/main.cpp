#include <iostream>

using namespace std;

int main() {
    cout << "how many rooms?" << endl;
    unsigned short n_rooms {0};
    cin >> n_rooms;
    cout << "No. rooms: " << n_rooms << endl;

    const double price_per_room {30.0}; //$
    const double sales_tax {0.06}; //frac
    const unsigned short estimate_expiry {30}; //days
    

    cout << "\nEstimate for service: " << endl;
    
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * n_rooms << endl;
    cout << "Tax: $" << price_per_room * n_rooms * sales_tax << endl;
    cout << "================================" << endl;
    cout << "Total est: $" <<  price_per_room * n_rooms * (1+sales_tax) << endl;
    cout << "Valid for " << estimate_expiry << " days" << endl;
    return 0;
}