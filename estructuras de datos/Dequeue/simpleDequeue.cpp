#include <iostream>
#include <deque>

using namespace std;

int main() {
    string op;
    deque<int> dq;

    while (cin >> op && op != "exit") {
        if (op == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
            cout << "ok" << '\n';
        } else if (op == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
            cout << "ok" << '\n';
        } else if (op == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            } else {
                cout << "Empty" << '\n';
            }
        } else if (op == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            } else {
                cout << "Empty" << '\n';
            }
        } else if (op == "front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
            } else {
                cout << "Empty" << '\n';
            }
        } else if (op == "back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
            } else {
                cout << "Empty" << '\n';
            }
        } else if (op == "size") {
            cout << dq.size() << '\n';
        } else if (op == "clear") {
            dq.clear();
            cout << "ok" << '\n';
        }
    }

    cout << "bye" << '\n';
    return 0;
}

