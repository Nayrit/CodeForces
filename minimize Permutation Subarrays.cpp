#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,highest=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==1)
                x=i+1;
            else if(v[i]==2)
                y=i+1;
            if(v[highest]<v[i])
                highest=i;
        }
        highest=highest+1;
        if(x<highest && y<highest)
        {
            if(x>y)
                cout<<x<<" "<<highest<<endl;
            else
                cout<<y<<" "<<endl;
        }
        else if(x>highest && y>highest)
        {
            if(x>y)
                cout<<y<< " "<<endl;
            else
                cout<<x<<" "<<endl;
        }
        else
            cout<<n<<" "<<n<<endl;
    }
}
