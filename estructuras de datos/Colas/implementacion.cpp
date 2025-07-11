#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    queue<int> q;
    while (t--) {
        string op;
        cin >> op;
        if (op == "Enqueue") {
            int n;
            cin >> n;
            q.push(n);
        }else if (op == "Dequeue") {
            if(!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            }else {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;

}



