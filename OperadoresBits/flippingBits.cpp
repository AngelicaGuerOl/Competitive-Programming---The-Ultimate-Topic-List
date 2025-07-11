#include <iostream>
using namespace std;

unsigned int flippingBits(unsigned int n) {
    return ~n;  // invertir
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned int n;
        cin >> n;
        cout << flippingBits(n) << endl;
    }
    return 0;
}
