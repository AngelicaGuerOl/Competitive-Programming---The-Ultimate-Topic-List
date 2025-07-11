#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int n,op;
    cin >> n;
    for ( int i=1; i<=n; i++) {
        int sum=0,cont=0;
        int aux;
        cin >> aux;
            while (aux>0) {

                if (aux%2==0) {
                    //cout<<"0"<<endl;
                }else{
                    //cout<<"1"<<endl;
                    cont++;
                }
                aux/=2;
            }
        //cout<<cont<<endl;
        for (int j=0; j<cont; j++) {
            int res= pow(2,j);
            sum+=res;
        }
        cout<<sum<<endl;
    }
}
