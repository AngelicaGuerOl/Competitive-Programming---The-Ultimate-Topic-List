#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> pairs(n);
  for (int i = 0; i < n; i++) {
    cin >> pairs[i].first;
  }
  for (int i = 0; i < n; i++) {
    cin >> pairs[i].second;
  }

  int sum=0;
  for (int i = 0; i < n; i++) {
    sum += pairs[i].first*pairs[i].second;
  }
  cout << sum;
  return 0;
}


