#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Array to store frequencies of each letter
    int freq[26] = {0};

    // Count frequencies
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Print results in ascending order of letters
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }
    return 0;
}
