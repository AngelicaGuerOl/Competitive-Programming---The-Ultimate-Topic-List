#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main() {
    int n;
    cin >> n;
    map<pair<int,int>, string> m;
    while (n--) {
        int a, b;
        string v;
        cin >> a >> b >> v;
        m[{a,b}]=v;
    }
    long long int q;
    cin >> q;
    while (q--) {
        long long int a, b;
        cin >> a >> b;
        pair<long long int,long long int> p = {a,b};
        if (m.find(p) != m.end()) {
            cout << m[p] << endl;
        }
    }
    return 0;
}
