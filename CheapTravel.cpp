#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<b)
        cout<<n*a<<endl;
    else
    {
        int bakituk = (n%m)*a;
        if(bakituk>b)
            cout<<((n/m)*b)+b<<endl;
        else
            cout<<((n/m)*b)+bakituk<<endl;
    }
    return 0;
}
