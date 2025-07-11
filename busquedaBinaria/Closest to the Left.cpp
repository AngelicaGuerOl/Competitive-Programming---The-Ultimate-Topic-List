#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;

int binarySearch(const vll& array, ll x, int n) {
    int low = 1, high = n;
    int res = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] <= x) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vll array(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> array[i];
    }

    while (k--) {
        ll x;
        cin >> x;
        cout << binarySearch(array, x, n) << '\n';
    }

    return 0;
}

