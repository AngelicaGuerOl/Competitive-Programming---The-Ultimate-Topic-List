#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
void recursion(int n, vector<int>& a) {
    if (n == 0) {
        cout << a[0] << endl;
        return;
    }
    if (n % 2 != 0) {
        recursion(n-1, a);
    }else {
        cout << a[n] << endl;
        recursion(n-2, a);
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    recursion(n - 1,v);
    return 0;
}
