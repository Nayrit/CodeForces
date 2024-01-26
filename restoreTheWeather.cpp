#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fr(n) for(int i=0;i<n;++i)
#define ff first
#define ss second
#define all(n) n.begin(),n.end()
#define mii map<int,int>
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<pair<int,int>> a(n),b(n);
        fr(n) cin>>a[i].ff;
        fr(n) cin>>b[i].ff;
        fr(n)
        {
            a[i].ss=i;
            b[i].ss=i;
        }
        sort(all(a));
        sort(all(b));
        mii m;
        fr(n)
        {
            m[a[i].ss]=b[i].ss;
        }
        mii p;
        fr(n)
        {
            p[b[i].ss]=b[i].ff;
        }
        fr(n)
        {
            int ind=m[i];
            cout<<p[ind]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
