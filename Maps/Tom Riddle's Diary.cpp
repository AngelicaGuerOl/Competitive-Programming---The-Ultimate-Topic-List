#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if(m[s] > 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        m[s]++;
    }
}

