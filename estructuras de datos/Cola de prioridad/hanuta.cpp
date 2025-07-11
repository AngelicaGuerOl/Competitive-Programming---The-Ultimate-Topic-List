#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }
    priority_queue<int> pq;
    for (int i = 0; i < t; i++) {
        pq.push(v[i]);
        if (pq.size()<3) {
            cout << "-1"<<endl;
        }else {
            priority_queue<int> temp = pq;
            int a = temp.top(); temp.pop();
            int b = temp.top(); temp.pop();
            int c = temp.top();

            long long pr = 1LL * a * b * c;
            cout << pr << endl;
        }
    }
}



