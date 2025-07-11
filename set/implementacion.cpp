#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    set<int>s;
    while (q--) {
        int op;
        cin >>op;
        if (op == 1) {
            int x;
            cin >> x;
            s.insert(x);
        }else if (op == 2) {
            int x;
            cin >> x;
            if (s.count(x) == 1) {
                s.erase(x);
            }
        }else if (op == 3) {
            int x;
            cin >> x;
            if (s.count(x) == 1) {
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }
    }
}