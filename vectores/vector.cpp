#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    int t,x,y,z;
    cin >> t;
    vector<int> v;
    while (t--) {
        int op;
        cin >> op;
        if (op == 0) {
            cin >> x;
            v.push_back(x);
        }
        else if (op == 1) {
            cin >> y;
            cout << v[y] << endl;
        }
        else if (op == 2) {
            v.pop_back();
        }

    }
}