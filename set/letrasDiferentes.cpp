#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    set<char> c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        c.insert(s[0]);
    }
    cout << c.size() << endl;
    return 0;
}
