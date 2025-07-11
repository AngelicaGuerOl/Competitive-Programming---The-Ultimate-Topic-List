#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    multiset<long long int> ms;
    for(int i=0;i<n;i++) {
        long long int x;
        cin>>x;
        ms.insert(x);
    }
    while(q--) {
       long long int op;
        cin>>op;
        if(op==0) {
           long long int x;
            cin>>x;
            ms.insert(x);
        }else if(op==1) {
            if (!ms.empty()) {
                int min=*ms.begin();
                cout<<min<<endl;
                ms.erase(ms.begin());
            }
        }else if(op==2) {
            if (!ms.empty()) {
                auto it = prev(ms.end()); // Apuntar al último elemento
                int maxValue = *it;       // Obtener el valor del máximo elemento
                cout<<maxValue<<endl;
                ms.erase(it);
            }

        }
    }
}