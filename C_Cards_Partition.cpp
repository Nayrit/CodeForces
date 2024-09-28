#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#define int long long
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr,v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            int x;
            x=arr[i];
            v.push_back(x);
        }
        int maxElement = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            maxElement = max(maxElement, arr[i]);
        }

        int totalSum = accumulate(arr.begin(), arr.end(), 0LL);

        for (int i = n; i > 0; i--) {
            int quotient = (totalSum + k) / i;
            if (quotient * i <= totalSum - 1)
                continue;
            if (quotient <= maxElement - 1)
                continue;
            cout << i << endl;
            break;
        }
    }
}
