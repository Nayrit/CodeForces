#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a,b;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++){
            int x=a[i];
            b.push_back(x);
        }
        int mx0 = 0, cnt0 = 0, mx1 = 0, cnt1 = 0;
        for (int i = 0; i < n; i += 2) {
            mx0 = max(mx0, a[i]);
            cnt0++;
        }
        for (int i = 1; i < n; i += 2) {
            mx1 = max(mx1, a[i]);
            cnt1++;
        }
        cout << max(mx0 + cnt0, mx1 + cnt1) << endl;
    }
}
