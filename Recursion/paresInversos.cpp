#include <iostream>
using namespace std;

void printEvenIndicesReverse(int arr[], int index) {
    if (index < 0) {
        return;
    }
    if (index % 2 == 0) {
        cout << arr[index] << " ";
    }
    printEvenIndicesReverse(arr, index - 1);
}

int main() {
    int N;
    // Leer el número de elementos
    cin >> N;
    int arr[N];

    // Leer los elementos del arreglo
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Llamar a la función recursiva empezando desde el último índice
    printEvenIndicesReverse(arr, N - 1);
    return 0;
}

