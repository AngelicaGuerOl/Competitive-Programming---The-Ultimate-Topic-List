#include <iostream>
using namespace std;

// Función para calcular la suma de los dígitos de un número
int sum_of_digits(int x) {
    int sum = 0; // Inicializamos la suma en 0
    while (x > 0) { // Mientras el número sea mayor a 0
        sum += x % 10; // Extraemos el último dígito y lo sumamos
        x /= 10; // Eliminamos el último dígito
    }
    return sum; // Devolvemos la suma total
}
int main() {
    // Leer los valores de entrada
    int N, A, B;
    cin >> N >> A >> B; // Leemos N, A y B

    int result = 0; // Variable para almacenar la suma total

    // Iterar sobre los números desde 1 hasta N
    for (int i = 1; i <= N; i++) {
        int digit_sum = sum_of_digits(i); // Calculamos la suma de dígitos de i
        if (digit_sum >= A && digit_sum <= B) { // Si está en el rango [A, B]
            result += i; // Sumamos el número al resultado
        }
    }

    // Imprimir el resultado final
    cout << result << endl;

    return 0;
}
