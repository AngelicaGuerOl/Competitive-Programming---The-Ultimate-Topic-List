#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    unordered_map<string, int> map;
    string s;
    getline(cin, s);
    for (int i = 0; i < m; i++) {
        string word;
        int val;
        cin >> word >> val;
        map[word] = val;
    }
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        int tot = 0;
        while (getline(cin, s) && s != ".") {
            stringstream ss(s);
            string word;
            while (ss >> word) {
                if (map.find(word) != map.end()) {
                    tot += map[word];
                }
            }
        }
        cout << tot << endl;
    }
    return 0;
}

