#include <bits/stdc++.h>
using namespace std;
int main() {
    // Optimización de entrada/salida
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Leer la cadena de entrada
    string s;
    cin >> s;
    int n = s.length();
    // Matriz de prefijos acumulados
    vector<vector<int>> pref(n+1, vector<int>(26));
    // Construcción de la matriz de prefijos
    for (int i = 0; i < n; i++) {
        pref[i+1] = pref[i]; // Copiar los valores acumulados anteriores
        int char_id = s[i] - 'a'; // Convertir carácter a índice (0 para 'a', 25 para 'z')
        pref[i+1][char_id]++; // Incrementar la frecuencia del carácter actual
    }
    // Leer número de consultas
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int L, R;
        cin >> L >> R; // Índices 0-based
        char best_char = '?'; // Carácter con mayor frecuencia en el rango
        int best_freq = -1; // Frecuencia más alta encontrada

        // Evaluar cada letra del alfabeto
        for (int char_id = 0; char_id < 26; char_id++) {
            int freq = pref[R+1][char_id] - pref[L][char_id]; // Obtener la frecuencia de la letra en el rango [L, R]
            if (freq > best_freq) { // Si encontramos una letra con mayor frecuencia
                best_freq = freq;
                best_char = 'a' + char_id; // Convertir índice a letra
            }
        }
        // Imprimir la letra más frecuente en el rango dado
        cout << best_char << "\n";
    }
    return 0;
}

