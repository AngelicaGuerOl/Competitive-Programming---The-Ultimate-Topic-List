#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Leer el tamaño de la matriz N x N

    int A[N][N];  // Matriz de tamaño N x N

    // Leer la matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int sumPrimaryDiagonal = 0, sumSecondaryDiagonal = 0;

    // Imprimir y calcular las sumas de las diagonales
    cout << "Diagonal principal: ";
    for (int i = 0; i < N; i++) {
        cout << A[i][i] << " ";  // Imprimir los elementos de la diagonal principal
        sumPrimaryDiagonal += A[i][i];  // Sumar los elementos de la diagonal principal
    }
    cout << endl;

    cout << "Diagonal secundaria: ";
    for (int i = 0; i < N; i++) {
        cout << A[i][N-1-i] << " ";  // Imprimir los elementos de la diagonal secundaria
        sumSecondaryDiagonal += A[i][N-1-i];  // Sumar los elementos de la diagonal secundaria
    }
    cout << endl;

    // Calcular la diferencia absoluta
    int difference = abs(sumPrimaryDiagonal - sumSecondaryDiagonal);

    // Imprimir la diferencia
    cout << "Diferencia absoluta: " << difference << endl;

    return 0;
}

