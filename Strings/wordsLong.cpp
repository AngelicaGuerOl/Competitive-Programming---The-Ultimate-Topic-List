#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.length();
        if (len>10) {
            char c,c2;
            for (int i = 0; i < s.size(); i++) {
                 c = s[0];
            }
            c2 =s[s.size()-1];
            int len2 = s.length()-2;
            cout << c << len2  << c2 <<endl;
        }else {
            cout << s << endl;
        }
    }
}
