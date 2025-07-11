#include <iostream>
#include <stack>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    stack<long long int> num;
    stack<long long int> maxStack;  // Guarda el máximo en cada estado

    while (t--) {
        int op;
        cin >> op;

        if (op == 1) {
            long long int x;
            cin >> x;
            num.push(x);

            // Si maxStack está vacío o el nuevo valor es mayor, se agrega a maxStack
            if (maxStack.empty() || x >= maxStack.top()) {
                maxStack.push(x);
            }
        }
        else if (op == 2) {
            if (!num.empty()) {
                // Si el elemento que se va a eliminar es el máximo, también lo quitamos de maxStack
                if (num.top() == maxStack.top()) {
                    maxStack.pop();
                }
                num.pop();
            }
        }
        else if (op == 3) {
            // Siempre hay elementos en la pila, por lo que podemos imprimir el máximo actual
            cout << maxStack.top() << endl;
        }
    }
    return 0;
}



