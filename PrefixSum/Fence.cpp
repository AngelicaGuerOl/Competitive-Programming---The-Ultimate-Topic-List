#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    vector<long long> pref(n+1,0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + h[i - 1];
    }
    int min_index = 1; // Índice en base 0
    long long min_suma = pref[k] - pref[0];
    for (int i = 2; i + k - 1 <= n; i++) {
        long long suma_actual = pref[i + k - 1] - pref[i - 1];

        if (suma_actual < min_suma) {
            min_suma = suma_actual;
            min_index = i;
        }
    }
    cout << min_index << endl;
    return 0;
}
