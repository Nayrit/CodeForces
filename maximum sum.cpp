#include<bits/stdc++.h>
using namespace std;
void nayrit(long long n,long long k, long long v[],long long all)
{
    long long ma = 0;
    sort(v, v + n);

    long long p[n + 1], s[n + 1];
    p[0] = 0;

    for (long long i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] + v[i - 1];
    }

    reverse(v, v + n);

    s[0] = 0;

    for (long long i = 1; i <= n; i++)
    {
        s[i] = s[i - 1] + v[i - 1];
    }

    for (long long i = 0; i <= k; i++)
    {
        long long l = p[2 * i];
        long long r = s[k - i];
        ma = max(ma, all - (l + r));
    }

    cout << ma << endl;

}
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long n, k;
        long long all = 0;
        cin >> n >> k;

        long long v[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            all += v[i];
        }
        nayrit(n,k,v,all);
    }
    return 0;
}
abba
