#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int num1,num2;
    cin >> s;
    size_t suma = s.find("+");
    size_t mult = s.find("*");
    size_t rest = s.find("-");
    size_t div = s.find("/");
    if (suma != string::npos) {
        string sub1=s.substr(0, suma);
        string sub2=s.substr(suma+1);
        int num=stoi(sub1);
        int num2=stoi(sub2);
        cout << num+num2 << endl;
    }else if (mult!= string::npos) {
        string sub1=s.substr(0, mult);
        string sub2=s.substr(mult+1);
        int num=stoi(sub1);
        int num2=stoi(sub2);
        cout << num*num2 << endl;
    }else if (rest!= string::npos) {
        string sub1=s.substr(0, rest);
        string sub2=s.substr(rest+1);
        int num=stoi(sub1);
        int num2=stoi(sub2);
        cout << num-num2 << endl;
    }else if (div!= string::npos) {
        string sub1=s.substr(0, div);
        string sub2=s.substr(div+1);
        int num=stoi(sub1);
        int num2=stoi(sub2);
        cout << num/num2 << endl;
    }
}