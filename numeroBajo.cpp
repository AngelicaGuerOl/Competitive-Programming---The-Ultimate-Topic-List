#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int min= INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << min << " ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == min) {
            cout << i + 1 << " " ;
            break;
        }
    }
}
