#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    long long int num;
    cin >> n;
    bool par=false;
    for (int i = 0; i < n.length(); i++) {
        char c = n[0];
        num =c-'0';
        if (num %2 ==0) {
            par=true;
        }else {
            par=false;
        }
    }
    cout << num << endl;
    if (par) {
        cout << "EVEN" << endl;
    }else {
        cout << "ODD" << endl;
    }
}
