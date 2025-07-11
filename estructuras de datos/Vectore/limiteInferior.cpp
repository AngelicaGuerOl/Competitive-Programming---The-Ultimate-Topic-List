#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,q;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> q;
    vector<long long int> v2(q);
    for (int i = 0; i < q; i++) {
        cin >> v2[i];
            auto it = lower_bound(v.begin(), v.end(), v2[i]);
            if (it != v.end() && *it == v2[i]) {
                cout << "Yes " << it-v.begin()+1 << endl;
            }else {
                cout << "No " << it-v.begin()+1 << endl;
            }
    }

}