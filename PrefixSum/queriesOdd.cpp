#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);  // Desactiva la sincronización con `printf` para acelerar la entrada/salida
    ios_base::sync_with_stdio(false);  // Mejora el rendimiento de entrada/salida

    int t;
    cin >> t;  // Número de casos de prueba

    while (t--) {  // Iterar sobre cada caso de prueba
        int n, q;
        cin >> n >> q;  // Leer tamaño del arreglo y número de consultas

        vector<long long> a(n), pref(n + 1, 0);  // `a` almacena el arreglo original, `pref` almacena los prefix sum
        long long sum = 0;  // Variable para almacenar la suma total del arreglo

        // Leer el arreglo
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Construir el prefix sum
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i - 1];  // pref[i] almacena la suma desde el inicio hasta el índice `i-1`
        }

        sum = pref[n];  // Suma total del arreglo original

        // Procesar las consultas
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;  // Leer la consulta (rango l-r y nuevo valor k)

            // Suma del rango que será modificado
            long long sumR = pref[r] - pref[l - 1];

            // Calcular la nueva suma total si se cambia el rango a `k`
            long long sumTotal = sum - sumR + (r - l + 1) * k;

            // Verificar si la nueva suma total es impar
            if (sumTotal % 2 != 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}

