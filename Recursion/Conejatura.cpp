#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
void recursion(long long n) {
    cout << n << " ";
    if (n == 1) {
        return;
    }
    if (n%2 == 0) {
         recursion(n/2);
    }
    else{
        recursion(3*n+1);
    }

}
int main() {
    int n;
    cin >> n;
    recursion(n);
    return 0;
}
