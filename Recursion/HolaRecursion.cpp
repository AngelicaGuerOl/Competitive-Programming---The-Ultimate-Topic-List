#include <iostream>
using namespace std;

void suma(int arr[], int index, int &sum) {
    if (index < 0) {
        return;
    }
        sum += arr[index];

    suma(arr, index - 1, sum);
}

int main() {
    int t;
    cin >> t;
    for (int caso = 1; caso <= t; caso++) {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        suma(arr, n - 1, sum);
        // Imprimir el resultado en el formato requerido
        cout <<"Caso " << caso << ": " << sum <<endl; // Cambiado "t" por "caso"
    }
    return 0;
}
