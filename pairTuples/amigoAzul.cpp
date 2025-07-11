#include <iostream>  // Inclusión de la librería para entrada y salida estándar
#include <vector>    // Inclusión de la librería para usar vectores
#include <limits>    // Inclusión de la librería para usar INT_MIN
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> coordenadas;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int x,y;
            cin>>x>>y;
            coordenadas.push_back(make_pair(x,y));
           // cout << "Índice (" << i << ", " << j << "): (" << x << ", " << y << ")\n";

        }
    }
    int fila = 0, columna = 0;

    do {
        int idx = fila * m + columna;
        cout << fila << " " << columna << "\n";

        int nuevaFila = coordenadas[idx].first;
        int nuevaColumna = coordenadas[idx].second;
        fila = nuevaFila;
        columna = nuevaColumna;

    } while (fila != 0 || columna != 0);
    cout << "0 0" << "\n";

    return 0;
}