#include <iostream>

using namespace std;


int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int; // allocate storage for integer on the heap and assign addr
    cout << int_ptr << endl; // only accessible through pointer!
    delete int_ptr; // free up storage

    size_t size{0};
    double *temp_ptr {nullptr};
    cout << "How many temps? ";
    cin >> size;
    // dynamically allocate chunk of memory to double array
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    // if did now, say:
    // temp_ptr = nullptr; 
    // memory leak! can no longer access allocated memory

    delete [] temp_ptr;

    cout << endl;
    return 0;
}