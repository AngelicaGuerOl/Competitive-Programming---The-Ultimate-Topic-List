#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    string n;
    stack<string> pila;
    while (cin >> n && n!= "#") {
        pila.push(n);
    }
    while (!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }

    return 0;
}


