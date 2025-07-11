#include <iostream>
using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M;  // Leer las dimensiones de la matriz
    int A[N][M];  // Definir la matriz 2D

    // Leer los elementos de la matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    cin >> X;  // Leer el número X

    // Buscar el número X en la matriz
    bool found = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] == X) {
                found = true;
                break;  // No es necesario continuar buscando, ya encontramos el número
            }
        }
        if (found) break;  // Si ya encontramos el número, salimos del bucle exterior
    }

    // Imprimir el resultado según si encontramos el número o no
    if (found) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }

    return 0;
}
