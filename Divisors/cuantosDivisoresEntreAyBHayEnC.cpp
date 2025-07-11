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
    int a, b, c;
    cin >> a >> b >> c;
    int cont = 0;
    for (int i = a; i  <= b; i++) {
        if(c % i == 0) {
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}
