#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n,x,y,a=0,b=0,c=0,d=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x>>y;
            if(x>0)
                a=1;
            if(x<0)
                b=1;
            if(y>0)
                c=1;
            if(y<0)
                d=1;
        }
        if(a && b && c && d)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
