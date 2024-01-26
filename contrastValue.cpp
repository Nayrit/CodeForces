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
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        a.resize(unique(a.begin(),a.end())-a.begin());
        int l=(int)a.size();
        int y=l;
        for(int i=1; i<l-1; i++)
            if((a[i]>a[i-1])==(a[i]<a[i+1]))
                y--;
        cout<<y<<endl;
    }
}

