#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    long long int n,m;
    cin >> n;
    vector<long long int> np(n);
    for (int i = 0; i < n; i++) {
        cin >> np[i];
    }
    vector<long long int> nOr=np;
    sort(nOr.begin(),nOr.end());
    cin>>m;
    vector<long long int> prefix(n+1);
    vector<long long int> prefix2(n+1);
    for (long long int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + np[i-1];
    }
    for (long long int i = 1; i <= n; i++) {
        prefix2[i] = prefix2[i-1] + nOr[i-1];
    }
    for (int i = 0; i < m; i++) {
        int t,l,r;
        cin>>t>>l>>r;
        if (t==1) {
            cout << prefix[r] - prefix[l-1] << endl;
        }else if (t==2) {
            cout << prefix2[r] - prefix2[l-1] << endl;
        }else {
            cout << "fuyukai desu" <<'\n';
        }
    }
}