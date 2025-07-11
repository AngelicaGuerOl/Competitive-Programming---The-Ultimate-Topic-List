#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string pal="";
    cin >> s;
    for (int i = s.length()-1; i >=0; i--) {
        pal += s[i];
    }
    if (s==pal ) {
        cout << "YES";
    }else {
        cout << "NO";
    }
}