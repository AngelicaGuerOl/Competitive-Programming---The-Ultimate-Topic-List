#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int n = s.length();
    //Se declara pref, una matriz de tamaño (n+1) × 26 de tipo vector<vector<int>>.
    vector<vector<int>> pref(n+1, vector<int>(26));
    for (int i = 0; i < n; i++) {
        pref[i+1] = pref[i]; // Copiar los valores acumulados anteriores
        int char_id = s[i] - 'a'; // Convertir carácter a índice (0 para 'a', 25 para 'z')
        pref[i+1][char_id]++; // Incrementar la frecuencia del carácter actual
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int L, R;
        cin >> L >> R; // Índices 0-based

            int freq = pref[R][0] - pref[L-1][0]; // Obtener la frecuencia de la letra en el rango [L, R]

        cout << freq << "\n";
    }
}