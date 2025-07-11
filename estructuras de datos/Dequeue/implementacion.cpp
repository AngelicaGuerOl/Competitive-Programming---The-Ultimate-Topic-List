#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    deque<int>dq;
    while(t--){
        string op;
        cin >> op;
        if(op=="push_back"){
            int x;
            cin >> x;
            dq.push_back(x);
        }else if(op=="pop_front"){
            if(!dq.empty()){
                cout << dq.front() <<endl;
                dq.pop_front();
            }else{
                cout << "Empty"<<endl;
            }
        }else if(op=="push_front"){
            int x;
            cin >> x;
            dq.push_front(x);
        }else if(op=="pop_back"){
            if(!dq.empty()){
                cout << dq.back() <<endl;
                dq.pop_back();
            }else{
                cout << "Empty"<<endl;
            }
        }
    }
}
