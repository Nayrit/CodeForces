#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,cnt=0,c=0;
    cin>>n>>p;
    vector<int>v;
    for(int i=0; i<p; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<v.size(); j++){
            if(v[j] == i){
                cnt++;
                break;
            }
        }
    }
    if(cnt==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
