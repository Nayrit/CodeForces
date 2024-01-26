#include <bits/stdc++.h>
using namespace std;
int main() {
    string v;
    getline(cin, v);
    set<char> s;
    for (int i = 0; i < v.size(); i++) {
        if (isalpha(v[i])) {
            s.insert(v[i]);
        }
    }
    cout <<s.size()<< endl;
}
