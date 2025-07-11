#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int l,r;
    int min = INT_MIN;
    cin>>l>>r;
    for(int i=l; i<=r; i++) {
        for(int j=i; j<=r; j++) {
            int op=i ^ j;
            //cout << i << " " << j << "="<< op <<endl;
            if (op > min) {
                min = op;
            }
        }
    }
    cout << min << endl;
}