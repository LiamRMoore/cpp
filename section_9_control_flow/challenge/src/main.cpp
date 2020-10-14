#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> list {};
    char selection {};
    do {
        cout << endl;
        cout << "P: print list" << endl;
        cout << "A: add entry to list" << endl;
        cout << "M: display mean" << endl;
        cout << "S: display smallest" << endl;
        cout << "L: display largest" << endl;
        cout << "Q: quit" << endl;
        cout << "Enter an option: ";
        cin >> selection;
        cout << endl;
        switch (selection) {
            case 'P':
            case 'p': {
                if (list.size() > 0) {
                    cout << "[";
                    for (auto el: list)
                        cout << el << " ";
                    cout << "]";
                }
                else
                    cout << "[]";
            }; break;
            case 'A':
            case 'a': {
                int entry {};
                cout << "Add an entry: ";
                cin >> entry;
                list.push_back(entry);
                break;
            }
            case 'm':
            case 'M': {
                if (list.size() == 0) {
                    cout << "Mean undefined - no entries" << endl;
                    break;
                }
                int running_sum {};
                for (auto el: list) {
                    running_sum += el;
                }
                cout << "mean: " << static_cast<double>(running_sum)/list.size() << " " << endl;
                break;
            }; 
            case 's':
            case 'S': {
                if (list.size() == 0) {
                    cout << "Sorry, no elements in list." << endl;
                    break;
                }
                int lowest {list.at(0)};
                for (auto el : list) {
                    if (el < lowest)
                        lowest = el;
                }
                cout << "lowest is: " << lowest << endl;
                break;
            };
            case 'l':
            case 'L': {
                if (list.size() == 0) {
                    cout << "Sorry, no elements in list." << endl;
                    break;
                }
                int highest {list.at(0)};
                for (auto el : list) {
                    if (el > highest)
                        highest = el;
                }
                cout << "highest is: " << highest << endl;
                break;
            }; 
            case 'q':
            case 'Q': {
                cout << "Goodbye!" << endl;
                break;
            }
            default:
                cout << "Invalid entry!" << endl;
            cout << endl;
                
        }

    } while (selection != 'Q' && selection != 'q');


    return 0;
}