#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    if(n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = s[i]+32;
        }
    }
    sort(s.begin(),s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
            count++;
    }
    if(count == 26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
