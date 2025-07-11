#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    char s;
    int n;
    cin >> s >> n;
    int nl=(int) s - 96;
    if (nl%2==0 && n%2==0 || nl%2==1 && n%2==1) {
        cout << "NEGRO";
    }else {
        cout << "BLANCO";
    }
}