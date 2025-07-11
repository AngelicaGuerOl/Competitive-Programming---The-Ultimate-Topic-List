#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t; // Número de casos de prueba
    cin >> t;

    while (t--) {
        int n; // Número de elementos en el caso de prueba actual
        cin >> n;

        long long int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        // Inicializar el mínimo para este caso de prueba
        long long int minResult = LLONG_MAX;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                long long int result = arr[i] + arr[j] + (j - i);
                if (result < minResult) {
                    minResult = result;
                }
            }
        }
        // Imprimir el resultado para el caso de prueba actual
        cout << minResult << endl;
    }

    return 0;
}
