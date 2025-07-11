#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 2, 0);
    while (q--) {
        int l, r;
        cin >> l >> r;
        v[l] += 1;
        v[r + 1] -= 1;
    }
    int val = 0;
    for (int i = 1; i <= n; i++) {
        val += v[i];
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}
