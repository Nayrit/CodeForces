#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    label:
    while (t--)
    {
        string s;
        cin>>s;
        if (count(s.begin(),s.end(), s[0]) == s.size())
        {
            cout << -1 << endl;;
            goto label;
        }
        else cout << s.size() - 1 << endl;
    }
}
