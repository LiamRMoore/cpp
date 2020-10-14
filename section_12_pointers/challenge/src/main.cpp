#include <iostream>

using namespace std;

// prototypes
void print(const int *array, const size_t array_size);
int *apply_all(
    int *array1,
    const size_t array1_size,
    int *array2,
    const size_t array2_size
);

void print(const int *const array, const size_t array_size) {
    for (size_t i{0}; i < array_size; ++i)
        cout << array[i] << " ";
    cout << endl;
}

int *apply_all(
    int *array1,
    const size_t array1_size,
    int *array2,
    const size_t array2_size
) {
    int *new_array {nullptr};
    int a1ix{}, a2ix{};
    new_array = new int[array1_size * array2_size];
    for (size_t i{0}; i < array1_size*array2_size; ++i) {
        a1ix = i % array1_size;
        a2ix = i / array1_size;
        //cout << a1ix << ", " << a2ix << endl;
        *(new_array+i) = array1[a1ix] * array2[a2ix];
    }
    return new_array;
}

int main() {

    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1[] {1,2,3,4,5};
    int array2[] {10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);
    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);

    // release heap storage
    delete [] results;
    cout << endl;   
    return 0;
}