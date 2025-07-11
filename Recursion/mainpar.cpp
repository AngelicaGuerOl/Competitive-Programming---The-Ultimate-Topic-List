#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
int recursion(int arr[], int index) {
    if (index < 0) {
        return 0;
    }
    if (index % 2 ==0) {
        cout << arr[index] << " ";
    }
    recursion(arr, index - 1);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    recursion(arr, n - 1);
    return 0;
}
