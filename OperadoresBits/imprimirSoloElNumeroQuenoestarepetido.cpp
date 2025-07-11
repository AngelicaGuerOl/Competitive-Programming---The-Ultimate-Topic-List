#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        mp[aux]++;
    }
    cout << find_if(mp.begin(), mp.end(), [](const pair<int, int>& p) {
        if (p.second == 1) {
            return true;
        }
        return false;
    })->first << endl;

    return 0;
}
