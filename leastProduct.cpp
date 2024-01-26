#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long int> A(n);

        for (int i = 0; i < n; i++)
            cin >> A[i];

        bool negative = false;
        bool zero = false;

        for (long long int i : A) {
            if (i < 0) {
                negative = !negative;
            } else if (i > 0) {
                continue;
            } else {
                zero = true;
            }
        }

        if (zero || negative) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
            cout << "1 0" << endl;
        }
    }

    return 0;
}
