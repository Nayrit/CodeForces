//Nayem's code

#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "DEBUG.h"
#define bug(...)           __f (#__VA_ARGS__, __VA_ARGS__)
#endif

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll                 long long int
#define double             long double
#define min_heap           priority_queue <ll, vector<ll>, greater<ll>>
#define print(a)           for(auto x : a) cout << x << " ";
#define printpair(a)       for(auto x : a) cout << x.first << " " << x.second<<"\n";



void solve()
{
    ll n;
    cin >> n;
    map<ll, ll>y0, y1;

    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;

        if (y == 0)
            y0[x]++;
        else
            y1[x]++;
    }

    ll ans = 0;

    for (auto x : y0)
    {
        ll z = x.first;

        if (y1.count(z - 1) and y1.count(z + 1))
            ans++;

        if (y1.count(z))
            ans += y0.size() - 1;

    }


    for (auto x : y1)
    {
        ll z = x.first;

        if (y0.count(z - 1) and y0.count(z + 1))
            ans++;

        if (y0.count(z))
            ans += y1.size() - 1;

    }

    cout << ans << "\n";
}


int main()
{
    first_in_out
    //clock_t z = clock();

    ll t = 1;
    cin >> t;

    while (t--)
        solve();

    //cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
}

