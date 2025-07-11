#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> stickers(n);

    for (int i = 0; i < n; i++) {
        cin >> stickers[i];
    }

    int cont1 = 0, cont2 = 0;
    for (char c : stickers) {
        if (c == '<') cont1++;
        if (c == '3') cont2++;
    }
   cout << min(cont1, cont2) << endl;

    return 0;
}