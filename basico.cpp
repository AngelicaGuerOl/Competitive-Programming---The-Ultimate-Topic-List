#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<m;i++) {
        int ind;
        cin>>ind;
        v[ind]++;
    }
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" "<<endl;
    }
}

