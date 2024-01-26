#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b;
        k=abs(a-b);
        if(k%10==0)
            cout<<k/10<<endl;
        else
            cout<<k/10 + 1<<endl;
    }
}
