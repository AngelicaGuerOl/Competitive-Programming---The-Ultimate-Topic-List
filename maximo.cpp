#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long int arr[n];
    long long int max= LLONG_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max << endl;
}