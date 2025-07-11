#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        size_t pos = s.find("010");
        size_t pos2 = s.find("101");
        if (pos != string::npos || pos2 != string::npos) {
            cout << "Good" << endl;
        }else {
            cout << "Bad" << endl;
        }
    }
}
