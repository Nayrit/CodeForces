#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> distinctChars;
        vector<int> prefixCount(n, 0);
        for (int i = 0; i < n; i++) {
            distinctChars.insert(s[i]);
            prefixCount[i] = distinctChars.size();
        }
        int distinctSubstrings = 0;
        for (int count : prefixCount) {
            distinctSubstrings += count;
        }
        cout << distinctSubstrings << endl;
    }

    return 0;
}
