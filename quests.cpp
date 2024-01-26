#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {

        int p, q;
        cin >> p >> q;
        vector<int> v,v1;
        vector<int> w,w1;
        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            w.push_back(x);
        }
        for (int i = 0; i < p; i++)
        {
            v1.push_back(v[i]);
        }
        int ans = 0, sum = 0, mx = 0;
        for (int i = 0; i < p; i++)
        {
            if (i >= q)
            {
                break;
            }
            sum += v[i];
            mx = max(w[i], mx);
            int calsum = sum + mx * (q - i - 1);
            ans = max(calsum, ans);
        }
        cout << ans << endl;
    }
}