#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,p;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            arr[i]=1;
            cout << arr[i] << " ";
        }else if (arr[i] == 0) {
            arr[i]=0;
            cout << arr[i] << " ";
        }else {
            arr[i]=2;
            cout << arr[i] << " ";
        }
    }
}
