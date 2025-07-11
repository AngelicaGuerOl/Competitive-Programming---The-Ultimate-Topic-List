#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void solved() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int maxActual=v[0];
    int maxTotal=v[0];
    for (int i = 1; i < n; i++) {
        maxActual=max(v[i],maxActual+v[i]);
        maxTotal=max(maxTotal,maxActual);
    }
    cout << maxTotal << endl;

}
int main() {
    int q;
    //cin >> q;
    //while (q--) {
        solved();
    //}

}