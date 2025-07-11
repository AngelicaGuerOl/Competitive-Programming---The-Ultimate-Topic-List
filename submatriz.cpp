#include <iostream>  // Inclusión de la librería para entrada y salida estándar
#include <vector>    // Inclusión de la librería para usar vectores
#include <limits>    // Inclusión de la librería para usar INT_MIN
using namespace std;

int main() {
    int T;
    cin >> T;  // Se lee el número de casos de prueba

    while (T--) {
        int n;
        cin >> n;  // Se lee el tamaño del arreglo (n) desde la entrada estándar

        vector<int> arr(n);  // Declaración de un vector de tamaño n

        // Bucle para leer los elementos del arreglo
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  // Se leen los elementos del arreglo uno por uno
        }

        // Vector para guardar los máximos de cada submatriz
        vector<int> max_vals;  // Usamos un vector para almacenar los máximos
        // Primer bucle (controlado por i), inicio de la submatriz
        for (int i = 0; i < n; i++) {
            // Segundo bucle (controlado por j), final de la submatriz
            for (int j = i; j < n; j++) {
                int max = INT_MIN;  // Inicializamos max con el valor mínimo posible
                // Tercer bucle (controlado por k)
                // Este bucle recorre los elementos de la submatriz de arr[i] hasta arr[j]
                // k empieza en i (inicio de la submatriz) y va hasta j (fin de la submatriz)
                for (int k = i; k <= j; k++) {
                    if (arr[k] > max) {
                        max = arr[k];
                    }
                }
                max_vals.push_back(max);  // Agregamos el máximo encontrado al vector
            }
        }
        // Imprimir todos los máximos en cualquier orden
        for (int i = 0; i < max_vals.size(); i++) {
            cout << max_vals[i] << " ";
        }
        cout << endl;  // Nueva línea después de cada caso de prueba
    }

    return 0;  // El programa termina exitosamente
}
