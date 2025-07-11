#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i <n; i++) {
            cin >> v[i];
        }
        vector<int> prefixSum(n+1);
        for (int i = 1; i <= n; i++) {
            prefixSum[i] = prefixSum[i-1] + v[i-1];
        }
        long long int total = prefixSum[n];
        long long minVal = LLONG_MAX; // Initialize to maximum possible value
        int minInd = 0;
        for (int i = 1; i <= n; i++) {
            long long int sufixSum = total - prefixSum[i-1];
            long long int val = prefixSum[i] + sufixSum;
            if (val < minVal) {
                minVal = val;
                minInd = i;
            }
        }
        cout << minInd << endl;
    }
}