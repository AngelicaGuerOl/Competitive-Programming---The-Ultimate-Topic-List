#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;
int alt=0;
int recursion(int n, int nivel) {
    if (nivel > alt) {
        alt = nivel;
    }
    if (n <= 5) {
        return 1;
    }
    return recursion(n-5,nivel+1) + recursion((3 * n)/4,nivel+1);
}

int main() {
    int n;
    cin >> n;
    int r=recursion(n,1);
    cout << r << " " << alt << endl;
    return 0;
}
