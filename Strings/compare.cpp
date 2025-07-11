#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int result= s1.compare(s2);
    if(result < 0) {
        cout << s1;
    }else if (result > 0) {
        cout << s2;
    }else {
        cout << s1;
    }
}