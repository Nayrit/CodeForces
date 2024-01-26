#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,t;
        cin>>n>>t;
        vector<int>v(n),b(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int ans=-1, m=-1;
        for(int i=0; i<n; i++)
        {
            if(v[i] <= t--)
            {
                if(b[i]>m)
                {
                    m=b[i];
                    ans=i+1;
                }
            }
        }
        cout<<ans<<endl;
    }
}
