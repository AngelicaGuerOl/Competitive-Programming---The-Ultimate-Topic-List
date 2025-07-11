#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,max_and = 0, max_or = 0, max_xor = 0;
    cin >> n;
    int k;
    cin >>k;
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            // AND
            if ((i & j) < k) {
                max_and = max(max_and, i & j);
            }
            // OR
            if ((i | j) < k) {
                max_or = max(max_or, i | j);
            }
            // XOR
            if ((i ^ j) < k) {
                max_xor = max(max_xor, i ^ j);
            }
        }
    }
    // Imprimir los resultados
    cout << max_and << endl;
    cout << max_or << endl;
    cout << max_xor << endl;

}
