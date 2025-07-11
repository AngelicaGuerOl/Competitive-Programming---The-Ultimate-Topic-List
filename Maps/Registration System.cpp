#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> map;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if(map[s] > 0){
            string cadena = s + to_string(map[s]);
            cout << cadena << endl;
            map[s]++;
        }else{
            cout << "OK" << endl;
            map[s] = 1;
        }

    }
}

