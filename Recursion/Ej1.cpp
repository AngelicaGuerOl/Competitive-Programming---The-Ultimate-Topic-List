#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

// Función recursiva para imprimir números del 1 al N
void printNumbers( int N) { // current = número actual, N = límite máximo
    if (N==1) { // Caso base: cuando current supera N, terminamos la recursión
        cout << N;
    }
    else {
        cout << N << " ";
        printNumbers(N-1); // Llamada recursiva: incrementamos current y volvemos a llamar a la función
    }
}

int main() {
    int N;
    cin >> N; // Leer el número N del usuario
    printNumbers(N); // Llamar a la función recursiva desde el número 1
    return 0;
}
