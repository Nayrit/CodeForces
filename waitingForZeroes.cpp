#include <bits/stdc++.h>
using namespace std;
int cnt(double x)
{
    int tot = 0;
    while (x > 0)
    {
        tot++;
        x = x / 10;
    }
    return tot;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, rn = 0, r;
        cin >> n;
        int x = n * 2;
        int w = cnt(x);
        while (x != 0)
        {
            r = x % 10;
            rn = rn * 10 + r;
            x /= 10;
        }
        int q = cnt(rn);
        cout << w - q << endl;
    }
    return 0;
}
