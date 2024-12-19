#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, q = "";
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'p') q += 'q';
            else if (s[i] == 'q') q += 'p';
            else q += s[i];
        }
        cout << q << endl;
    }
}