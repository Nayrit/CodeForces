#include<bits/stdc++.h>
using namespace std;
int checkGR(int n, int m)
{
    if(m==n)
        return 1;
    if(m>n || n%3!=0)
        return 0;
    if(checkGR(n/3,m))
        return checkGR(n/3,m);
    else
        return checkGR(n-n/3,m);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=checkGR(a,b);
        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
