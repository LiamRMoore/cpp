#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secret_message {};
    cout << "Enter secret message: " << endl;
    getline(cin, secret_message);

    string encrypted_message {};
    for (char c: secret_message) {
        if (alphabet.find(c) != string::npos)
            encrypted_message += key.at(alphabet.find(c));
        else
            encrypted_message += c;
    }

    string decrypted_message {};
    for (char c: encrypted_message) {
        if (alphabet.find(c) != string::npos)
            decrypted_message += alphabet.at(key.find(c));
        else
            decrypted_message += c;
    }
        
    cout << encrypted_message << endl;
    cout << decrypted_message << endl;

    return 0;
}