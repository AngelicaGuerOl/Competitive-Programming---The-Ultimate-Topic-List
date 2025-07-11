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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++) {
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
    if(k > v.size()){
        cout<<"-1"<<endl;
    }else{
        cout << v[k-1]<< endl;

    }

    return 0;
}
