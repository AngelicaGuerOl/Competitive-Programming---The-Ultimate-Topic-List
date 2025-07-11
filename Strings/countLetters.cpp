#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    for (auto c: mp) {
        cout << c.first << " : " << c.second << endl;
    }
    return 0;
}
