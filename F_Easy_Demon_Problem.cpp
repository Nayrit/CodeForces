#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    // Step 1: Compute the total grid sum (beauty)
    long long total_sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            total_sum += a[i] * b[j];

    // Step 2: Precompute row sums and column sums
    vector<long long> row_sum(n, 0), col_sum(m, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            row_sum[i] += a[i] * b[j];
            col_sum[j] += a[i] * b[j];
        }

    // Step 3: Store all b[j] values in a set for fast lookup
    unordered_set<long long> b_set(b.begin(), b.end());

    // Step 4: Process each query
    while (q--) {
        long long x;
        cin >> x;

        bool possible = false;

        // Iterate through all rows
        for (int r = 0; r < n && !possible; r++) {
            // Calculate the "target value" for b[c]
            long long target = x - (total_sum - row_sum[r]);

            // Check if b[c] can be found
            if (a[r] != 0 && target % a[r] == 0) { // Avoid division by zero
                long long required_b = target / a[r];
                if (b_set.count(required_b)) {
                    possible = true;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}
