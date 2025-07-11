#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> frecuencia(26, 0);
    for (char c : s) {
        frecuencia[c - 'A']++;
    }
    vector<char> mensajeSecreto;
    for (int i = 0; i < 26; i++) {
        if (frecuencia[i] % 2 != 0) {
            mensajeSecreto.push_back('A' + i);
        }
    }
    if (mensajeSecreto.empty()) {
        cout << "-" << endl;
    } else {
        sort(mensajeSecreto.begin(), mensajeSecreto.end());
        for (char c : mensajeSecreto) {
            cout << c;
        }
        cout << endl;
    }
}

