#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int nv,q;
    cin >> nv >>q;
    vector<priority_queue<int>> pq(nv);
    while(q--) {
        int op;
        cin >> op;
        if(op==0) {
            int v,x;
            cin >> v >> x;
            pq[v].push(x);
        }else if(op==1) {
            int v;
            cin >> v;
            if(!pq[v].empty()) {
                cout<<pq[v].top()<<endl;
            }
        }else if(op==2) {
            int v;
            cin >> v;
            if(!pq[v].empty()) {
                pq[v].pop();
            }
        }
    }
}



