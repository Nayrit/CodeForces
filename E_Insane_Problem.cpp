#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int k, l1, r1, l2, r2;
        vector<int>v;
        for(int i=0;i<5;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        k=v[0];
        l1=v[1];
        r1=v[2];
        l2=v[3];
        r2=v[4];
        int ans = 0;
        int p = 1;
        while (p <= r2 / l1)
        {
            int lx = (l2 + p - 1) / p;
            int rx = r2 / p;
            lx = max(lx, l1);
            rx = min(rx, r1);
            if (lx <= rx)
                ans += (rx - lx + 1);
            if (p > r2 / k)
                break;
            p *= k;
        }
        cout << ans << endl;
    }
}
