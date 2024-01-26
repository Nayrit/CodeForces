#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i]==s[j]&&s[j-1]!=s[i])
                {
                    cnt=0;
                    break;
                }
            }
        }
        if(cnt)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
