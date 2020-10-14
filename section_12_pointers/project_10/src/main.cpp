#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
    int *new_storage = new int[size];
    for (size_t i; i < size; ++i) 
        *(new_storage+i) = init_value;
    return new_storage;
}

void display(const int *const array, size_t size) {
    for (size_t i {0}; i < size; ++i) 
        cout << array[i] << " ";
    cout << endl;
}

int main() {

    int *my_array {nullptr};
    size_t size;
    int init_value {};

    cout << "How many integers to allocate: ";
    cin >> size;
    cout << "What should they be allocated to: ";
    cin >> init_value;

    my_array = create_array(size, init_value);
    cout << "Area created" << endl;

    display(my_array, size);
    cout << "Array displayed" << endl;

    delete [] my_array;
    cout << "Heap memory released" << endl;
    
    return 0;
}