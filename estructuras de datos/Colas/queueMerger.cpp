#include <bits/stdc++.h>
using namespace std;

queue<int> merge(queue<int> A, queue<int> B) {
    queue<int> result;

    while (!A.empty() && !B.empty()) {
        result.push(A.front());
        A.pop();
        result.push(B.front());
        B.pop();
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    queue<int> A, B;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        A.push(num);
    }

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        B.push(num);
    }

    queue<int> answer = merge(A, B);

    while (!answer.empty()) {
        cout << answer.front() << endl;
        answer.pop();
    }

    return 0;
}
