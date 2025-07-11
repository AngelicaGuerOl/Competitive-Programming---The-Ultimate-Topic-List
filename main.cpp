#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
        int n;
        cin>>n;
        for (int i= 1; i <= n; i++) {
                int x,y;
                cin>>x>>y;
                int suma=0;
                if (x > y) {
                        for ( int i = y+1; i <= x-1; i++) {
                                if (i%2!=0) {
                                        suma += i;
                                }
                        }
                }else {
                        for ( int i = x+1; i <= y-1; i++) {
                                if (i%2!=0) {
                                        suma += i;
                                }
                        }
                }
                cout  << suma << endl;
        }
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.