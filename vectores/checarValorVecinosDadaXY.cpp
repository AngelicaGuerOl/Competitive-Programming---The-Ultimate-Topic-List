#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll= long long int;


int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    cin >> x >> y;
    x -= 1;
    y -= 1;

    int dx[] = {-1, -1, -1,  0, 0, 1, 1, 1};
    int dy[] = {-1,  0,  1, -1, 1,-1, 0, 1};

    bool f = true;

    for (int k = 0; k < 8; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (v[nx][ny] != 'x') {
                f = false;
                break;
            }
        }
    }

    if (f) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    return 0;
}