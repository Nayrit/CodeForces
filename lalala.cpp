#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        int nayrit,lopa;
        cin>>n;
        x=y=z=INT_MAX;
        string str;
        for(int i=0; i<n; i++)
        {
            cin>>nayrit>>str;
            if(str=="01")
                x=min(x,nayrit);
            else if(str=="10")
                y=min(y,nayrit);
            else if(str=="11")
                z=min(z,nayrit);
        }
        if(x==INT_MAX || y==INT_MAX)
        {
            lopa=min(INT_MAX,z);
        }
        else
            lopa=min(x+y,z);
        if(lopa==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
            cout<<lopa<<endl;
    }
}
