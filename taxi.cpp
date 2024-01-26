#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c1=0,c2=0,c3=0,c4=0,sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            c1++;
        if(arr[i]==2)
            c2++;
        if(arr[i]==3)
            c3++;
        if(arr[i]==4)
            c4++;
    }
    sum+=c4;
    while(c2>1)
    {
        sum+=1;
        c2-=2;
    }
    while(c2!=0&&c1!=0)
    {
        if(c1>=2)
        {
            c1-=2;
            sum+=1;
            c2--;
            continue;
        }
        if(c1==1)
        {
            c1-=1;
            sum+=1;
        }
        c2--;
    }
    while(c3--)
    {
        if(c1>=1)c1-=1;
        sum+=1;
    }
    int d=c2+c1;
    if(d%4==0&&d>0)
        sum+=d/4;
    else if (d%4!=0&&d>0)
        sum+=d/4+1;
    cout<<sum;
}

