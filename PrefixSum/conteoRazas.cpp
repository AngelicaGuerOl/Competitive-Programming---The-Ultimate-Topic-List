#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    long long int n,q,sum=0,sum2=0,sum3=0;
    cin >> n >> q;
    vector<long long int> x(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    vector<long long int> prefH(n+1,0);
    vector<long long int> prefG(n+1,0);
    vector<long long int> prefJ(n+1,0);
        for(int i = 1; i <= n; i++) {
            prefH[i] = prefH[i-1]+(x[i-1]==1);
            prefG[i] = prefG[i-1]+(x[i-1]==2);
            prefJ[i] = prefJ[i-1]+(x[i-1]==3);
    }

    for (int i = 0; i < q; i++) {
        long long int a,b;
        cin >> a >> b;
        cout << prefH[b]-prefH[a-1] << " "<<prefG[b]-prefG[a-1] << " "<<prefJ[b]-prefJ[a-1]<<'\n';
    }
}
