//Even Array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        int cnt=0;
        int temp=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2==0)
            {
                if(a[i]%2!=0)
                    cnt++;
            }
            else
            {
                if(a[i]%2==0)
                    temp++;
            }
        }
        if(cnt!=temp)
            cout<<-1<<endl;
        else
            cout<<cnt<<endl;
    }
}
