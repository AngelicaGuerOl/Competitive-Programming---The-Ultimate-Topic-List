#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Leer el número de elementos
    vector<int> v(n); // Crear un vector de tamaño n

    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Leer los elementos del vector
    }

    // Ordenar el vector
    sort(v.begin(), v.end());

    // Calcular la mediana
    double mediana; // Usamos double para manejar el caso de la mediana par
    if (n % 2 == 1) {
        // Si n es impar, la mediana es el elemento del medio
        mediana = v[n / 2];
    } else {
        // Si n es par, la mediana es el promedio de los dos elementos del medio
        mediana = (v[n / 2 - 1] + v[n / 2]) / 2.0; // Asegúrate de hacer la división en punto flotante
    }

    // Imprimir la mediana
    cout << fixed << setprecision(1) << mediana << endl; // Formato de salida
    return 0;
}