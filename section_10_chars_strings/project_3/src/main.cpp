#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"}; 
    string s5 {s1}; 
    string s6 (s1, 0, 3); // App
    string s7 (10, 'X'); // XXXXXXXXXX; 10 * the char 'X'

    cout << s0 << endl; //no garbage
    cout << s0.length() << endl; //empty str - 0

    // initialisation
    cout << "---- initialisation ----" << endl;
    cout << "s1 is initialised to: " << s1 << endl;
    cout << "s2 is initialised to: " << s2 << endl;
    cout << "s3 is initialised to: " << s3 << endl;
    cout << "s4 is initialised to: " << s4 << endl;
    cout << "s5 is initialised to: " << s5 << endl;
    cout << "s6 is initialised to: " << s6 << endl;
    cout << "s7 is initialised to: " << s7 << endl;
    
    // Comparison
    cout << "---- comparison ----" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    // C-string literal: character-by-character comparison
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

    // Assignment
    cout << "---- assignment ----" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3[0] = 'C';
    cout << "s3 is now: " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 is now: " << s3 << endl;

    // Concatenation
    s3 = "Watermelon";
    cout << "Concatenation" << endl << "------------" << endl;
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;
    //s3 = "nice " + " cold " + s5 + " juice"; //Compiler error: C-style strings!

    // for loop
    cout << "Looping" << endl << "------------" << endl;
    s1 = "Apple";
    for (size_t i{0}; i < s1.length(); ++i)
        cout << s1.at(i); // or s1[i], but at method does bounds checking!
    cout << endl;

    // range-based for
    for (char c: s1)
        cout << c;
    cout << endl;

    // Substring
    cout << "Substring" << endl << "----------" << endl;
    s1 = "This is a test!";

    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl;
    cout << s1.substr(10, s1.length() - 1) << endl;

    // Erase
    cout << "Erase" << endl << "----------" << endl;
    s1.erase(0,5);
    cout << "s1 is now: " << s1 << endl;

    // getline
    cout << "Getline" << endl << "---------" << endl;
    string full_name {};
    cout << "Enter full name: ";
    getline(cin, full_name); // line up until press enter
    cout << full_name << endl;
    // find
    cout << "Find" << endl << "--------" << endl;
    s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;

    cout << endl;
    return 0;
}