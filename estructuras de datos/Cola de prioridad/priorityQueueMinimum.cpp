#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
    while (t--) {
        string op;
        cin >> op;
        if (op == "push") {
            long long int n;
            cin >> n;
            pq.push(n);
        }else if (op == "pop") {
            pq.pop();
        }else if (op == "top") {
            if (!pq.empty()) {
                cout << pq.top() << "\n";
            }
        }
    }


}



