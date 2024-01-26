#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
label:
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
            goto label;
        }
        else
        {
            cout<<"YES"<<endl;
            int sum = 0;
            for(int i=1; i<=n/2; i++)
            {
                cout << 2*i << " ";
                sum += (2*i);
            }
            for(int i=1; i<n/2; i++)
            {
                cout << (2*i-1) << " ";
                sum -= (2*i-1);
            }
            cout<<sum<<endl;
        }
    }
}
