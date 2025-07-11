#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        priority_queue<long long int> pq;
        long long int sum=0;
        while (n--) {
            long long int c;
            cin >> c;
            if ( c > 0) {
                pq.push(c);
            }else {
                    if (!pq.empty()) {
                        long long int num=pq.top();
                        sum+=num;
                        pq.pop();
                    }
            }
        }
        cout << sum << " ";
    }
}



