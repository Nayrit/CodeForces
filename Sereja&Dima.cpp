#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int s=0,d=0,l=0,r=n-1;
    for(int i=0; l<=r; i++)
    {
        if(i%2==0)
        {
            if(v[l]>v[r])
            {
                s=s+v[l];
                l++;
            }
            else
            {
                s=s+v[r];
                r--;
            }
        }
        else
        {
            if(i%2!=0)
            {
                if(v[l]>v[r])
                {
                    d=d+v[l];
                    l++;
                }
                else
                {
                    d=d+v[r];
                    r--;
                }
            }
        }
    }
    cout<<s<<" "<<d<<endl;
}
