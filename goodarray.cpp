#include<bits/stdc++.h>
using namespace std;
void nayrit()
{
    int n,k,a;
    cin>>n>>k;
    a=n;
    for(int i=1; i<=n; i++)
    {
        int j=(i+k-2)/k;
        int l= (n-i+k-1)/k;
        a=min(a,j+l);
    }
    cout<<a+1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nayrit();
    }
}
