#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int op(long long int x, long long int n) {
    long long int sum = 0;

    // Primer término (x^0 - 1)
    sum += (1 - 1);  // x^0 - 1, que es 0

    // Calcular las potencias de x^2, x^4, x^6, ..., hasta n
    for (int i = 2; i <= n; i += 2) {
        long long int power = 1;
        for (int j = 0; j < i; ++j) {
            power *= x; // Calculamos x^i
        }
        sum += power; // Acumulamos la potencia en sum
    }
    return sum;
}

int main() {
    long long int x, n;
    cin >> x >> n;
    if (n <= 10 && 0 <= x) { // Validación de los límites
        long long int ans = op(x, n);  // Llamada a la función op
        cout << ans << endl; // Mostramos el resultado
    }
}


