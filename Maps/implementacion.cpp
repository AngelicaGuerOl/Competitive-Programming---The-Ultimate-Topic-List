#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main() {
    int q;
    cin >> q;
    unordered_map<string, int> m;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            string s;
            int c;
            cin >> s >> c;
            m[s] += c;
        } else if (op == 2) {
            string s;
            cin >> s;
            m.erase(s);
        } else if (op == 3) {
            string s;
            cin >> s;
            if (m.find(s) != m.end()) {
                cout << m[s] << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
