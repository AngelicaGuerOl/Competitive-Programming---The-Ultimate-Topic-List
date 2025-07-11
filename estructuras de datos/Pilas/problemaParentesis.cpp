#include <iostream>
#include <stack>
using namespace std;

bool valido(string str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }else {
            if (s.empty()) {
                return false;
            }else {
                char ult = s.top();
                if (c == ')' && ult == '(' || c == ']' && ult == '[' || c == '}' && ult == '{') {
                    s.pop();
                }else {
                    return false;
                }
            }
        }
    }
    return s.empty();
}
int main() {
    string s;
    cin >> s;
    if (valido(s)) {
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }
}

