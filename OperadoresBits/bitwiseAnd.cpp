#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,t,k,max_and=0;
  cin >> t;
  while(t--) {
    cin >> n >> k;
    for(int i=1; i <= n; i++) {
      for(int j=i+1; j <= n; j++) {
          //cout << i << " " << j << endl;
        if ((i & j) < k) {
          max_and = max(max_and, i&j);
        }
      }
    }
    cout << max_and << endl;
  }
}