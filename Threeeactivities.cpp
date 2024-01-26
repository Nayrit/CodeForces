#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> array1(n), array2(n), array3(n);

        for (int i = 0; i < n; i++) {
            cin >> array1[i].first;
            array1[i].second = i + 1;
        }
        for (int i = 0; i < n; i++) {
            cin >> array2[i].first;
            array2[i].second = i + 1;
        }
        for (int i = 0; i < n; i++) {
            cin >> array3[i].first;
            array3[i].second = i + 1;
        }

        sort(array1.rbegin(), array1.rend());
        sort(array2.rbegin(), array2.rend());
        sort(array3.rbegin(), array3.rend());

        int ans = 0;

        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                for (int z = 0; z < 3; z++) {
                    if (array1[x].second != array2[y].second && array1[x].second != array3[z].second && array2[y].second != array3[z].second) {
                        ans = max(ans, array1[x].first + array2[y].first + array3[z].first);
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
