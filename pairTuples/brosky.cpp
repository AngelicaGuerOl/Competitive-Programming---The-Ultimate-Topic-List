#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<pair<int, int>>> mapa(N, vector<pair<int, int>>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> mapa[i][j].first >> mapa[i][j].second;
        }
    }

    int fila = 0, columna = 0;
    while (true) {
        if (fila == N - 1 && columna == M - 1) {
            cout << "Eso Broski" << endl;
            return 0;
        }
        int nuevaFila = mapa[fila][columna].first;
        int nuevaColumna = mapa[fila][columna].second;
        if (nuevaFila == 0 || nuevaColumna == 0) {
            cout << "Ni pp Broski" << endl;
            return 0;
        }
        fila = nuevaFila-1;
        columna = nuevaColumna-1;
    }

    return 0;
}
