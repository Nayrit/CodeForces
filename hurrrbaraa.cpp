#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> mp;
int solve(vector<vector<int>> &wtf,int p,int i)
{
    int res=0;
    for(int j=0; j<wtf[i].size(); j++)
    {
        if(wtf[i][j]==p)continue;
        int x=0;
        if(mp[ {p,i}]>mp[ {i,wtf[i][j]}])
            x++;
        res=max(res,x+solve(wtf,i,wtf[i][j]));
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> wtf(n+1);
        mp.clear();
        for(int i=0; i<n-1; i++)
        {
            int x,y;
            cin>>x>>y;
            mp[ {x,y}]=i;
            mp[ {y,x}]=i;
            wtf[x].push_back(y);
            wtf[y].push_back(x);
        }
        int res=INT_MIN;
        for(int i=0; i<wtf[1].size(); i++)
        {
            res=max(res,solve(wtf,1,wtf[1][i]));
        }
        cout<<res+1<<endl;
    }
}
