#include <iostream>

using namespace std;

int main() {

    char letter_grade {};
    cout << "Enter expected grade: ";
    cin >> letter_grade;

    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You need a 90 or above" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79" << endl;
            break;
        case 'd':
        case 'D':
            cout << "You need 60-69" << endl;
            break;
        case 'e':
        case 'E':
            cout << "You need 50-59" << endl;
            break;
        case 'f':
        case 'F':
        {   // need curlies since declaring variable in block!
            char confirm {};
            cout << "Are you sure? ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "Ok" << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Try again then" << endl;
            else
                cout << "Fuck off." << endl;
            break;
        }
        default:
            cout << "you're a pure belter" << endl;
    }

    cout << endl;
    return 0;
}