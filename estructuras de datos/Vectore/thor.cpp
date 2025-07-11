#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long int n,q;
    cin >> n >> q;
    vector<int> apn(n+1,0);
    vector<int> ape;
    long long int cont=0;
    for (long long int i = 0; i < q; i++) {
        long long int x,y;
        cin >> x >> y;
        if (x == 1) {
            apn[y]++;
            ape.emplace_back(y);
            cont++;

        }else if (x == 2) {
            cont -= apn[y];
            apn[y] = 0;

        }else{
            int l=0;
            while(l<y && !ape.empty()) {
                int nap = ape[l];
                if (apn[nap]>0) {
                    apn[nap]--;
                    cont--;
                }
                l++;
            }
            ape.erase(ape.begin(),ape.begin()+l);
        }
        cout<<cont<<endl;
    }

}
