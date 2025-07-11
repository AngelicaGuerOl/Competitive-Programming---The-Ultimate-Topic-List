#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    set<long long int>s;
    while (q--) {
        long long int n;
        cin >> n;
        s.insert(n);
    }
    cout << s.size() << endl;
}