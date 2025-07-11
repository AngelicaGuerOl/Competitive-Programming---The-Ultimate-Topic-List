#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main() {
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++) { // n
        if (n % i == 0) { ///1
            int j = n / i;
            cout << i << endl;
            if (j != i) {
                cout << j << endl;
            }
        }
    }
    cout << endl;
    return 0;
}
