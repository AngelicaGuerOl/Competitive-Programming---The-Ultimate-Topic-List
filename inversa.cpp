#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;  // Leemos el número de filas (N) y columnas (M)

    int A[N][M];

    // Leer la matriz A
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    // Invertir y imprimir la matriz en el espejo (invertir las filas)
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            cout << A[i][j] << " ";  // Imprimir el elemento de la fila invertida
        }
        cout << endl;  // Nueva línea después de cada fila
    }

    return 0;
}

