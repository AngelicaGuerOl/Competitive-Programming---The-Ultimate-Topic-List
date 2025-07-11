#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    stack<int> num;
    while (t--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x;
            cin >> x;
            num.push(x);
        }else if (op == 2) {
            if (!num.empty()) {
                num.pop();
            }
        }else if (op == 3) {
            if (num.empty()) {
                cout << "Empty!"<<endl;
            }else{
                cout << num.top()<<endl;
            }
        }
    }
}


