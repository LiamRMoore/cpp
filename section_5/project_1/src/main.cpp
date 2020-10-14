#include <iostream>

// import everything in std namespace
//using namespace std;
// import selective stuff
using std::cout;
using std::cin;
using std::endl;

int main() {
    int num, num2;
    // << insertion operator
    cout << "give number:" << endl;
    // >> extraction operator
    cin >> num >> num2;
    cout << "OK it was: " << num << " and " << num2 << endl;
    return 0;
}