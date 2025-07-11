#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;  // Leemos el número de casos de prueba

    while (N--) {  // Repetimos para cada caso de prueba
        string S, T, result = "";  // Inicializamos las cadenas S, T y result
        cin >> S >> T;  // Leemos las cadenas S y T

        int lenS = S.length();  // Calculamos la longitud de S
        int lenT = T.length();  // Calculamos la longitud de T
        int minLength = min(lenS, lenT);  // Calculamos la longitud mínima entre S y T

        // Intercalamos los caracteres de S y T
        for (int i = 0; i < minLength; i++) {  // Recorremos los índices hasta el mínimo de longitudes
            result += S[i];  // Agregamos el carácter de S en la posición i a result
            result += T[i];  // Agregamos el carácter de T en la posición i a result
        }

        // Si S es más largo que T, agregamos los caracteres restantes de S a result
        if (lenS > lenT) {
            result += S.substr(minLength);  // Substr obtiene la parte de S después del índice minLength
        }
        // Si T es más largo que S, agregamos los caracteres restantes de T a result
        else {
            result += T.substr(minLength);  // Substr obtiene la parte de T después del índice minLength
        }

        cout << result << endl;  // Imprimimos el resultado para este caso de prueba
    }

    return 0;  // Finalizamos la ejecución del programa
}
