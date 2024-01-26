#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,cnt=0;
    cin>>n>>k;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]>0)
            if(v[i]>=v[k-1])
                cnt++;
    }
    cout<<cnt<<endl;
}

