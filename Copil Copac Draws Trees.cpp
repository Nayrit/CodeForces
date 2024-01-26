#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> v;
        for(int i=0; i<n-1; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        int ans = 0;
        unordered_set <int> s;
        s.insert(1);
        while(s.size()<n)
        {
            ans++;
            for(auto i:v)
            {
                if(s.find(i.first)!=s.end())
                    s.insert(i.second);
            }
        }
        cout<<ans<<endl;
    }
}
