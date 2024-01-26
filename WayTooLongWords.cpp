#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string c;
        cin>>c;
        int x = c.size();
        if(x>10)
        {
            for(int i=0; i<=x; i++)
            {
                if(i==0)
                    cout<<c[i]<<x-2;
                if(i==x-1)
                    cout<<c[i]<<endl;
            }
        }
        else
            cout<<c<<endl;
    }
    return 0;
}
