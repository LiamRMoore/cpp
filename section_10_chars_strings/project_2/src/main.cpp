#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string s1;
    string s2 {"Frank"};
    string s3 {s2};
    string s4 {"Frank", 3}; // "Fra"
    string s5 {s3, 0, 2}; // "Fr" - starting index, length
    string s6 (3, 'X'); // XXX - constructor syntax, repeats, char

    string sentence;
    sentence = s2 + s5;
    cout << sentence << endl;

    for (char c: s2)
        cout << c << endl;

    // pretend int
    for (int c: s2)
        cout << c << endl;
    
    s1 = "Apple";
    s2 = "Banana";
    s3 = "Kiwi";
    s4 = "apple";
    s5 = s1;

    cout << (s1 == s5) << endl;
    cout << (s1 == s2) << endl;
    cout << (s1 != s2) << endl;
    cout << (s1 < s2) << endl;
    cout << (s2 > s1) << endl;
    cout << (s4 < s5) << endl; // Capitals come first
    cout << (s1 == "Apple") << endl; // can compare C-style string literal

    string s7 {"This is a test"};

    cout << s7.substr(0,4) << endl; // This
    cout << s7.substr(5,2) << endl; // is
    cout << s7.substr(10,4) << endl; // test

    cout << s7.find("This") << endl; // 0
    cout << s7.find("is") << endl; // 2
    cout << s7.find("test") << endl; // 10
    cout << s7.find("e") << endl; // 11
    cout << s7.find("is", 4) << endl; // 5 (start at 4)
    cout << s7.find("XX") << endl; //string::npos

    cout << s7.erase(0,5) << endl; // is a test
    cout << s7.length() << endl;
    s7 += ", amirite!?";
    cout << s7 << endl;
    s7.clear(); //empty string
    cout << s7 << endl;

    string s8 {};
    getline(cin, s8); // stream, string to store it in
    cout << s8 << endl;

    getline(cin, s8, 'x'); // 'x' is delimiter: ends string
    cout << s8 << endl;
    return 0;
}