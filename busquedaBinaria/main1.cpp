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

int binarySearch(const vector<ll>& array, ll x, ll low, ll high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (x == array[mid])
            return mid;
        else if (x > array[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < k; i++) {
        ll q;
        cin >> q;
        ll r = binarySearch(array, q, 0, n - 1);
        if (r == -1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}

