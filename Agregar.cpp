#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string imp(long long int x) {
    string res = "";
        while ( x > 0) {
            if ( x % 2 == 0) {
                res = "0" + res;
            }else {
                res = "1" + res;
            }
            x/=2;
        }
    return res;
}
string pal(string bin) {
    string a="";
    for (int i = bin.size() -1;i >= 0; i--) {
        a += bin[i];
    }
    return a;
}
int main() {
    long long int a;
    cin>>a;
    if (a % 2 == 0) {
        cout << "NO" << endl;
        return 0;
    }
    string impar = imp(a);
    string palindroma = pal(impar);
    //cout<<"Binario "<<impar;
    //cout<<"pal "<<palindroma;
    if (impar == palindroma) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

}
