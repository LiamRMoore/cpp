#include <iostream>
#include <vector>

using namespace std;

// function prototypes
void display_menu();
char get_selection();
vector<int> add_to_list(int to_add, vector<int> &list);
void print_list(vector<int> &list);
int get_value();
void display_mean(vector<int> &list);
void display_smallest(vector<int> &list);
void diplay_largest(vector<int> &list);


void display_menu() {
    cout << "P: print list" << endl;
    cout << "A: add entry to list" << endl;
    cout << "M: display mean" << endl;
    cout << "S: display smallest" << endl;
    cout << "L: display largest" << endl;
    cout << "Q: quit" << endl;
}

char get_selection() {
    char selection {};    
    cout << "Enter an option: ";
    cin >> selection;
    cout << endl;
    return selection;
}

int get_value() {
    int entry {};
    cout << "Add an entry: ";
    cin >> entry;
    cout << endl;
    return entry;  
}

vector<int> add_to_list(int to_add, vector<int> &list) {
    list.push_back(to_add);
    return list;
}

void print_list(vector<int> &list) {
    if (list.size() > 0) {
        cout << "[";
        for (auto el: list)
            cout << el << " ";
        cout << "]";
    }
    else
        cout << "[]";
    cout << endl;
}

void display_mean(vector<int> &list) {
    if (list.size() == 0) {
        cout << "Mean undefined - no entries" << endl;
    }
    int running_sum {};
    for (auto el: list) {
        running_sum += el;
    }
    cout << "mean: " << static_cast<double>(running_sum)/list.size() << " " << endl;
}

void display_smallest(vector<int> &list) {
    if (list.size() == 0) {
        cout << "Sorry, no elements in list." << endl;
    }
    else {
        int lowest {list.at(0)};
        for (auto el : list) {
            if (el < lowest)
                lowest = el;
        }
        cout << "lowest is: " << lowest << endl;
    }
}

void display_largest(vector<int> &list) {
    if (list.size() == 0) {
        cout << "Sorry, no elements in list." << endl;
    }
    else {
        int highest {list.at(0)};
        for (auto el : list) {
            if (el > highest)
                highest = el;
        }
        cout << "highest is: " << highest << endl;
    }
}


int main() {
    vector<int> list {};
    char selection {};
    int entry {};
    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
            case 'P':
            case 'p': {
                print_list(list);
            }; break;
            case 'A':
            case 'a': {
                entry = get_value();
                add_to_list(entry, list);
            }; break;
            case 'm':
            case 'M': {
                display_mean(list);
            }; break; 
            case 's':
            case 'S': {
                display_smallest(list);
            }; break;
            case 'l':
            case 'L': {
                display_largest(list);
            }; break; 
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