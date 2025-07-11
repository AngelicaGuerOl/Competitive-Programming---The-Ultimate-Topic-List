#include <iostream>
#include <deque>
using namespace std;

int main() {
    int t;
    cin >> t;
    deque<int> dq;
    bool isReversed = false; // Variable para rastrear si el deque está invertido

    while(t--) {
        string op;
        cin >> op;

        if (op == "toFront") {
            int x;
            cin >> x;
            if (isReversed) {
                dq.push_back(x); // Si está invertido, lo agregamos al final
            } else {
                dq.push_front(x); // Si no está invertido, lo agregamos al frente
            }
        } else if (op == "front") {
            if (!dq.empty()) {
                if (isReversed) {
                    cout << dq.back() << '\n'; // Si está invertido, mostramos el último
                    dq.pop_back(); // Y lo eliminamos
                } else {
                    cout << dq.front() << '\n'; // Si no está invertido, mostramos el primero
                    dq.pop_front(); // Y lo eliminamos
                }
            } else {
                cout << "No job for Ada?" << '\n';
            }
        } else if (op == "back") {
            if (!dq.empty()) {
                if (isReversed) {
                    cout << dq.front() << '\n'; // Si está invertido, mostramos el primero
                    dq.pop_front(); // Y lo eliminamos
                } else {
                    cout << dq.back() << '\n'; // Si no está invertido, mostramos el último
                    dq.pop_back(); // Y lo eliminamos
                }
            } else {
                cout << "No job for Ada?" << '\n';
            }
        } else if (op == "reverse") {
            isReversed = !isReversed; // Solo cambiamos el estado de inversión
        } else if (op == "push_back") {
            int x;
            cin >> x;
            if (isReversed) {
                dq.push_front(x); // Si está invertido, lo agregamos al frente
            } else {
                dq.push_back(x); // Si no está invertido, lo agregamos al final
            }
        }
    }
    return 0;
}

