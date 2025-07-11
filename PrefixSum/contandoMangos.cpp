#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<ll> prefix(n+1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + v[i-1];
    }
    cin >> q;
    for(int i=0; i < q; i++) {
        ll a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a-1] << '\n';
    }
    return 0;
}
