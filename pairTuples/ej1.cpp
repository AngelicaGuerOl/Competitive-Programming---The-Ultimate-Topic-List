#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    set<pair<string,string>>hojas;
    for (int i = 0; i < n; i++) {
        string esp,col;
        cin >> esp >> col;
        hojas.insert({esp,col});

    }
    cout << hojas.size() << endl;

}
