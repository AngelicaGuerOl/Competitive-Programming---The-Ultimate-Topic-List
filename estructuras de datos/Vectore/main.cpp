#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Ordenamos el vector para agrupar números iguales
    sort(v.begin(), v.end());

    int removals = 0;
    int i = 0;

    while (i < n) {
        int x = v[i];  // Número actual
        int count = 0;

        // Contar cuántas veces aparece x
        while (i < n && v[i] == x) {
            count++;
            i++;
        }

        // Si count < x, borramos todo el grupo
        if (count < x) {
            removals += count;
        }
        // Si count > x, eliminamos el exceso
        else if (count > x) {
            removals += (count - x);
        }
    }

    cout << removals << endl;
    return 0;
}

