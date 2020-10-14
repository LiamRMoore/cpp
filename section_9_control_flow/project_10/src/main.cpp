#include <iostream>
#include <vector>

using namespace std;

int main() {
    // infinite and nested loops
    for (int num1{1}; num1 <= 10; ++num1){
        for (int num2{1}; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        }
        cout << "---------" << endl;
    }
    unsigned short num_items {};
    cout << "How many data items?: ";
    cin >> num_items;

    vector <int> data {};
    for (int i {1}; i <= num_items; ++i) {
        int data_item{};
        cout << "Enter data item " << i << ": " << endl;
        cin >> data_item;
        data.push_back(data_item);
    }
    cout << endl << "Displaying histogram..." << endl;
    for (auto val: data) {
        for (int i{1}; i <= val; ++i)
            cout << ((i % 5 != 0) ? '-':'*');
        cout << endl;
    }


    return 0;
}