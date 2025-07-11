#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int n;
    cin >> n;
    for (int i=1; i <=n ; i++) {
        for (int j=1; j <= n-i; j++ ) {
            cout << " ";
        }
            for (int k=1; k<=2 * i-1; k++) {
                cout << "*";
            }
        cout << endl;
        }
        for (int i=n; i>0; i--) {
            for (int j=1; j <= n-i; j++ ) {
                cout << " ";
            }
            for (int p=1; p<=2*i-1; p++) {
                cout << "*";
            }

            cout << endl;
        }


    }


