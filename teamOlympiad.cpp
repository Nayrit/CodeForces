#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v,a,b,c;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(x==1)
            a.push_back(i);
        if(x==2)
            b.push_back(i);
        if(x==3)
            c.push_back(i);
    }
    int x=a.size();
    int y=b.size();
    int z=c.size();
    int m=min(x,min(y,z));
    cout<<m<<endl;
    for(int i=0; i<m; i++){
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
}
