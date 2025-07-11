#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;
deque<char> dqs;
deque<char> dqt;
deque<char> dqf;
void funcion(string s, string t) {
    dqs.clear();
    dqt.clear();
    dqf.clear();
    for (char c : s) {
        dqs.push_back(c);
    }
    for (char c : t) {
        dqt.push_back(c);
    }

    while (!dqs.empty() || !dqt.empty()) {
        if (!dqs.empty()) {
            dqf.push_back(dqs.front());
            dqs.pop_front();
        }
        if (!dqt.empty()) {
            dqf.push_back(dqt.front());
            dqt.pop_front();
        }
    }
    for (char c : dqf) {
        cout << c;
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    string s,t;
    for (int i = 0; i < n; i++) {
        cin >> s >> t;
        funcion(s, t);
    }
    return 0;
}
