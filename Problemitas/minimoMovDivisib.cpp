#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

int main() {
    ll t,a,b,res;
    cin>>t;
    while (t--) {
        cin>>a>>b;
        if (a%b==0) {
            cout << "0" << endl;
        }else {
            res=a%b;
            cout << b - res << endl;
        }
    }
}
