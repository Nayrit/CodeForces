#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int ans=abs(v[n-1] - v[0]);
        for(int i=1; i<n/2; i++)
        {
            ans=gcd(ans,abs(v[n-i-1] - v[i]));
        }
        cout<<ans<<endl;
    }
}
