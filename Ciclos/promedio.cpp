#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=7;
  double op;
  int arr[n];
  for(int i=1;i<=n;i++) {
    cin >> arr[i];
  }
  double sum=0;
  for(int i=1;i<=n;i++) {
    sum+=arr[i];
  }
  op=sum/n;
  cout<<fixed << setprecision(1)<<op<<endl;
}


