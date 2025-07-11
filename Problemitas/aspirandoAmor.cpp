#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;

int main() {
    int n;
    cin >> n;
    int men = 0;
    int tres = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s=="<") {
            men++;
        }else if (s=="3") {
            tres++;
        }
    }
    int total = min(men, tres);
    cout << total << endl;
    return 0;
}
