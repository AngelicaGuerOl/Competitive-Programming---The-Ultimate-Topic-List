#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    vector<int> v;
    for (auto c : s) {
        mp[c]++;
    }
    int maxi=0;
    for (auto c : mp) {
        maxi=max(maxi, c.second);
    }
    cout << maxi << endl;

}
