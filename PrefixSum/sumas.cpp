#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,q,sum=0;
    cin >> n >> q;
    //guardar valores
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    //valores en 0
    vector<long long> pref(n+1);
    //desde el indice uno, hasta n suma
    for (int i = 1; i <= n; i++) {
        //x base 0, pref base 1
        pref[i] = pref[i-1] + x[i-1];
    }
    sum=pref[n];
    cout<<sum<<endl;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << endl;
    }
}