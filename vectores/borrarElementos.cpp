#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    int n,n2, n3,n4;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> n2;
    int val = v.at(n2-1);
    v.erase(find(v.begin(), v.end(), val));
    for (int i = 0; i < v.size() ; i++) {
        //cout << v[i] << " ";
    }
    cin >> n3 >>n4;
    v.erase(v.begin()+n3-1,v.begin()+n4-1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size() ; i++) {
        cout << v[i] << " ";
    }

}
