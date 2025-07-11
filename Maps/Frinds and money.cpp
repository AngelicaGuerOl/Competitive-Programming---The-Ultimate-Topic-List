#include <iostream>
using namespace std;
#include <bits/stdc++.h>

using ll= long long int;
int main() {
    int n,q;
    cin>>n>>q;
    map<string,int>m;
    while(n--) {
        string x;
        ll  y;
        cin >> x >> y;
        m[x] = y;
    }
    while(q--) {
        ll op;
        cin >> op;
        if(op==1) {
            string x;
            cin >> x;
            if(m.find(x) != m.end()) {
                    ll tot;
                    cin >> tot;
                    m[x]+= tot;
            }
        }else if(op==2) {
            string x;
            cin >> x;
            cout<<m[x]<<endl;
        }
    }
    return 0;
}
