//nayems code

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

ll n, k;

ll find(ll i) {
	ll total = n * k + (n * (n - 1)) / 2;
	ll f1 = i * k + (i * (i - 1)) / 2;
	ll f2 = total - f1;
	return abs(f1 - f2);
}

void solve() {

	cin >> n >> k;

	ll left = 1, right = n, mid1, mid2, ans = 1e12;


	while (left <= right) {
		mid1 = left + (right - left) / 3;
		mid2 = right - (right - left) / 3;

		ll x1 = find(mid1);
		ll x2 = find(mid2);

		ans = min(ans, min(x1, x2));

		if (x1 < x2)
			right = mid2 - 1;
		else
			left = mid1 + 1;

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

