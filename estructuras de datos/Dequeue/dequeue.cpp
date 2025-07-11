#include <iostream>
#include <deque>

using namespace std;

int main() {
    int t;
    cin >> t;
    deque<int>dq;
    while(t--){
        int op;
        cin>> op;
        if(op==0){
            int d,x;
            cin >> d;
            if(d==0){
                cin>>x;
                dq.push_front(x);
            }else{
                cin>>x;
                dq.push_back(x);
            }
        }else if(op==1){
            if(!dq.empty()){
                int x;
                cin >>x;
                cout << dq.at(x)<<endl;
            }
        }else if(op==2) {
            if (!dq.empty()) {
                int d;
                cin >> d;
                if (d == 0) {
                    dq.pop_front();
                } else {
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}

