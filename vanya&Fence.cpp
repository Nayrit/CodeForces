#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,cnt=0;
    cin>>n>>h;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]>h)
            cnt++;
    }
    cout<<n+cnt<<endl;
}
