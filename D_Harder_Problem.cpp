#include <iostream>
#include <vector>
#include<set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int m = 0;
        set<int> have;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
            have.insert(a[i]);
        }

        vector<int> u;
        for (int i = 1; i <= n; i++)
        {
            if (have.find(i) == have.end())
            {
                u.push_back(i);
            }
        }
        int k = 0;
        set<int> s;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (s.find(a[i]) == s.end())
            {
                res.push_back(a[i]);
                s.insert(a[i]);
            }
            else
            {
                res.push_back(u[k]);
                k++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
