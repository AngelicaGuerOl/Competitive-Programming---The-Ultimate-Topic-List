#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll= long long int;

int recursion(int n,int o, int d) {
    if (n == 1) {
        cout << o << " " << d << endl;
        return 1;
    }
    int op=o+d,sum=0;
    if (op == 3) {
        sum += recursion(n-1,o,3);
    } else if (op == 4) {
        sum += recursion(n-1,o,2);
    } else if (op == 5) {
        sum += recursion(n-1,o,1);
    }
    sum=sum+1;
    cout << o << " " << d << endl;
    if (op == 3) {
        sum += recursion(n-1,3,d);
    } else if (op == 4) {
        sum += recursion(n-1,2,d);
    } else if (op == 5) {
        sum += recursion(n-1,1,d);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    recursion(n,1,3);
    return 0;
}
