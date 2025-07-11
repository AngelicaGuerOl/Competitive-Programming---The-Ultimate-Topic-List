#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i << " ";
    }

}
