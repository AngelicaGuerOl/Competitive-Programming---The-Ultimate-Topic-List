#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<pair<int, int>>> mapa(M, vector<pair<int, int>>(N));

    // Leer las pistas del mapa
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            int f, c;
            cin >> f >> c;
            mapa[i][j] = {f, c};
        }
    }

     int fila = 0, columna = 0;

    do {
        cout << fila << " " << columna << "\n";

        int nuevaFila = mapa[fila][columna].first;
        int nuevaColumna = mapa[fila][columna].second;

        fila = nuevaFila;
        columna = nuevaColumna;

    } while (fila != 0 || columna != 0);

    cout << "0 0" << "\n";

    return 0;
}