#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    size_t coma = s.find(",");
    while (coma != string::npos) {
            s.replace(coma, 1, " ");
        coma = s.find(",");
    }

        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);

            }else if (islower(s[i])) {
                s[i] = toupper(s[i]);
            }
        }
    cout << s << endl;
}