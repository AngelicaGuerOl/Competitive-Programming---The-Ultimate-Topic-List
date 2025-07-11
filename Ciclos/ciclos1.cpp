#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    int aux;
    cin >> aux;
    arr[i] = aux;
  }
  int k;
  cin >> k;
  for (int i = 0; i < n; i++) {
    if (arr[i]%k == 0) {
      int ns=arr[i];
      cout << ns << endl;
    }else {
      cout << "X" <<endl;
    }
  }
  
  
}
