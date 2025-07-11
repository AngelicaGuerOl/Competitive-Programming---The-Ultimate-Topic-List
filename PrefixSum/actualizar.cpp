#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cout << "Ingrese el tamaño del arreglo (N): ";
    cin >> N;
    cout << "Ingrese el número de actualizaciones (Q): ";
    cin >> Q;

    vector<int> a(N);      // Arreglo original
    cout << "Ingrese los valores del arreglo: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i];      // Ingresar los valores para el arreglo
    }

    vector<int> pref(N + 1, 0); // Arreglo de diferencias (tamaño N+1)

    // Aplicar las actualizaciones
    for (int i = 0; i < Q; i++) {
        int L, R, X;
        cout << "Ingrese L, R y X para la actualización " << i + 1 << ": ";
        cin >> L >> R >> X;
        pref[L] += X;   // Sumar X en el índice L
        if (R + 1 < N) {
            pref[R + 1] -= X; // Restar X en el índice R+1 si R+1 < N
        }
    }

    // Propagar las sumas prefix
    for (int i = 1; i <= N; i++) {  // Cambié i < N a i <= N
        pref[i] += pref[i - 1]; // Acumular los valores a la derecha
    }

    // Construir el arreglo final sumando los valores propagados
    for (int i = 0; i < N; i++) {
        a[i] += pref[i]; // Aplicar los cambios al arreglo original
    }

    // Imprimir la secuencia final
    cout << "Arreglo final: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
