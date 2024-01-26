#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, cnt = 0;
        string x, s;
        cin >> n >> m;
        cin >> x >> s;

        bool found = false;
        while (cnt < 7) {
            if (x.find(s) != string::npos) {
                found = true;
                break;
            }
            x += x;
            cnt++;
        }

        if (found) {
            cout << cnt << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
