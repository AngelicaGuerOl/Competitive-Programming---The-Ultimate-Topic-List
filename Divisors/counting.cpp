#include <bits/stdc++.h>
using namespace std;
using ll = long long;;
using vi = vector<int>;
using vll = vector<ll>;
#define sz(x) int(x.size())
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'
const int MAX = 1e6 + 1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> divisores(MAX, 0);
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            divisores[j]++;
        }
    }

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << divisores[x] << '\n';
    }

    return 0;
}