#include <iostream>
#include <string>
using namespace std;

int main() {
    long long int n,sum=0,num;
    cin >> n;
    char str[n],car;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        car = str[i];
        num = car - '0';
        sum += num;
    }
    cout << sum << endl;

}