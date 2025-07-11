#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void solved() {
    int x1, y1, x2, y2, op, op2;
    char letra;
    cin >> x1 >> y1 >> x2 >> y2 ;
    op=x1+x2;
    op2=y1+y2;
    for (int i=1; i <= 4; i++) {
        int x, y;
        cin >> x >> y;
        if (x==op && y==op2) {
            letra = (char) i + 64;
        }
    }
    cout << letra;


}
int main() {
    int q;
    cin >> q;
    while (q--) {
        solved();
    }

}