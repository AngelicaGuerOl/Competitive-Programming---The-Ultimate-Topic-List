#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,p;
    string num;
    cin >> n;
    long long int arr[n];
    for ( int i = 0; i < n; i++) {
        cin >> arr[i];
        num += to_string(arr[i]);
    }
    string num2 = "";
    bool flag = false;
    for (int j= n-1; j >= 0; j--) {
        num2+=to_string(arr[j]);
        if (num==num2) {
            flag = true;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}