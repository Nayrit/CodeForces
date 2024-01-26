#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, res;
        cin >> s;
        int n = s.size();
        vector<int> u, l, ans(n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                if (!l.empty())
                    l.pop_back();
            }
            else if (s[i] == 'B')
            {
                if (!u.empty())
                    u.pop_back();
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
                l.push_back(i);
            else
                u.push_back(i);
        }
        for (int i : u)
        {
            ans[i] = 1;
        }
        for (int i : l)
        {
            ans[i] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i])
                res += s[i];
        }
        cout << res << endl;
    }
}