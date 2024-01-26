#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max_cont=0,max=0,min_cont=0,min=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    max=a[0];
    max_cont=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_cont=i;
        }
    }
    for(int i=max_cont; i>0; i--)
    {
        swap(a[i],a[i-1]);
    }
    min=a[n-1];
    min_cont=n-1;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]<min)
        {
            min=a[i];
            min_cont=i;
        }
    }
    cout<<max_cont+n-min_cont-1<<endl;
}
