#include <iostream>
#include <string>

using namespace std;

string encode(string s, int j) {
    string encoded = "";
    for (int i = 0; i < s.length(); i++) {
        // skip j characters
        if (i < j) {
            encoded += s[i];
        } else {
            // increase ASCII value of next character by 2
            encoded += s[i] + 2;
        }
    }
    return encoded;
}

int main() {
    string s;
    int j;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter the number of characters to skip: ";
    cin >> j;
    string encoded = encode(s, j);
    cout << "Encoded string: " << encoded << endl;
    return 0;
}
