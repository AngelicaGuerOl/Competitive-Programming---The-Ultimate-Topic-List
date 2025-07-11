#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm> // para sort

using namespace std;

// Función de búsqueda binaria
int binarySearch(const vector<int>& array, int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (x == array[mid])
            return mid;
        else if (x > array[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> array(x), array2(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> array2[i];
        int result = binarySearch(array, x, 0, n - 1);

    if (result == -1)
        cout << "NO\n";
    else
        cout << "YES\n";
    }
    
    return 0;
}
