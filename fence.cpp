#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,ans=0,pos=0;
        cin>>x;
        int num=x%10;
        while(x>0)
        {
            pos++;
            x/=10;
        }
        ans=(num-1)*10;
        if(pos==1)
            ans+=1;
        else if(pos==2)
            ans+=3;
        else if(pos==3)
            ans+=6;
        else if(pos==4)
            ans+=10;
        cout<<ans<<endl;
    }

}
