#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

// Función para verificar si un número es de la suerte
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;  // Obtenemos el último dígito
        if (digit != 4 && digit != 7) {
            return false;  // Si encontramos un dígito que no sea 4 o 7, no es de la suerte
        }
        num /= 10;  // Eliminamos el último dígito
    }
    return true;  // Todos los dígitos son 4 o 7
}

int main() {
    int A, B;
    cin >> A >> B;

    bool found = false;

    // Iteramos sobre el rango [A, B]
    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {  // Verificamos si el número es de la suerte
            cout << i << " ";
            found = true;
        }
    }

    // Si no encontramos ningún número de la suerte, imprimimos -1
    if (!found) {
        cout << -1;
    }

    cout << endl;
    return 0;
}
