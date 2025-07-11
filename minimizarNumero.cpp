#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int arr[n];

    // Leer los elementos del arreglo
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxOperations = 0;  // Contador de operaciones
    // Realizar operaciones mientras todos los números sean pares
    while (true) {
        bool allEven = true;  // Bandera para verificar si todos son pares
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {  // Si hay un número impar
                allEven = false;
                break;
            }
        }
        if (!allEven) break;  // Si hay algún impar, salimos del bucle
        // Dividir todos los números por 2
        for (int i = 0; i < n; i++) {
            arr[i] /= 2;
        }
        maxOperations++;  // Incrementar el contador de operaciones
    }
    cout << maxOperations << endl;  // Imprimir el resultado
    return 0;
}
