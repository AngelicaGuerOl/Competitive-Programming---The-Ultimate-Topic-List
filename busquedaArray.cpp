#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,b;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cin >> b;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == b) {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout << -1 << endl;
    }

}
