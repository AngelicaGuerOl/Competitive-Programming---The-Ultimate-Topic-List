#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
int main() {
    char c;
    int n;
    cin >> c >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        for (int j = 0; j < v[i]; j++) {
            cout << c;
        }
        cout << endl;
    }


    return 0;
}
