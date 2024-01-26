#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        unordered_map<int, int> a;
        unordered_map<int, int> b;
        int count = 1;

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && v[i] == v[i - 1])
                count++;
            else
            {
                a[v[i - 1]] =  max(count, a[v[i - 1]]);
                count = 1;
            }
        }
        a[v[n - 1]] =  max(count, a[v[n - 1]]);

        count = 1;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && v2[i] == v2[i - 1])
                count++;
            else
            {
                b[v2[i - 1]] =  max(count, b[v2[i - 1]]);
                count = 1;
            }
        }
        b[v2[n - 1]] =  max(count, b[v2[n - 1]]);

        int res = 0;
        for (int e : v)
            res =  max(res, a[e] + b[e]);
        for (int e : v2)
            res =  max(res, b[e] + a[e]);
        cout<<res<<endl;
    }
}
