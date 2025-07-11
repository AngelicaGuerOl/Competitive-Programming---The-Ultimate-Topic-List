#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> v(n);
    while (q--) {
        int op;
        cin >> op;
        if (op == 0) {
            int t, x;
            cin >> t >> x;
            v[t].push_back(x);
        }
        else if (op == 1) {
            int t;
            cin >> t;

            if (v[t].empty()) {
                cout << '\n';
            } else {
                for (size_t i = 0; i < v[t].size(); i++) {
                    if (i > 0) cout << " ";
                    cout << v[t][i];
                }
                cout << '\n';
            }
        }
        else if (op == 2) {
            int t;
            cin >> t;
            v[t].clear();
        }
    }

    return 0;
}
