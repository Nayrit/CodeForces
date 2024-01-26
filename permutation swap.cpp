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
        vector<int>v(n);
        map<long long, long long> m1,m2,m3;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            m1[v[i]]=i+1;
        }
        for(int i=1; i<n; i++)
        {
            m2[i+1]=i+1;
        }
        int count=0,res=0;
        for(int i=0; i<n; i++){
            m3[abs(m1[i+1]=m2[i+1])]++;
        }
        long long gcd;
        for(auto x:m3)
            gcd=__gcd(gcd,x.first);
        cout<<gcd<<endl;
    }

}

