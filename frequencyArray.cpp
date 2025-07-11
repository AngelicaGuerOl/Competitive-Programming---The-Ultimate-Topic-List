#include <iostream>
using namespace std;

int main() {
    int n, METRO;
    cin >> n >> METRO;  // Leemos los dos números n y METRO

    int A[n];  // Arreglo para almacenar los números de la matriz A
    int count[METRO + 1] = {0};  // Arreglo de conteo, inicializado en 0

    // Leer los elementos de la matriz A
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Contar las ocurrencias de cada número en A
    for (int i = 0; i < n; i++) {
        count[A[i]]++;  // Incrementamos el conteo del número A[i]
    }

    // Imprimir cuántas veces aparece cada número del 1 al METRO
    for (int i = 1; i <= METRO; i++) {
        cout << count[i] << endl;  // Imprimimos el conteo de cada número i
    }

    return 0;
}

