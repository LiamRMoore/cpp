#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // cout << "Enter first: ";
    // cin >> first_name;

    // cout << "Enter second: ";
    // cin >> last_name;
    // cout << "--------------------" << endl;

    // cout << "Hi " << first_name << " your first has " << strlen(first_name) 
    // << " characters" << endl;

    // strcpy(full_name, first_name); // L <- R
    // strcat(full_name, " "); // concatenate full name and space
    // strcat(full_name, last_name); // concat last name to full
    // cout << "Full is: " << full_name << endl;

    cout << "Enter full: ";
    // getline function gives all input (avoids terminating at space)
    cin.getline(full_name, 50); // 50 is max chars
    cout << full_name;

    cout << "-------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    for (size_t i{0}; i < strlen(full_name); ++i) {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    cout << "-------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    // +1: first string lexically after second, -1 first string lexically before
    cout << strcmp(temp, full_name) << endl;
    cout << strcmp(full_name, temp) << endl;
    return 0;
}