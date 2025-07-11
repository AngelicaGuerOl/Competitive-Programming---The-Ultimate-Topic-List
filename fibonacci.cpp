#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin >> n;
        if (n>=1) cout << 0 <<" ";
        if (n>=2) cout << 1;
        int a=0,b=1;
        for(int i=3; i<=n; i++) {
                int sig= a + b;
                cout << " " << sig;
                a = b;
                b = sig;
        }
        cout << endl;

}
