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
        vector<int>a,c,v;
        for(int i=0; i<n; i++)
        {
            int x;
            string y;
            cin>>x;
            cin>>y;
            if(y=="00")
            {
                a.push_back(x);
            }
            if(y=="10" || y=="01")
            {
                c.push_back(x);
            }
            if(y=="11")
            {
                v.push_back(x);
            }
        }
        if(c[0])
        {
            sort(c.begin(),c.end());
        }
        if(v[0])
        {
            sort(v.begin(),v.end());
        }
        if(v[0])
        {
            if(c[0]+c[1]<=v[0])
                cout<<c[0]+c[1]<<endl;
            else
                cout<<v[0]<<endl;
        }
        else if(c[0] && c[1])
        {
            cout<<c[0]+c[1]<<endl;
        }
        else
            cout<<-1<<endl;

    }
}
