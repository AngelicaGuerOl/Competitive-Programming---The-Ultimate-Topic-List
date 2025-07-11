#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  vector<long long int> arr(n);
  bool b=false;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] %2== 0) {
      if (b) cout << " ";
      cout <<"[" <<arr[i] <<"]";
      b=true;
    }
  }
  if (!b) {
    cout << ":(";
  }
  cout << endl;
}


