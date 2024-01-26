#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> v={3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5};
    for(int i=0; i<t; i++)
    {
        long long ans=1;
        while(v[i]--)
        {
            long long x;
            cin>>x;
            ans = ans*x;
        }
        cout<<ans<<endl;
    }
}
