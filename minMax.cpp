#include <iostream>
#include <algorithm> // Para std::swap
using namespace std;

int main() {
    int n;
    cin >> n; // Leer el tamaño del arreglo

    int A[n]; // Declarar un arreglo de tamaño n
    for (int i = 0; i < n; i++) {
        cin >> A[i]; // Leer los elementos del arreglo
    }

    // Encontrar el índice del número mínimo y máximo
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] < A[minIndex]) {
            minIndex = i; // Actualizar índice del mínimo
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i; // Actualizar índice del máximo
        }
    }

    // Intercambiar el número mínimo con el máximo usando std::swap
    swap(A[minIndex], A[maxIndex]);

    // Imprimir el arreglo después del intercambio
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
