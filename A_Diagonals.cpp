#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
    if (k <= n) {
        cout << (k > 0) << "\n";
        continue;
    }
    k -= n;
    int ans = 1, x = n - 1;
    while (k > 0) {
        k -= x;
        ans++;
        if (k<=0) break;
        k -= x;
        ans++;
        x--;
    }
    cout << ans << "\n";
    }
}