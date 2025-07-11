#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t,x;
    cin >> t;
    stack<int> st;
    while (t--) {
        string op;
        cin >> op;
        if (op=="push") {
            cin >> x;
            st.push(x);
        }else if (op=="pop") {
            if (st.empty()) {
                cout << "Empty" << endl;
            }else {
                cout << st.top() << endl;
                st.pop();
            }
        }
    }

}

