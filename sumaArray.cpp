#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,sum=0, res;;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
        if (sum<0) {
            res = sum*(-1);
        }else {
            res = sum;
        }
    }
    cout << res << endl;
}
