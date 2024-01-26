#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=1;
        cin>>n;
        vector<int> v;
        while(n>0)
        {
            if(n%10>0)
                v.push_back(n%10*x);
            n/=10;
            x*=10;
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++ )
            cout<<v[i]<<" ";
        cout<<endl;
    }
}
