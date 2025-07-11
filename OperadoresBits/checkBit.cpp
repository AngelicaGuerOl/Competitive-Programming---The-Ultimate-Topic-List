#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,i;
    cin>>n>>i;
        if ((n&(1<<i))!=0) {
            cout<<"true";
        }else {
            cout<<"false";
        }

}