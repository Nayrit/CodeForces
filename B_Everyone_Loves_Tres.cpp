#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ulli unsigned long long int 
#define endl "\n"
int lcm(int n,int m){return (n*m)/__gcd(n,m);}
//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL)


void solve()
{
    ll n; cin>>n;

    if(n==3 || 1==n) cout<<-1<<endl;
    else if(n%2==0)
    {
        for(int i=0; i<n-2; i++) cout<<3;
        cout<<66<<endl;
    }
    else
    {
        for(int i =0; i<n-5; i++) cout<<3;
        cout<<36366<<endl;
    }
    
    
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    



    return 0;
}
