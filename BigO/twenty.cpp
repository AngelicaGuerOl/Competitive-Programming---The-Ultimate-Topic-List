#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;

        // Suma de los números de 1 a n
        long long int op = n * (n + 1) / 2;

        // Cálculo de la suma de las potencias de 2 hasta n
        long long int sumaPotencias = 0;
        for (long long int i = 1; i <= n; i <<= 1) { // Desplazar 1 para calcular potencias de 2
            sumaPotencias += i;
        }

        // Resta 2 veces la suma de potencias de 2
        cout << op - 2 * sumaPotencias << endl;
    }
    return 0;
}
