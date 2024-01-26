#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b;
        c =  min(max(2*b,a),max(2*a,b));
        d=c*c;
        cout<<d<<endl;
    }
}
