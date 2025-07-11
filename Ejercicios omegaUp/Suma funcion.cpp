#include <iostream>
using namespace std;

long long f(int n) {
    long long suma = 0;
    for (int k = 1; k <= n; ++k) {
        suma += (k * (k + 1)) / 2;
    }
    return suma;
}

int main() {
    int n;
    cin >> n;
    long long resultado = f(f(f(n)));
    cout << resultado << endl;
    return 0;
}

