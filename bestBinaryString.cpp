#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char sy = '0';
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='?')
            {
                s[i]=sy;
            }
            else
            {
                sy=s[i];
            }

        }
        cout<<s<<endl;
    }
}
