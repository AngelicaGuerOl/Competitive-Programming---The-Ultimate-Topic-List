#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main() {
    int n, m;
    cin >> n >> m;

    multiset<long long int> tickets;
    for (int i = 0; i < n; ++i) {
        long long int price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; ++i) {
        long long int max_price;
        cin >> max_price;

        auto it = tickets.upper_bound(max_price); // apunta al primer elemento > max_price

        if (it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            tickets.erase(it);
        }
    }

    return 0;
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.