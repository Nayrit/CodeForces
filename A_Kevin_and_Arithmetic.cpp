#include <iostream>
#include <algorithm> // for std::min
using namespace std;

int main() {
    bool yes = true;
    int n;
    cin >> n;
    long a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        long minVal = min(a[i], a[i + 1]);
        a[i] -= minVal;
        a[i + 1] -= minVal;

        if (a[i] > a[i + 1]) {
            yes = false;
            break;
        }
    }

    if (yes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}