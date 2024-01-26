#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector< int > v(n);
        map<long long,long long> map1,map2,map3;
        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
            map1[v[i]]=i+1;
        }
        for(int i = 0; i < n; i++)
        {
            map2[i+1]=i+1;
        }
        long long count=0, ans=0;
        for(int i = 0; i < n; i++)
        {
            map3[abs(map1[i+1]-map2[i+1])]++;
        }
        long long g;
        for(auto x: map3)
        {
            g=x.first;
            break;
        }
        for(auto x: map3)
            g=__gcd(g,x.first);
        cout<<g<<endl;
    }
    return 0;
}
