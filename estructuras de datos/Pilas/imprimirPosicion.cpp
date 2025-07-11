#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Tamaño del arreglo

    vector<int> arr(n);  // Almacena los números
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Leer los valores del arreglo
    }

    stack<pair<int, int>> s;  // Pila que guarda (valor, índice)
    vector<int> result(n);    // Almacena la respuesta

    for (int i = 0; i < n; i++) {
        // Mientras la pila no esté vacía y el valor en la cima sea >= arr[i]
        while (!s.empty() && s.top().first >= arr[i]) {
            s.pop();  // Eliminamos elementos que no sirven
        }

        // Si la pila está vacía, no hay número más pequeño a la izquierda
        if (s.empty()) {
            result[i] = 0;
        } else {
            // El índice más cercano con un número más pequeño
            result[i] = s.top().second;
        }

        // Guardamos el valor actual y su posición (1-indexado)
        s.push({arr[i], i + 1});
    }

    // Imprimir la respuesta
    for (int x : result) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}


