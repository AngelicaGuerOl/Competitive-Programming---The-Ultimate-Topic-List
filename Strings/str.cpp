#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    // Read the entire line of input
    getline(cin, S);
    // Find the position of the first '\'
    size_t pos = S.find('\\');
    // Extract the substring from the start to just before '\'
    string result = S.substr(0, pos);
    // Print the result
    cout << result << endl;
    return 0;
}
