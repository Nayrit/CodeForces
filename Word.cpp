#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0;
    string s;
    char ch,bh;
    cin>>s;
    int c=s.size();
    for(int i=0; i<c; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a++;
        if(s[i]>='A' && s[i]<='Z')
            b++;
    }
    if(a>=b)
    {
        for(int i=0; i<c; i++)
        {
            ch=tolower(s[i]);
            cout<<ch;
        }
        cout<<endl;
    }

    else
    {
        for(int i=0; i<c; i++)
        {
            bh = toupper(s[i]);
            cout<<bh;
        }
        cout<<endl;
    }
}
