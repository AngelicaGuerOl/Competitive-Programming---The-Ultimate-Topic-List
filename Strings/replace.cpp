#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1, s2;
  cin >> s1 >> s2;
  cout << s1.length() << " " << s2.length() << endl;
  cout << s1 << s2 <<endl;
  char c1= s2[0];
  char c2= s1[0];
  //convertir char a string, 1 caracter y luego la variable de char
  string s4(1,c1);
  string s5(1,c2);
  s1.replace(0,1,s4);
  s2.replace(0,1,s5);
  cout << s1 << " " << s2 << endl;
}
