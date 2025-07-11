#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;
    while (n--) {
        string op;
        cin >> op;
        if (op == "AGREGA") {
            int x;
            cin>>x;
            s.push(x);
        }else if (op == "CONSUME") {
            if(s.size() >= 2){
            int a = s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(a+b);
        }
        }else if(op == "IMPRIME"){
            cout << s.top() << endl;
        }
    }
    return 0;
}


