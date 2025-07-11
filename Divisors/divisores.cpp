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

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(n / i == i) {
                v.pb(i);
            }else{
                v.pb(i);
                v.pb(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for(auto i : v) {
        cout << i << " ";
    }

    return 0;
}
