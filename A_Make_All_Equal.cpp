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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int mini = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]] > mini)
                mini = mp[v[i]];
        }
        cout << n - mini << "\n";
    }
}