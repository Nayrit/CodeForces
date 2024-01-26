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
        string s;
        cin>>s;
        int l=0,r=0;
        for (int i = 1; i <= n; i++)
        {
            if(s[i-1]==')')
                r++;
            else
            l++;
        }
        if(l!=r)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> p(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            if(s[i-1]=='(') p[i]=p[i-1]+1;
            else p[i]=p[i-1];
        }
        bool pos=0,neg=0;
        for (int i = 1; i <= n; i++)
        {
            if(p[i]-i+p[i]>0) pos=1;
            if(p[i]-i+p[i]<0) neg=1;
        }
        if(!(neg&&pos))
        {
            cout<<1<<endl;
            for (int i = 1; i <= n; i++)
                cout<<1<<" ";
            cout<<endl;
            continue;
        }
        vector<int> a(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            //cout<<p[i]<<" ";
            if(p[i]==(n-i-(p[n]-p[i])))
            {
                //cout<<"hell";
                for (int j = 1; j <= i; j++)
                {
                    if(s[j-1]=='(') a[j]=1;
                    else a[j]=2;
                }
                for (int j = i+1; j <= n; j++)
                {
                    if(s[j-1]=='(') a[j]=2;
                    else a[j]=1;
                }
                break;
            }
        }
        cout<<2<<endl;
        for (int i = 1; i <= n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
