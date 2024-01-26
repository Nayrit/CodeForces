#include<bits/stdc++.h>
using namespace std;
void nayrit()
{
    int n;
    cin>>n;
    vector<int>v(n+1),b(n+1);
    map<int,vector<int>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i]>>b[i];
        m[v[i]].emplace_back(b[i]);
    }
    for(int i=1; i<=n; i++)
    {
        sort(m[i].begin(),m[i].end(),greater<int>());
    }
    long long res=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i && j<m[i].size(); j++)
        {
            res=res+m[i][j];
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nayrit();
    }
}
