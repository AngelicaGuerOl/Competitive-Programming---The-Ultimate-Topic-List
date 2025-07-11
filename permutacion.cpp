#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> A(n), B(n);

    // Leer los elementos de la matriz A
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Leer los elementos de la matriz B
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Ordenar ambas matrices
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // Comparar las matrices
    if (A == B) {
        cout << "yes" << endl;  // Es una permutación
    } else {
        cout << "no" << endl;  // No es una permutación
    }

    return 0;
}
